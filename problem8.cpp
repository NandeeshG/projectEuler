#include<iostream>
using namespace std;

short number[1000];

void input()
{
    for(int i=0; i<1000; ++i)
    {
         int n;
         cin>>n;
         number[i] = n;
    }
}

void output()
{
    for(int i=0; i<1000; ++i)
    {
        cout<<number[i]<<' ';
    }
    cout<<endl;
}

unsigned long long int scoop13(int start_index)
{
    int count=0;
    unsigned long long int product = 1;
    for(int i=start_index; i<1000 ;++i)
    {
        if(number[i] == 0)
            return 0;

        product *= number[i];
        ++count;
        if(count == 13)
            break;
    }
    if(count < 13)
        return 0;
    else
        return product;
}



int main()
{
    //run a loop to scoop 13 values continuously having no zero
    //compare their products to older value
    //cout final value
    input();
    //output();
    //cout<<sizeof(long long int)<<endl;
    unsigned long long int answer1 = 1;
    unsigned long long int answer2 = 1;
    answer1 = scoop13(0);
    answer2 = answer1;
    cout<<"first"<<answer1<<endl;
    cout<<"sec"<<answer2<<endl;

    for(int i=13; i<1000-12; ++i)
    {
        answer2 = scoop13(i);
        cout<<"answer"<<i<<' '<<answer2<<endl;
        if(answer2 != 0 && answer2 > answer1)
        {
            answer1 = answer2;
            cout<<"changed to "<<answer1<<endl;
        }
    }
    cout<<answer1<<endl;

    return 0;
}
