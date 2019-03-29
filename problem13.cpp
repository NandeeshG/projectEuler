#include<iostream>
#include<vector>
using namespace std;
#define T_DIG 50
#define T_NUM 100
#define MAX_LEN 53    // 10^50 x 100 = 10^52  ,i.e. 52 len, still taking one extra digit

int main()
{
    vector<int> sum(MAX_LEN, 0);
    vector<int> temp(T_DIG, 0); //for storing number to reverse it
    int carry = 0;

    //summing each number until 100 numbers
    for(int i=0; i<T_NUM; ++i)
    {
        carry = 0;
        for(int j=0; j<T_DIG; ++j)
        {
            int digit;
            cin>>digit;
            temp[j] = digit;
        }
        int j,k;
        //read digits from temp, in reverse traversal
        for(j=temp.size()-1, k=0; k<=sum.size(); --j, ++k) 
        {
            if(j>=0)
                sum[k] += carry + temp[j];
            else
                sum[k] += carry;
            carry = sum[k]/10;
            sum[k] %= 10;
        }
    }

    //print tendigits and space and rest digits
    for(int i=sum.size()-1; i>=0; --i)
    {
        if(i==(sum.size()-10))
            cout<<sum[i]<<' ';
        else
            cout<<sum[i];
    }
    cout<<endl;
    
    return 0;
}
