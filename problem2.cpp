#include<iostream>
#include<cmath>
using ll = long long;
using ld = long double;
#define GR 4.2360679775   // this must be very accurate to get right result uptil 4million term


int main()
{
/*	ll sum=0;
	ll first = 1;
	ll second = 2;
	while(second <= 1000000)
	{
		if(second%2 == 0)
			sum += second;
		ll temp = second;
		second = first + second;
		first = temp;
	}
*/
	
	ld term = 2, dec;
        ll sum=0;
	while(term <= 4000000)
	{
		//std::cout<<term<<std::endl;
		sum += term;
		term *= GR;
		term = std::round(term);
	}	

// this solution is based on golden ratio



	std::cout<<sum;
	return 0;
}
