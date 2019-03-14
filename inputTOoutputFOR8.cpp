#include<iostream>
using namespace std;

int main()
{
    char str[51];
    for(int i=0; i<20; ++i)
    {
        cin>>str;
        for(int j=0; j<50; ++j)
        {
            cout<<str[j]<<' ';
        }
    }
    return 0;
}

