/*
 * Calculator.cpp
 *
 *  Date: [07/08/2021]
 *  Author: [Jessica Megaro]
 *  This program was uploaded and will be debugged by this user with in-line comments provided to note what was fixed using method C++.
 */
 
#include <iostream>

using namespace std;

int main() 
{
	//char statement[100]; // This line can be removed, it does not contribute anything to the program. "unreferenced local variable"
	int op1, op2;
	char operation;
	char answer = 'y';  //Double quotes removed for single quote to initialize char and added semi-colon. Capital Y changed to lower case to match while loop condition. 
	while (answer=='y')
	{
		cout << "Enter expression" << endl;

		while (!(cin >> op1 >> operation >> op2)) { //While loop added after accidentally typing "yes" instead of "y", this caused an infinite loop and program no longer could properly run.
			cout << "Invalid expression. Enter expression" << endl;
			cin.clear(); // Clear the error state.
			cin.ignore(INT_MAX, '\n');
		}
		//cin >> op1 >> operation >> op2; // op2 and op1 swapped to correctly perform operations.
		if (operation == '+') //Double quotes removed for single quote for char comparison. Semi-colon removed to include next line in condition.   **SIDE >> extraction operator and << stream insertion
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //Between op2 and "=" extraction operator removed and stream insertion symbols placed.
		if (operation == '-') //Semi-colon removed to include next line in condition.
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Between cout and op1 extraction operator removed and stream insertion symbols placed.
			if (operation == '*')
				cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; //Added semi-colon. Division symbol removed for multiplication asterisk.
		if (operation == '/')
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; //Multiplication asterisk removed for division symbol. 

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
		cin.clear(); //Added to remove infinite loop caused by entering additional characters after 'y' ie: 'yes'.
	}
	return 0; //return 0 added after void main() changed to int main() to comply with C++ standard. 
}







