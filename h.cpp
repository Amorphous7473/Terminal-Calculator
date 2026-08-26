#include <cctype>
#include<iostream>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int answer = 1, count=0;
    for(char i:n)
    {
        int fn;
        if(isdigit(i))
        {
            fn = i;
            continue;
        }
        if(i == '+')
        {
            answer += fn;
            count++;
        }
        if(i == '-')
        {
            answer -= fn;
            count++;
        }
        if(i == '*')
        {
            answer *= fn;
        }
        if(i == '/')
        {
            answer /= fn;
        }
    }
    if(count>=1)
    {
        answer--;
    }
    cout<<answer;
}
