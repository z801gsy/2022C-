/*
 * FileName:�жϻ�����.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:����������ʡ������ . 
 */
#include<iostream>
using namespace std;
int main() {
	cout<<"������"<<endl<<"ÿ�쿪����Ӣ����:"<<endl<<"ÿ�������ͼ۸�:"<<endl;
	cout<<"ÿ�������Ϳ��Կ���ƽ��Ӣ����:"<<endl<<"ÿ��ͣ����:"<<endl<<"ÿ��ͨ�з�:"<<endl; 
	int M;
	int price;
	int mile;
	int P;
	int p1 ;
	cin>>M>>price>>mile>>P>>p1;
	
	cout<<"ÿ�տ�������:" <<M/mile*price+P+p1;
	return 0;
}
