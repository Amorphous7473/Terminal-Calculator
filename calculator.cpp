#include <cctype>
#include <iostream>
#include<vector>
#include <limits>
using namespace std;
//All Arithmetic Classes
int addition(vector<int> nums)
{
    int ans = 0;
    for(int i: nums)
    {
        ans += i;
    }
    return ans;
}
int subtraction(vector<int> nums)
{
    int ans = nums[0];
    for(int i = 1; i <nums.size(); i++)
    {
        ans -= nums[i];
    }
    return ans;
}
int multiplication(vector<int> nums)
{
    int ans = 1;
    for(int i: nums)
    {
        ans *= i;
    }
    return ans;
}
int division(vector<int> nums)
{
    int ans = 1;
    for(int i: nums)
    {
        ans /= i;
    }
    return ans;
}
int modulo(vector<int> nums)
{
    int ans = 0;
    for(int i: nums)
    {
        ans %= i;
    }
    return ans;
}

//The main Class
int main()
{
    //Variables
    int a, i = 0;
    string n;
    vector<int> nums;
    //Cout Statements
    cout<<"Calculator:\n\nSelect the Type of Arithmetic operations by typing it's serial number";
    cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n";
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
        if(!isdigit(c))
        {
            digit = false;
            break;
        }
        }
        int blah;
        if(!digit)
        {
            cout<<"Please enter a valid number";
            continue;
        }
        blah = stoi(n);
        nums.push_back(blah);
        continue;
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
    else if(a == 5)
    {
        cout<<modulo(nums);

    }
    else if(a == 6)
    {
        cout<<mixed(nums);
    }
    return 0;
}
