/*
 *
 * FileName:T4_36.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 18th,2022
 * College: School of Computer Science and Information Engineering
 * Function:.加密系统 
 */
#include <iostream>

using namespace std;

int main()
{
    int a[4],temp;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=1;i++)
    {
        temp=a[i];
        a[i]=a[i+2];
        a[i+2]=temp;
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]==8)
        {
            a[i]=1;
        }
        else if(a[i]==9)
        {
            a[i]=2;
        }
        else if(a[i]==0)
        {
            a[i]=3;
        }
        else if(a[i]==1)
        {
            a[i]=4;
        }
        else if(a[i]==2)
        {
            a[i]=5;
        }
        else if(a[i]==3)
        {
            a[i]=6;
        }
        else if(a[i]=4)
        {
            a[i]=7;
        }
        else if(a[i]=5)
        {
            a[i]=8;
        }
        else if(a[i]=6)
        {
            a[i]=9;
        }
        else if(a[i]=7)
        {
            a[i]=0;
        }
    }
    for(int i=0;i<4;i++)
    {
        cout<<a[i];
    }
    return 0;
}
