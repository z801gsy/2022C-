/*
 * FileName:T4_24.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: ��һ��else ҡ������.
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, y;
	/*
		��ʱ����,x=5,y=8ʱ ���: @@@@@
								 $$$$$
								 &&&&&
						 
		*/
	cin>>x>>y;
	if (y==8){ 
	if (x==5)
	cout<<"@@@@@"<<endl;
	else
	{cout<<"#####"<<endl;} 
	cout<<"$$$$$"<<endl;
	cout<<"&&&&&"<<endl;} 
	cout<<endl<<endl; 
	/*
	��ʱ����,x=5,y=8ʱ ���: @@@@@							 
			*/
	cin>>x>>y;
	if (y==8){ 
	if (x==5)
	cout<<"@@@@@"<<endl;
	else
	{cout<<"#####"<<endl; 
	cout<<"$$$$$"<<endl;
	cout<<"&&&&&"<<endl;} 
	}
	cout<<endl<<endl;
	/*
	��ʱ����,x=5,y=8ʱ ���: @@@@@
							 &&&&&							 
					*/
	cin>>x>>y;
	if (y==8){ 
	if (x==5)
	cout<<"@@@@@"<<endl;
	else
	{cout<<"#####"<<endl; 
	cout<<"$$$$$"<<endl;}
	cout<<"&&&&&"<<endl;} 
	cout<<endl<<endl;
	/*
	��ʱ����,x=5,y=8ʱ ���: #####
							 $$$$$
							 &&&&&							 
						*/	
	cin>>x>>y;
	if (y==8){ 
	if (x==5)
	cout<<"@@@@@"<<endl;}
	else
	{cout<<"#####"<<endl; 
	cout<<"$$$$$"<<endl;
	cout<<"&&&&&"<<endl;} 
	cout<<endl<<endl;			
	return 0;
}
