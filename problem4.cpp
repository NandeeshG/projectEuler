// largest palindrome that is product of two three digit numbers

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isPalindrome(int num)
{
	//checks only a 6 digit number
	int div = 100000;
	while(num)
	{
		if(num/div != num%10)
			return false;
		else
		{
			num %= div;
			num -= (num%10);
			num /= 10;
			div /= 100;
		}
	}
	return true;
}


int main() 
{
//	cout<<isPalindrome(123421);
//	vector<long> array;
	priority_queue< long, vector<long>, less<long> > pq;
	for(long i=999; i>=400; --i)
		for(long j=999; j>=400; --j)
			if(isPalindrome(i*j) == true)
			{
				pq.push(i*j);
			}
	cout<<pq.top();
	return 0;


}
