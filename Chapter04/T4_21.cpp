/*
 * FileName:T4_21.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: ��ʾ���ô���,��ʾ������.
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int count = 1;
	while (count <= 10) {
		cout << (count % 2 ? "****" : "++++++++") << endl;//���� 
		++count;
	}
	return 0;
}
