/*
 * FileName:T4_19.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering (HENU)
 * Function: 找最大两个数. 
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a[10],tx,tn;
	for(int i=0;i<=9;i++){
		cin>>a[i];
	}
	for(int j=1;j<=8;j++){
		tn=min(a[j-1],a[j]);
		tx=max(a[j-1],a[j]);
		a[j-1]=tn;
		a[j]=tx;
	}
	cout<<a[8]<<" "<<a[9];
	return 0;
}
