/*
 * FileName:T2_28.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:����һ����λ��,�����λ����.������ո�.
 */

#include<iostream>
using namespace std;
int main() {
	int a,b=0;
	cin>>a;
	int i=10000;
	while(i>=1)
        {
       b=a/i;
       a=a%i;
       i=i/10;
        cout<<b<<"   ";
       }

	return 0;
}
