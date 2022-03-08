/*
 * FileName:T2_20.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:输入圆的半径,输出直径,周长,面积.
 */
 #include<iostream>
 using namespace std;
 int main()
 {
     int r;
     double PI = 3.14159;
     cin>>r;
     cout<<" 直径: "<<2*r<<endl<<" 周长 : "<<2*PI*r<<endl<<" 面积 : "<<PI*r*r<<endl;
     return 0;


 }
