/*
 * FileName:T4_22.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: else ҡ������.
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, y;
	cin>>x>>y;
	if (x<10)
		if (y>10)
			cout<<"*****"<<endl;
		else
				cout<<"#####"<<endl;
				cout<<"$$$$$"<<endl;
	/*
	x=9,y=11ʱ ���: *****
					 $$$$$
					 
	x=11,y=9ʱ ���: $$$$$ 
	*/
	
	return 0;
}
