/*
 * FileName:T4_26.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: ������.
 */
#include<iostream>
#include<cstring>
#include<algorithm>//�����ַ�����ת��ͷ�ļ� 
using namespace std;
int main() {
	string a, b;
	cin >> a;
	b = a;
	reverse(begin(a), end(a)); //��ת����
	cout << a << endl;
	if (a == b) {
		cout << "�ǻ�����" << endl;
	}
	return 0;
}
