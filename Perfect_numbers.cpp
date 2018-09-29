//Alberto Garib
// C++ program to check if a given number is perfect or not

#include<iostream> 

using namespace std;

// Returns true if n is perfect 
//long long - target type will have width of at least 64 bits.
bool isPerfect(long long int n)
{
	// Store the sum of divisors. 
	long long int sum = 1;

	// Find all of the divisors then add them all.
	for (long long int i = 2; i*i <= n; i++)
		if (n%i == 0)
			sum = sum + i + n / i;

	// If sum of divisors is equal to n, then n is a perfect number. 
	if (sum == n && n != 1)
		return true;

		return false;
}

int main()
{
	cout << "The perfect numbers from '0' to '1000' are: ";
	for (int n = 2; n < 1000; n++)
		if (isPerfect(n))
			cout << n << endl;
	system("pause");
	return 0;
}
