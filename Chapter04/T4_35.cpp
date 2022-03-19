/*
 *
 * FileName:T4_35.cpp
 * Author:  桂诗源 
 * E-mail:  1145428914@qq.com
 * Date:    Mar 18th,2022
 * College: School of Computer Science and Information Engineering
 * Function:列表初始化.
 */


#include <bits/stdc++.h>

using namespace std;

struct Account
{
    unsigned int a;
    string b;
    string c;
    double d;
};

int main()
{
    unsigned int studentCounter=0;
    double initialBalance=1000.0;
    Account e;
    e.a =1;
    e.b="zhang";
    e.c="zhen";
    e.d=2.0;
    cout<<e.a<<" "<<e
    .b<<" "<<e.c<<" "<<e.d;
    return 0;
}
