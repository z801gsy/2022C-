/*
 * FileName:T4_16.cpp
 * Author:  ¹ðÊ«Ô´
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:Ð½½ð¼ÆËãÆ÷.
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "Enter hours worked (-1 to end): ";
	double hours;
	double rate;
	double salary;
	cin >> hours;
	while (hours != -1) {
		cout << "Enter hourly rate of the employee ($00.00): ";
		cin >> rate;
		if (hours > 40) {
			salary = rate * 1.5 * (hours - 40);
			cout << "Salary is $" << fixed << setprecision(2) << salary << endl << endl;
			cout << "Enter sales in dollars  (-1 to end): ";
			cin >> hours;
		} else {
			salary = hours * rate;
			cout << "Salary is $" << fixed << setprecision(2) << salary << endl << endl;
			cout << "Enter sales in dollars  (-1 to end): ";
			cin >> hours;
		}

	}

	return 0;
}
