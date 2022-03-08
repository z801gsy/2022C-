/*
 * FileName:T2_28.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:输入一个五位数,输出各位数字.间隔三空格.
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
