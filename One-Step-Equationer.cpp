#include <iostream>
using namespace std;
int main() {
	char a;
	string method;
	string m;
	int first_value;
	int second_value;
	cout << "Welcome To One-Step Equationer.\n";
	cout << "You Have To Use Algebric Expression here.\n";
	cout << "Enter First Value: ";
	cin >> first_value;
	cout << "Enter Second Value: ";
	cin >> second_value;
	cout << "Enter Alphabet: ";
	cin >> a;
	cout << "Enter Method: ";
	cin >> method;
	if(method == "addition") {
		cout << "Your Expression is " << a << " + " << first_value << " = " << second_value << ".\n";
		cout << "Solution: \n";
		int solution = second_value - first_value;
		cout << a << " + " << first_value << " = " << second_value << ".\n";
		cout << a << " = " << second_value << " - " << first_value << ".\n";
		cout << a << " = " << solution << ".\n\n";
		cout << "Press Enter To Exit: ";
		cin.get();
		cin.get();
	} 
	else if(method == "subtraction") {
		cout << "Your Expression is " << a << " - " << first_value << " = " << second_value << ".\n";
		cout << "Solution: \n";
		int solution2 = second_value + first_value;
		cout << a << " - " << first_value << " = " << second_value << ".\n";
		cout << a << " = " << second_value << " + " << first_value << ".\n";
		cout << a << " = " << solution2<< ".\n\n";
		cout << "Press Enter To Exit: ";
		cin.get();
		cin.get();
	}
	else if(method == "multiplication") {
		cout << "Your Expression is " << a << " * " << first_value << " = " << second_value << ".\n";
		cout << "Solution: \n";
		int solution3 = second_value / first_value;
		cout << a << " * " << first_value << " = " << second_value << ".\n";
		cout << a << " = " << second_value << " / " << first_value << ".\n";
		cout << a << " = " << solution3 << ".\n\n";
		cout << "Press Enter To Exit: ";
		cin.get();
		cin.get();
	}
	else if(method == "division") {
		cout << "Your Expression is " << a << " / " << first_value << " = " << second_value << ".\n";
		cout << "Solution: \n";
		int solution4 = second_value * first_value;
		cout << a << " / " << first_value << " = " << second_value << ".\n";
		cout << a << " = " << second_value << " * " << first_value << ".\n";
		cout << a << " = " << solution4 << ".\n\n";
		cout << "Press Enter To Exit: ";
		cin.get();
		cin.get();
	}
	return 0;
}
