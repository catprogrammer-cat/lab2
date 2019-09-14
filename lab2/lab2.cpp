#include <iostream>

using namespace std;

int main()
{
	cout << "This is lab #2\n"; // alert to introduce of programm
	

	
	while (true) {
		cout << "*\n*\n*\n"; // separate with asterisks
		cout << " Choose one of the systems:\n"; // alert to choose system
		int choose; // varible to choose system
		cout << "*\n*\n*\n*\n"; // separate with asterisks
		// print the system #1
		cout << "     |6 * pow(x, 3) - 8 when (x <= -8)\n"
			<< " Y = |pow(x, 3) - 8     when (-8 < x < 0) <-- enter 1\n"
			<< "     |2 * pow(x, 2)     when (x >= 0)\n";
		cout << "*\n*\n*\n"; // separate with asterisks
		cout << "\t or\n";
		cout << "*\n*\n*\n"; // separate with asterisks
		cout << "     |(pow((2*a + 1), 2)) / (3.71 - pow(x, 2)) when (z < -0.5)\n"
			<< " Y = |pow(sin(pow(abs(b*z),0.5)-a*x), 3)       when (-0.5 <= z <= pow(10, -3)) <-- enter 2\n"
			<< "     |(tan(z + x) - pow(E, x)) / (3.5*a*b*x)   when (z > pow(10, -3))\n";
		cin >> choose; // input to know what system to choose

		if (choose == 1) {
			system("cls");
			cout << "You chose this system:"; // alert to selected system
			cout << "*\n*\n*\n*\n*\n"; // separate with asterisks
			// print the system #1
			cout << "     |6 * pow(x, 3) - 8 when (x <= -8)\n"
				 << " Y = |pow(x, 3) - 8     when (-8 < x < 0)\n"
				 << "     |2 * pow(x, 2)     when (x >= 0)\n";
			// separate with asterisks
			cout << "*\n*\n*\n*\n";
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
				system("pause");
				break;
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
				system("pause");
				break;
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
				system("pause");
				break;
			}

		}
		else if (choose == 2) {
			system("cls");
			double E = 2.7182818284590452353602874713527;
			cout << "You chose this system:"; // alert to selected system
			cout << "*\n*\n*\n*\n*\n"; // separate with asterisks
			// print the system #1
			cout << "     |(pow((2*a + 1), 2)) / (3.71 - pow(x, 2)) when (z < -0.5)\n"
				 << " Y = |pow(sin(pow(abs(b*z),0.5)-a*x), 3)       when (-0.5 <= z <= pow(10, -3))\n"
				 << "     |(tan(z + x) - pow(E, x)) / (3.5*a*b*x)   when (z > pow(10, -3))\n";
			// separate with asterisks
			cout << "*\n*\n*\n*\n";
			/////
			double z;
			double x;
			cout << "Enter varible z\n";
			cout << "\n";
			cin >> z;
			cout << "Enter varible x\n";
			cout << "\n";
			cin >> x;
			system("cls");
			if (z < -0.5) {
				cout << "You entered z = " << z << "\n";
				cout << "You entered x = " << x << "\n";
				cout << "*\n*\n*\n*\n";
				cout << "     |(pow((2*a + 1), 2)) / (3.71 - pow(x, 2)) when (z < -0.5) <-------- this condition is true\n"
					 << " y = |pow(sin(pow(abs(b*z),0.5)-a*x), 3)       when (-0.5 <= z <= 0.01)\n"
					 << "     |(tan(z + x) - pow(E, x)) / (3.5*a*b*x)   when (z > 0.01)\n";
				cout << "*\n*\n*\n*\n";
				cout << "\tThan we have a expression:\n";
				double a = 0.3, b = 0.7, z = cos(x+2);
				double y = (pow((2 * a + 1), 2)) / (3.71 - pow(x, 2));
				cout << "y = (pow((2 * a + 1), 2)) / (3.71 - pow(x, 2))\n";
				cout << "y = " << y << ";\n";
				system("pause");
				break;
			}
			else if (z > -0.5 && z < 0.01) {
				cout << "You entered z = " << z << "\n";
				cout << "You entered x = " << x << "\n";
				cout << "*\n*\n*\n*\n";
				cout << "     |(pow((2*a + 1), 2)) / (3.71 - pow(x, 2)) when (z < -0.5)\n"
					 << " y = |pow(sin(pow(abs(b*z),0.5)-a*x), 3)       when (-0.5 <= z <= 0.01) <-------- this condition is true\n"
					 << "     |(tan(z + x) - pow(E, x)) / (3.5*a*b*x)   when (z > 0.01)\n";
				cout << "*\n*\n*\n*\n";
				cout << "\tThan we have a expression:\n";
				double a = 0.3, b = 0.7, z = cos(x + 2);
				double y = pow(sin(pow(abs(b * z), 0.5) - a * x), 3);
				cout << "y = pow(sin(pow(abs(b * z), 0.5) - a * x), 3)\n";
				cout << "y = " << y << ";\n";
				system("pause");
				break;
			}
			else if (z > 0.01) {
				cout << "You entered z = " << z << "\n";
				cout << "You entered x = " << x << "\n";
				cout << "*\n*\n*\n*\n";
				cout << "     |(pow((2*a + 1), 2)) / (3.71 - pow(x, 2)) when (z < -0.5)\n"
					 << " y = |pow(sin(pow(abs(b*z),0.5)-a*x), 3)       when (-0.5 <= z <= 0.01)\n"
					 << "     |(tan(z + x) - pow(E, x)) / (3.5*a*b*x)   when (z > 0.01) <-------- this condition is true\n";
				cout << "*\n*\n*\n*\n";
				cout << "\tThan we have a expression:\n";
				double a = 0.3, b = 0.7, z = cos(x + 2);
				double y = (tan(z + x) - pow(E, x)) / (3.5 * a * b * x);
				cout << "y = (tan(z + x) - pow(E, x)) / (3.5*a*b*x)\n";
				cout << "y = " << y << ";\n";
				system("pause");
				break;
			}
		
		}
		else {
		system("cls");
		cout << "Your input is incorrect\n";


			}

	}
}

