#include <iostream>
using namespace std;
int main()
{
	char operation;
	float num1, num2;
	
    cout << "\nEnter the operation that you want to perform: \n";
		cout << "Addition\n";
        cout << "Subtraction\n";
		cout << "Multiplication\n";
		cout << "Division\n" <<endl;
		
    cin >> operation;

    cout << "\nEnter two numbers: \n";

    cin >> num1 >> num2;

	// Switch statement begins
	switch (operation) {
	
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
		cout << "Please select appropriate operation";
	}
	return 0;
}
