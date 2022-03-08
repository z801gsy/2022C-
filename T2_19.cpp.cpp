/*
 * FileName:T2_19.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:输入三个数,输出和,均值,积,最小值,最大值.
 */
 #include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 {
     int a ,b,c;
     int Sum ,Average,Product,Smallest,Largest;
     cin>>a>>b>>c;
     cout<<"Input three different integers:"<<a<<" "<<b<<" "<<c<<endl;
     cout<<"Sum is "<<a+b+c<<endl;
     cout<<"Average is "<<Sum/3<<endl;
     cout<<"Product is "<<a*b*c<<endl;
     cout<<"Smallest is "<<min(a,b,c)<<endl;
     cout<<"Largest is "<<max(a,b,c)<<endl;
     return 0;
 }
