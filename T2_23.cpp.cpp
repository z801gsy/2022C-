/*
 * FileName:T2_23.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:����5������,������ֵ����Сֵ..
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
	cout << " ���ֵ��: "<<a[4] <<endl <<" ��Сֵ��: " << a[0] << endl;

	return 0;
}
