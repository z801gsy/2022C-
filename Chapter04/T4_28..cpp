/*
 *
 * FileName:T4_28.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.com
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering
 * Function:����Ǻ�����ʽͼ��. 
 */
#include <iostream>

using namespace std;

int main()
{
    int n=8,i=1;
    while(n--){

        if(i%2==1) {cout<<"* ";cout<<"* ";cout<<"* ";cout<<"* ";cout<<"* ";cout<<"* ";cout<<"* ";cout<<"* ";cout<<endl;}
          else {cout<<" *";cout<<" *";cout<<" *";cout<<" *";cout<<" *";cout<<" *";cout<<" *";cout<<" *";cout<<endl;}
    i=i+1;
    }
    return 0;
}
