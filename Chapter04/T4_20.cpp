/*
 * FileName:T4_20.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: 确认用户输入的有效性.
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int goal = 1;
	while (goal <= 10) {
		cout << "Enter result (1=pass, 2=fail): ";
		int result = 0;
		cin >> result;
		if (result == 1 || result == 2) {//判断方可进入循环体 
			if (result == 1) {
				passes++;
			} else {
				failures++;
			}
			goal++;//只有输入有效才能在内层,计数变量进行自增. 

		}//判断输入的有效性, 否则在外层一直输入 
	}
	cout << "Passed " << passes << "\nFailed " << failures << endl;
	if (passes > 8) {
		cout << "Bonus to instructor!" << endl;
	}
	return 0;
}
