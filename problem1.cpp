#include<iostream>
//problem 1 solution
//trial branch changes

long long sumDivisibleBy(long long n, long target)
{
	// till less than target say 1000
	// div by 5 sum gives
	// 5 + 10 + 15 + 20 + 25 + ..... 995
	// => 5(1 + 2 + 3 + 4 + ..... 199)
	// => 5(199*200)/2
	// now 199 = 999/5
	
	long long p = (target-1) / n;
	long long sum = n * ((p*(p+1)) / 2);
	return sum;
}

int main()
{
	long long sum=0;
	long long target;
	std::cin >> target;
/*
	for(long i=3; i<target; ++i)
	{
		if(i%3 == 0 || i%5 == 0)
			sum += i;
	}
*/

	sum = sumDivisibleBy(3,target) + sumDivisibleBy(5,target) - sumDivisibleBy(15,target);
	std::cout<<sum;
	return 0;
}
