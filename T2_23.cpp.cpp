/*
 * FileName:T2_23.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:输入5个整数,输出最大值和最小值..
 */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	sort(a, a + 5);
	cout << " 最大值是: "<<a[4] <<endl <<" 最小值是: " << a[0] << endl;

	return 0;
}
