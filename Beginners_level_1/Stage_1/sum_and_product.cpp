//Description: This C++ code takes a six-digit integer as input and calculates the sum and 
//product of its digits. It first checks if the number is too large (greater than 999999) or 
//too small (less than 100000) and provides appropriate messages in these cases. Otherwise, 
//it calculates the sum and product of the individual digits and displays the results as 
//"sum=" followed by the sum value and "prod=" followed by the product value.
#include<iostream>
using namespace std;
int main ()
{
	long int n;
	int sum = 0, temp, t, prod = 1;
	cin >> n;
	if (n > 999999)
	{
		cout << "\nthe number is too large.";
	}
	else if (n < 100000)
	{
		cout << "\nthe number is too small.";
	}
	else
	{
		t = n / 100000;
		if (t != 0)
		{
			sum = sum + t;
			prod = prod * t;
temp = n % 100000;
			t = temp / 10000;
			if (t != 0)
			{
				sum = sum + t;
				prod = prod * t;
				temp = temp % 10000;
				t = temp / 1000;
				if (t != 0)
				{
					sum = sum + t;
					prod = prod * t;
					temp = temp % 1000;
					t = temp / 100;
					if (t != 0)
					{
						sum = sum + t;
						prod = prod * t;
						temp = temp % 100;
						t = temp / 10;
						if (t != 0)
						{
							sum = sum + t;
							prod = prod * t;
							temp = temp % 10;
							t = temp / 1;
							if (t != 0)
							{
								sum = sum + t;
								prod = prod * t;
								cout << "sum= " << sum << endl;
								cout << "prod= " << prod;
							}
						}
					}
				}
			}
		}
	}
}




