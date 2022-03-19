/*
 * FileName:T4_15.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:销售佣金计算器. 
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout<<"Enter sales in dollars (-1 to end): ";
	double sales;
	double salary;
	cin>>sales; 
	while(sales!=-1){
		cout<<"Salary is: $";
	salary=200+sales*0.09;
		cout<<fixed<<setprecision(2)<<salary<<endl<<endl;
		cout<<"Enter sales in dollars  (-1 to end): ";
		cin>>sales; 
	}
	
	return 0;
}
