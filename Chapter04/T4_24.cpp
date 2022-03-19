/*
 * FileName:T4_24.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: 另一个else 摇摆问题.
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, y;
	/*
		此时程序,x=5,y=8时 输出: @@@@@
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
	此时程序,x=5,y=8时 输出: @@@@@							 
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
	此时程序,x=5,y=8时 输出: @@@@@
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
	此时程序,x=5,y=8时 输出: #####
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
