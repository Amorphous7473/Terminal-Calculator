#include <cctype>
#include <iostream>
#include <ratio>
#include<vector>
#include <limits>
#include<string>
using namespace std;
//All Arithmetic Classes
float addition(vector<float> nums)
{
    float ans = 0;
    for(float i: nums)
    {
        ans += i;
    }
    return ans;
}
float subtraction(vector<float> nums)
{
    float ans = nums[0];
    for(int i = 1; i <nums.size(); i++)
    {
        ans -= nums[i];
    }
    return ans;
}
float multiplication(vector<float> nums)
{
    float ans = 1;
    for(float i: nums)
    {
        ans *= i;
    }
    return ans;
}
float division(vector<float> nums)
{
    float ans = nums[0];
    for(int i = 1; i<nums.size(); i++)
    {
        ans /= nums[i];
    }
    return ans;
}
//The main function
int main()
{
    //Variables
    int a;
    string n;
    vector<float> nums;
    //Cout Statements
    cout<<"Calculator:\n\nSelect the Type of Arithmetic operations by typing it's serial number";
    cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    while(true)
    {
        cin>>a;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Deletes the garbage text from the buffer
        cout<<"Please enter a number: ";
        continue;
        }
        else if(a>5||a<1)
        {
            cout<<"Please enter a number between 1 and 5: ";
            continue;
        }
            break;
    }
    cout<<"Press 'Enter' to put the next number and press '=' to calculate the final results\n";

    while(true)
    {
        cin>>n;
        if(n == "=")
        {
            break;
        }
        bool digit = true;
        for(char c: n)
        {
        if(c != '.' && c!= '-')
        {
        if(!isdigit(c))
        {
            digit = false;
            break;
        }
        }
        }
        float blah;
        if(!digit)
        {
            cout<<"Please enter a valid number";
            continue;
        }
        blah = stof(n);
        nums.push_back(blah);
        continue;
    }
        if(nums.empty())
    {
        cout << "No numbers entered.\n";
        return -1;
    }
    if(a == 1)
    {
        cout<<addition(nums);
    }
    else if(a == 2)
    {
        cout<<subtraction(nums);

    }
    else if(a == 3)
    {
        cout<<multiplication(nums);

    }
    else if(a == 4)
    {
        cout<<division(nums);

    }
    return 0;
}
