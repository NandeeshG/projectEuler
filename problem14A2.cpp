#include "InfInt.h"
#include<iostream>
#include<string>
using namespace std;

InfInt fact(InfInt n)
{
    InfInt result = 1;
    for (InfInt i=2; i<=n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    InfInt a = fact(40);
    InfInt b = fact(20);
    a /= b;
    a /= b;
    string s = a.toString();
    cout<<s<<endl;

    return 0;
}


