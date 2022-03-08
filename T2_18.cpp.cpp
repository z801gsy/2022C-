/*
 * FileName:T2_18.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:输入两个数比较大小,输出最大值.
 */
 #include<iostream>
 using namespace std;
 int main()
 {
     int a ,b;
     int MAX;
     cin>>a>>b;
     MAX=(a,b);
     if(a==b){
        cout<<"These numbers are equal."<<endl;
     }else{
     cout<<MAX<<"is large."<<endl;
     }
     return 0;
 }
