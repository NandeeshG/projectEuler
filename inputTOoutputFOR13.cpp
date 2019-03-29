#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char x;
    for(int i=0; i<100; ++i)
    {
        for(int j=0; j<=50; ++j)
        {
            x = getchar();
            if(x != 13)
                cout<<x<<' ';
            else
                cout<<endl;
        }
        //cout<<endl;
    }
    return 0;
}


