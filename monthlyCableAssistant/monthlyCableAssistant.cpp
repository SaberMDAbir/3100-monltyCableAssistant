// MD Abir A. Choudhury
// 032318
// E6 - MonthlyCableAssistant

#include <iostream>
#include <string>

using namespace std;

//function declarations
void showMenu();
double choosePlan(int plan, double payment);
double chooseSportsPackage(string choice, double payment);
double chooseHBO(double payment, string choice);
double numCableBox(int numBox, double payment);

int main() {
	int plan = 0; //holds the plan num

	do {
		string choice = " "; //holds the choice of the user
		int numBox = 0;
		double payment = 0.0; //holds the monthly payment

		showMenu();
		cin >> plan;
		payment = choosePlan(plan, payment);
		if (payment == -1) {
			break;
		}
		cout << payment << endl;
		//function for choosing a sports package
		payment = chooseSportsPackage(choice, payment);
		//function for choosing HBO
		payment = chooseHBO(payment, choice);
		//function for choosing number of boxes
		cout << "How many boxes do you need?\n";
		cin >> numBox;
		payment = numCableBox(numBox, payment);
		//output the results
		cout << "The Monthly Cable Premium amount is: " << payment << endl << endl;
	} while (plan != -1);

	cout << "Thank you for using this service!";
	system("PAUSE");
	return 0;
}

//function definitons
void showMenu() {
	cout << "Choose from these three plans:\n"
		<< "1 - Basic = 20 channels for $14.99\n"
		<< "2 - Essential = 40 channels for $29.99\n"
		<< "3 - Premium = 60 channels for $39.99\n"
		<< "-1 - Exit\n"
		<< "====================================\n";
}
double choosePlan(int plan, double payment) {
	
	if (plan == 1) {
		return payment += 14.99;
	}
	else if (plan == 2) {
		return payment += 29.99;
	}
	else if (plan == 3) {
		return payment += 39.99;
	}
	else if (plan == -1) {
		return -1;
	}
}
double chooseSportsPackage(string choice, double payment) {
	cout << "Would you like a sports package?<yes or no>\n";
	cin >> choice;
	if (choice == "yes") {
		return payment += 15.99;
	}
	else
		return payment;
}
double chooseHBO(double payment, string choice) {
	cout << "Would you like a HBO Package?<yes or no>\n";
	cin >> choice;
	if (choice == "yes") {
		return payment += 19.99;
	}
	else
		return payment;
}
double numCableBox(int numBox, double payment) {
		return payment += (numBox * 9.99);
}