/*
 * FileName:T2_30.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 11th,2022
 * College: School of Computer Science and Information Engineering (HENU) 
 * Function: 测试BMI 
 */
 #include<iostream>
 using namespace std;
 int main() {
 	cout<<"BMI VALUES"<<endl;
	cout<<"Underweight: less than 18.5"<<endl;
	cout<<"Normal :     between 18.5 and 24.9"<<endl;
	cout<<"Overweight : between 25 and 29.9"<<endl;
	cout<<"Obese :      30 or greater"<<endl;
	cout<<"请输入体重(Kg)和身高(m)."<<endl;
	double weight, height,BMI;
	cin>>weight>>height;
	BMI = weight / (height *height);
	if(BMI<18.5){
		cout<<"Underweight";
	}else{
		if(BMI<=24.9){
			cout<<"Normal ";
			//TODO
		}else{
			if(BMI>=25&&BMI<=29.9){
				cout<<"Overweight";
				//TODO
			}else{
				if(BMI>=30){
					cout<<"Obese";
					//TODO
				}
			}
		}
	}
	
 	return 0;
 }
