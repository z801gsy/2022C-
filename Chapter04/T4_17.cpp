/*
 * FileName:T4_17.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: 找最大数
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int counter = 1, number, largest;
	cin >> number;
	largest = number;
	while (counter < 10) {
		cin >> number;
		largest = max(largest, number);
		counter++;
	}
	cout << largest;
	return 0;
}
