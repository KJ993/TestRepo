# include <iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	cout << "Yksinkertainen laskin" << endl;
	cout << "Sy�t� operaattori + tai - tai * tai /: ";
	cin >> op;
	cout << "Sy�t� kaksi lukua: ";
	cin >> num1 >> num2;
	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;
	default:
		cout << "Virheellinen operaattori!";
		break;
	}
	return 0;
}