#include<iostream>
using namespace std;

long long run(long long n)
{
    long long len=0;
    while(n!=1)
    {
        if(n&1)
        {
            n = (3*n + 1);
        }
        else
        {
            n /= 2;
        }
        ++len;
    }
    return len;
}


int main()
{
    long long len=0;
    long long at;
    long long start,end;
    cin>>start>>end;
    for(long long i=start; i<=end; ++i)
    {
        long long temp = run(i);
        if(temp > len)
        {
            len = temp;
            at = i;
        }
        cout<<i<<' '<<temp<<endl;
    }
    cout<<endl<<endl<<"AT "<<at<<" LEN "<<len<<endl;
    return 0;
}


//AT 77031 LEN 350
//AT 410011 LEN 448
//AT 626331 LEN 508
//AT 837799 LEN 524
//last answer is correct
