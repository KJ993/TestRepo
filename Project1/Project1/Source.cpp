# include <iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	cout << "Syötä operaattori + tai - tai * tai /: ";
	cin >> op;
	cout << "Syötä kaksi lukua: ";
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
		cout << "Virheellinen operaattori!";
		break;
	}
	return 0;
}