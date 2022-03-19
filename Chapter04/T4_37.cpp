/*
 * FileName:T4_37.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 11th,2022
 * College: School of Computer Science and Information Engineering (HENU) 
 * Function:人口增长 
 */
#include <iostream>
using namespace std;
int main()
{
    double t=1.00;//单位：亿
    cout<<"第几年"<<"\t"<<"年末预期世界人口(亿)"<<endl;
    for(int i=1;i<=75;i++)
    {
        cout<<i<<"\t"<<t<<endl;
        t=t*1.05;
    }
    return 0;
}
