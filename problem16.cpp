#include "InfInt.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
    InfInt num(2);
    int n;
    cin>>n;
    for(int i=0; i<n-1; ++i)
    {
        num *= 2;
    //string str = num.toString();
    //cout<<str<<endl;
    //cout<<num.numberOfDigits()<<endl;
    }   

    unsigned long long sum = 0;
    for(int i=0; i<num.numberOfDigits(); ++i)
    {
        int temp = num.digitAt(i);
        //cout<<temp<<' ';
        sum += temp;
    }
    cout<<sum;
    return 0;
}


