# include <iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	cout << "Enter operator either + or - or * or /: ";
	cin >> op;
	cout << "Enter two operands: ";
	cin >> num1 >> num2;
	switch (op)
	{
	case '+':
		cout << num1 + num2;
		system("pause");
		break;
	case '-':
		cout << num1 - num2;
		system("pause");
		break;
	case '*':
		cout << num1 * num2;
		system("pause");
		break;
	case '/':
		cout << num1 / num2;
		system("pause");
		break;
	default:
		// If the operator is other than +, -, * or /, error message is shown
		cout << "Virheellinen operaattori!";
		break;
	}
	return 0;
}