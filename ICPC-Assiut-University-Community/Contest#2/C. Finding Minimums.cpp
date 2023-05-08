#include <iostream>
using namespace std;
using ll = long long;

int main()
{
	int testCases, size, counter = 0;
	cin >> testCases >> size;
	short index = 1;
	ll minimum;
	for (int i = 1; i <= testCases; i++)
	{
		ll numbers;
		cin >> numbers;
		if (index)
		{
			minimum = numbers;
			index = 0;
		}
		else
		{
			if (numbers < minimum)
			{
				minimum = numbers;
			}
		}
		counter++;
		if (counter == size || i == testCases)
		{
			cout << minimum << " ";
			counter = 0;
			index = 1;
		}
	}
}