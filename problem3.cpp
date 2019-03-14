// largest prime factor of any given number

#include <iostream>
#include <cmath>
using ull = unsigned long long;
//using namespace std;

int main()
{
	ull number;
	int largest_factor = number;
	std::cin>>number;
	
	while(number % 2 == 0) 
	{
		number /= 2;
		largest_factor = 2;
	}

	for(int i=3; i <= number; i += 2)
	{
		while(number % i == 0 )
		{
			largest_factor = i;
			number /= i;
		}
	}

	std::cout<<largest_factor;

	return 0;
}


