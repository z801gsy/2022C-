/*
 * FileName:T4_21.cpp
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
	int count = 1;
	while (count <= 10) {
		cout << (count % 2 ? "****" : "++++++++") << endl;//奇妙 
		++count;
	}
	return 0;
}
