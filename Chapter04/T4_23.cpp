/*
 * FileName:T4_22.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: else 摇摆问题.
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
	x=9,y=11时 输出: *****
					 $$$$$
					 
	x=11,y=9时 输出: $$$$$ 
	*/
	
	return 0;
}
