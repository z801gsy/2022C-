/*
 *
 * FileName:T4_33.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering
 * Function:�����͵ı�.
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int a,b,c;
       cin>>a>>b>>c;
   
        if(a+b>c||b+c>a||a+c>b)  {
       if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){cout<<"�������ֱ��������"<<endl;}
   
   
       else  cout<<"�������ֱ��������"<<endl;}
    return 0;
}
