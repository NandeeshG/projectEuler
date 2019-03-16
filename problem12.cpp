#include<iostream>
#define inc(i,l) for(long long int i=0; i<l; ++i) 
#define dec(i,l) for(long long int i=l-1; i>=0; --i)
#define incs(i,l,s) for(long long int i=s; i<l; ++i) 
#define decs(i,l,s) for(long long int i=l-1; i>=s; --i)
#define SIZE 20
using namespace std;

long long int nDiv(long n)
{
    long long int ans=2;
    incs(i,n/2+1,2)
    {
        if(n%i == 0)
            ++ans;
    }
    return ans;
}
        
int main()
{
    //incs(i,100000,9000)
    //start from 9000 itself
    incs(i,100000,15000)
    {
        long long int t = i*(i+1)/2;
        long long int a = nDiv(t);
        cout<<i<<' '<<t<<' '<<a<<endl;
        if(a > 500)
            break;
    }
    cout<<"Finish";
    return 0;
}
// 50064 1253227080 512
// 20735 214980480 640
// 16575 137373600 576
 




