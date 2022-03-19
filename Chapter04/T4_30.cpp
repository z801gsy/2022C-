/*
 *
 * FileName:T4_30.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 18th,2022
 * College: School of Computer Science and Information Engineering
 * Function:计算圆的直径,周长,面积.
 */
#include <iostream>

using namespace std;

int main()
{

    double r;
    cin>>r;
    const double pi=3.14159;
    cout<<2*r<<endl;//直径
    cout<<2*pi*r<<endl;//周长
    cout<<pi*r*r<<endl;//面积
    return 0;
}
