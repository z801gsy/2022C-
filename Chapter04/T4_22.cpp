/*
 * FileName:T4_22.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: 按示例敲代码,显示输出结果.
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int row = 1;
	while (row >= 1) {
		int column = 1;
		while (column <= 10) {
			cout << (row % 2 ? "<" : ">");
			++column;
		}
		--row;
		cout << endl;
	}
	return 0;
}
