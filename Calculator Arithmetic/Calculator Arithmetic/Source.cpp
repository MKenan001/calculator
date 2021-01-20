#include <iostream>
using namespace std;

int main()
{
	system("Color 73");
	double number = 0;
	double number1, number2;
	char operators;

	cout << "Welcome Calculator" << endl;
	cout << "Enter random numbers and operators  \n1+1, 1x1, 1/1, 1-1, 1^1 (x + / - ^) \a \n";
	cin >> number1;
	cin >> operators;
	cin >> number2;

	if (operators == '+')
	{
		number = (number + number1 + number2);
	}
	if (operators == '-')
	{
		number = (number + number1 - number2);
	}
	if (operators == '*')
	{
		number = (number + number1 * number2);
	}
	if (operators == '/')
	{
		number = (number + number1 / number2);
	}
	if (operators == 'c') { double number = cos(number1); }

	if (operators == 's') { double number = sin(number1); }

	if (operators == '^') { double number = pow(number1, number2); }

	while (operators != '=')
	{
		cin >> operators;
		if (operators == '=') break;
		cin >> number2;
		if (operators == '+')
		{
			number = (number + number2);
		}
		if (operators == '-')
		{
			number = (number - number2);
		}
		if (operators == '*')
		{
			number = (number * number2);
		}
		if (operators == '/')
		{
			number = (number / number2);
		}
		if (operators == 'c') { number = (number + cos(number2)); }

		if (operators == 's') { number = (number + sin(number2)); }

		if (operators == '^') { number = (number + pow(number1, number2)); }

	}

	cout << "result: " << number << endl;


	cout << " ____________________________" << endl;
	cout << "| _________________________  |" << endl;
	cout << "||       STEP IT           | |" << endl;
	cout << "||            ACADEMY      | |" << endl;
	cout << "||_________________________| |" << endl;
	cout << "||                    | C  | |" << endl;
	cout << "||  Thanks for using  |____| |" << endl;
	cout << "||                    | /  | |" << endl;
	cout << "||____________________|____| |" << endl;
	cout << "||  1   |   2  |   3  | X  | |" << endl;
	cout << "||______|______|______|____| |" << endl;
	cout << "||  4   |   5  |   6  | _  | |" << endl;
	cout << "||______|______|______|____| |" << endl;
	cout << "||  7   |   8  |   9  |    | |" << endl;
	cout << "||______|______|______|  + | |" << endl;
	cout << "||  0   |   ,  |   =  |    | |" << endl;
	cout << "||______|______|______|____| |" << endl;
	cout << "|____________________________|" << endl;
	cout << "\n";
}
