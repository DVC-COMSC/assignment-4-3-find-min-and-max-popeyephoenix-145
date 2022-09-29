// Make a program that finds the minimum and maximum values among three integer values.

// int num1, num2, num3;
// cin >> num1 >> num2 >> num3;
// Find the min and max among three values.
// Display the numbers with ascending order ( min, other, max).

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	if (n1 > n2)
	{
		if ( n2 < n3)
			cout << n2 << "is min number\n";
		else // num2 >= num3
			cout << n3 << "is min number\n";
	}
	else // num1 <= num2
	{
		if (n1 < n3)
			cout << n2 << "is min number\n";
	}
		
			
		
} 
