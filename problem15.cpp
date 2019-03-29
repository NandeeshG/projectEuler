#include<iostream>
#define f(i,s,l) for(long long i=s; i<l; ++i)
#define fr(i,s,l) for(long long i=s; i>l; --i)
#define SIZE 200
using namespace std;

short int number1[SIZE];
short int number2[SIZE];
short int number3[SIZE];

void initialiseAll()
{
    f(i,0,SIZE) {
        number1[i] = 0;
        number2[i] = 0;
        number3[i] = 0;
    }
    return;
}

void factorialOfIn(int n, int into)
{
    copyThisNumTo(n,into); //----------
    fr(i,n-1,1) {
        multiplyThisNumTo(i,into);
    }
    return;
}

void copyThisNumTo(int num, int into)
{
    if(into == 1)
    {
        f(i,0,SIZE) number1[i] = 0;
        int in = 0;
        while(num)
        {
            int dig = num%10;
            num /= 10;
            number1[in] = dig;
            ++in;
        }
    }
    else if(into == 2)
    {
        f(i,0,SIZE) number2[i] = 0;
        int in = 0;
        while(num)
        {
            int dig = num%10;
            num /= 10;
            number2[in] = dig;
            ++in;
        }
    }
    else if(into == 3)
    {
        f(i,0,SIZE) number3[i] = 0;
        int in = 0;
        while(num)
        {
            int dig = num%10;
            num /= 10;
            number3[in] = dig;
            ++in;
        }
    }
    else
    {
        cout<<"ERROR, copyThisNumTo(num,into) not complete for "<<num<<' '<<into<<endl;
    }
    return;
}
        
void copyThisTo(int from, int into)
{
    if(from == 3 && into == 1)
    {
        f(i,0,SIZE){
            number1[i] = number3[i];
        }
    }
    else
    {
        cout<<"ERROR, copyThisTo(from,into) not complete for "<<from<<' '<<into<<endl;
    }
    return;
}

void print(int from)
{
    if(from == 3)
    {
        fr(i,SIZE-1,-1) cout<<number[3];
        cout<<endl;
    }
    else
    {
        cout<<"ERROR, print(from) not complete for "<<from<<<<endl;
    }
    return;
}

void divideByPutIn(int from, int by, int into)
{
    if(from == 1 && by == 2 && into == 3)
    {
    }
    else
    {
        cout<<"ERROR, divideByPutIn(from,by,into) not complete for "<<from<<' '<<by<<' '<<into<<endl;
    }
    return;
}


int main()
{
    int n;
    cin>>n;
    //it will find grid path to matrix of 20x20
    //find 2n factorial

    initialiseAll(); //-----------
    factorialOfIn(2*n,1); //----------
    factorialOfIn(n,2);//----------
    //ans will be in 3
    divideByPutIn(1,2,3);
    copyThisTo(3,1); //|||||||||||||
    divideByPutIn(1,2,3);
    print(3); //|||||||||
    return 0;
}
