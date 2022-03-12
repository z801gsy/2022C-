/*
 * FileName:判断回文数.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:共乘汽车节省计算器 . 
 */
#include<iostream>
using namespace std;
int main() {
	cout<<"请输入"<<endl<<"每天开的总英里数:"<<endl<<"每加仑汽油价格:"<<endl;
	cout<<"每加仑汽油可以开的平均英里数:"<<endl<<"每日停车费:"<<endl<<"每日通行费:"<<endl; 
	int M;
	int price;
	int mile;
	int P;
	int p1 ;
	cin>>M>>price>>mile>>P>>p1;
	
	cout<<"每日开车费用:" <<M/mile*price+P+p1;
	return 0;
}
