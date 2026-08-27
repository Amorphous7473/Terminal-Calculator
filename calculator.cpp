#include <cctype>
#include <iostream>
#include<vector>
#include <limits>
#include<string>
using namespace std;
//All Arithmetic Classes
int addition(vector<int> nums)
{
    float ans = 0;
    for(float i: nums)
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
int mixed() {
    string n;
    int number, answer = 1, count = 0, arithmetic = 0;
    cout << "In this mode, the equations will be calculated from the left to the right. It will not follow BODMAS Rule\n";
    cin >> n;
    for (char i : n) {
        if (isdigit(i)) {
            number = i - '0'; // Convert char to int
            arithmetic = 0;
            continue;
        }
        else if (i == '+') {
            answer += number;
            count++;
            arithmetic++;
            if (arithmetic > 1) {
                cout << "Found an extra arithmetic " << "'" << "+" << "'" << ". Removing " << "+";
            }
            continue;
        }
        else if (i == '-') {
            answer -= number;
            count++;
            arithmetic++;
            if (arithmetic > 1) {
                cout << "Found an extra arithmetic " << "'" << "-" << "'" << ". Removing " << "-";
            }
            continue;
        }
        else if (i == '*') {
            answer *= number;
            arithmetic++;
            if (arithmetic > 1) {
                cout << "Found an extra arithmetic " << "'" << "*" << "'" << ". Removing " << "*";
            }
            continue;
        }
        else if (i == '/') {
            if (number == 0) {
                cout << "Error: Division by zero is not allowed.\n";
                return numeric_limits<int>::max(); // Return a large number to indicate error
            }
            answer /= number;
            arithmetic++;
            if (arithmetic > 1) {
                cout << "Found an extra arithmetic " << "'" << "/" << "'" << ". Removing " << "/";
            }
            continue;
        }
        else if (i == '%') {
            answer %= number;
            arithmetic++;
            if (arithmetic > 1) {
                cout << "Found an extra arithmetic " << "'" << "%" << "'" << ". Removing " << "%";
            }
            continue;
        }
    }
    if (count >= 1) {
        answer--;
    }
    return answer;
}

//The main function
int main()
{
    //Variables
    int a, i = 0;
    string n;
    vector<int> nums;
    //Cout Statements
    cout<<"Calculator:\n\nSelect the Type of Arithmetic operations by typing it's serial number";
    cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n6.Mixed\n";
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
        else if(a>6||a<1)
        {
            cout<<"Please enter a number between 1 and 6: ";
            continue;
        }
        else if(a == 6)
        {
            cout<<mixed();
            return 0;
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
        if(c != '.')
        {
        if(!isdigit(c))
        {
            digit = false;
            break;
        }
        }
        }
        int blah;
        if(!digit)
        {
            cout<<"Please enter a valid number";
            continue;
        }
        blah = stof(n);
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
    return 0;
}
