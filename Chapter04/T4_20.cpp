/*
 * FileName:T4_20.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: ȷ���û��������Ч��.
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
		if (result == 1 || result == 2) {//�жϷ��ɽ���ѭ���� 
			if (result == 1) {
				passes++;
			} else {
				failures++;
			}
			goal++;//ֻ��������Ч�������ڲ�,����������������. 

		}//�ж��������Ч��, ���������һֱ���� 
	}
	cout << "Passed " << passes << "\nFailed " << failures << endl;
	if (passes > 8) {
		cout << "Bonus to instructor!" << endl;
	}
	return 0;
}
