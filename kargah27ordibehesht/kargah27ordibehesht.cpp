

#include <iostream>
using namespace std;

double exponent(double number, int n)
{
	double answer = 1;
	for (int i = 0; i < n; i++)	
	{
		answer *= number;
	}
	return answer;
}

double factorial(double number)
{
	if (number == 1 || number == 0)
		return number;
	else
		return number * factorial(number - 1);
}

double sinus(double x, int n)
{
	double top;
	double bottom;
	double sign;
	double answer = x;

	for (int i = 1; i <= n; i++)	
	{
		top = exponent(x, 2 * i + 1);
		bottom = factorial(2 * i + 1);
		sign = exponent(-1, i);

		answer += (top / bottom) * sign;
	}
	return answer;
}

int main()
{
	double input;
	int n;

	cout << "Please enter a number to calculate sinus: ";
	cin >> input;

	cout << "Please enter a number: ";
	cin >> n;
	
	cout << sinus(input, n);
}

