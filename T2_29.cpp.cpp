/*
 * FileName:T2_29.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:����0~10��ƽ������������.
 */
#include<iomanip>
#include<iostream>
using namespace std;
int main() {
    cout<<"integer square  cube"<<endl;
    cout.fill(' ');
    for(int i=0;i<=10;i++){
    cout << left << setw(8) << i ;
	cout << left << setw(8) << i*i ;
	cout << left << setw(8) << i*i*i<< endl;
    }

	return 0;
}


