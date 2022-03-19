/*
 * FileName:T4_13.cpp
 * Author:  ¹ğÊ«Ô´
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:ÆûÓÍÀïÊı. 
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout<<"Enter miles driven (-1 to quit): ";
	double miles;
	double gallons;
	double summ=0,sumg=0;
	double MPG,sumM;
	cin>>miles; 
	while(miles!=-1){
		cout<<"Enter gallons used: ";
		cin>>gallons;
		summ+=miles;
		sumg+=gallons;
		sumM=summ/sumg;
		MPG = miles/gallons;
		cout<<"MPG this trip: "<<setprecision(8)<<MPG<<endl;
		cout<<"Total MPG: "<<setprecision(8)<<sumM<<endl<<endl;
		cout<<"Enter miles driven (-1 to quit): ";
		cin>>miles; 
	}
	
	return 0;
}
