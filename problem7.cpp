
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    if(num == 1)
    {
        return false;
    }
    if(num == 2)
    {
	    return true;
    }
    if(num%2 == 0)
    {
        return false;
    }
    int limit = sqrt(num);
    for(int i =3; i<=limit; i+=2)
    {
	    if(num%i == 0)
            {
	        return false;
            }
    }
    return true;
}

int main()
{
	int counter=0,i;
	for(i=2;; ++i)
	{
		if(isPrime(i))
			++counter;
		if(counter == 10001)
			break;
	}
	cout<<i<<' '<<counter;
	return 0;
}
//13 6
//104417 10001
//19 8
//151 36
//197 46
//199 46
104743 10001
