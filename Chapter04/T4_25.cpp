/*
 * FileName:T4_25.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: 星号正方形.
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, a, b;
	cin >> x;
	a = x;
	b = x;

	for (int i = 1 ; i <= x; i++) {
		if (i == 1) {
			while (a > 0) {
				cout << "*";
				a--;

			}
			cout << endl;

		} else if(i!=x) {
			for (int j = 1; j <= x; j++) {
				if (j == 1 || j == x) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
			cout << endl;
		}
		if (i ==x) {
			while (b > 0) {
				cout << "*";
				b--;
			}
		}
	}
	return 0;
}
