#include<iostream>
#define inc(i,l) for(int i=0; i<l; ++i) 
#define dec(i,l) for(int i=l-1; i>=0; --i)
#define incs(i,l,s) for(int i=s; i<l; ++i) 
#define decs(i,l,s) for(int i=l-1; i>=s; --i)
#define SIZE 20
using namespace std;

void check_hor(int* max_prod,int arr[][SIZE]){
    inc(i,SIZE)
    {
        inc(j,SIZE-3)
            {
                int temp=1;
                inc(k,4)
                {
                    temp *= arr[i][j+k];
                }
                if(temp > *max_prod)
                    *max_prod = temp;
            }
    }
}

void check_ver(int* max_prod,int arr[][SIZE]){
    inc(i,SIZE)
    {
        inc(j,SIZE-3)
            {
                int temp=1;
                inc(k,4)
                {
                    temp *= arr[j+k][i];
                }
                if(temp > *max_prod)
                    *max_prod = temp;
            }
    }
}

void check_first_diag(int* max_prod,int arr[][SIZE]){
    inc(i,SIZE-3)
    {
        inc(j,SIZE-3)
            {
                int temp=1;
                inc(k,4)
                {
                    temp *= arr[i+k][j+k];
                }
                if(temp > *max_prod)
                    *max_prod = temp;
                if(temp == 20640048)
                    cout<<i<<' '<<j<<endl;
            }
    }
}

void check_sec_diag(int* max_prod,int arr[][SIZE]){
    incs(i,SIZE, 3)
    {
        incs(j,SIZE-3, 0)
            {
                int temp=1;
                inc(k,4)
                {
                    temp *= arr[i-k][j+k];
                }
                if(temp > *max_prod)
                    *max_prod = temp;
            }
    }
}

int main()
{
    int arr[SIZE][SIZE];
    inc(i,SIZE)
        inc(j,SIZE)
            cin>>arr[i][j];
    int max_prod = 1;

    //inc(i,SIZE)
    //    inc(j,SIZE)
    //        cout<<arr[i][j]<<' ';

    check_hor(&max_prod, arr);
    cout<<endl<<"Final answer "<<max_prod<<endl;
    check_ver(&max_prod, arr);
    cout<<endl<<"Final answer "<<max_prod<<endl;
    check_first_diag(&max_prod, arr);
    cout<<endl<<"Final answer "<<max_prod<<endl;
    check_sec_diag(&max_prod, arr);
    cout<<endl<<"Final answer "<<max_prod<<endl;

    cout<<endl<<"Final answer "<<max_prod<<endl;
    return 0;
}

    

