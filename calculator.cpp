#include <iostream>
#include<vector>
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
    int ans = 0;
    for(int i: nums)
    {
        ans = i - ans;
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
int main()
{
    //Variables
    int a, i = 0, n = 0;
    vector<int> nums;
    //Cout Statements
    cout<<"Calculator:\n Select the Type of Arithmetic operations by typing it's serial number";
    cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n";
    if(cin>>a)
    {
    cout<<"Press 'Enter' to put the next number and press '=' to calculate the final results\n";
    while(cin>>n)
    {
        nums.push_back(n);
        if(nums[i] == '=')
        {
            break;
        }
        i++;
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
    else if(a == 5 && nums.size() == 2)
    {
        cout<<modulo(nums);

    }
    }
    return 0;
}
