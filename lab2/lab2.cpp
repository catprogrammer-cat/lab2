#include <iostream>

using namespace std;

int main()
{


	/////
	double x;
	cout << "Enter varible x\n";
	cin >> x;
	system("cls");
	if (x <= -8) {
		cout << "You entered x = " << x << "\n";
		cout << "*\n*\n*\n*\n";
		cout << "     |6 * pow(x, 3) - 8 when (x <= -8) <-------- this condition is true\n"
			<<	" Y = |pow(x, 3) - 8     when (-8 < x < 0)\n"
			<<  "     |2 * pow(x, 2)     when (x >= 0)\n";
		cout << "*\n*\n*\n*\n";
		cout << "\tThan we have a expression:\n";
		double Y = 6 * pow(x, 3) - 8;
		cout << "Y = 6 * pow(x, 3) - 8\n";
		cout << "Y = " << Y << ";\n";
	}
	else if (x > -8 && x < 0) {
		cout << "You entered x = " << x << "\n";
		cout << "*\n*\n*\n*\n";
		cout << "     |6 * pow(x, 3) - 8 when (x <= -8)\n"
			<< " Y = |pow(x, 3) - 8     when (-8 < x < 0) <-------- this condition is true\n"
			<< "     |2 * pow(x, 2)     when (x >= 0)\n";
		cout << "*\n*\n*\n*\n";
		cout << "\tThan we have a expression:\n";
		double Y = pow(x, 3) - 8;
		cout << "Y = pow(x, 3) - 8\n";
		cout << "Y = " << Y << ";\n";
	}
	else if (x >= 0) {
		cout << "You entered x = " << x << "\n";
		cout << "*\n*\n*\n*\n";
		cout << "     |6 * pow(x, 3) - 8 when (x <= -8)\n"
			<< " Y = |pow(x, 3) - 8     when (-8 < x < 0)\n"
			<< "     |2 * pow(x, 2)     when (x >= 0) <-------- this condition is true\n";
		cout << "*\n*\n*\n*\n";
		cout << "\tThan we have a expression:\n";
		double Y = 2 * pow(x, 2);
		cout << "Y = 2 * pow(x, 2)\n";
		cout << "Y = " << Y << ";\n";
	}


}
