/*
 *
 * FileName:T4_27.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 17th,2022
 * College: School of Computer Science and Information Engineering
 * Function:二进制转十进制.
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,t,sum=0,n=0;
    cin>>a;
    while(a){
        t=a%10;
        a=a/10;
        sum=t*pow(2,n)+sum;
        n=n+1;
    }
    cout<<sum<<endl;
    return 0;
}
