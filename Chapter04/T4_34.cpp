/*
 *
 * FileName:T4_34.cpp
 * Author:  ��ʫԴ 
 * E-mail:  1145428914@qq.com
 * Date:    Mar 18th,2022
 * College: School of Computer Science and Information Engineering
 * Function���׳�.
 */

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    if(n==1||n==0){cout<<"1"<<endl;}
    else {
        while (n>1){
            sum=sum*n;
            n=n-1;
        }
        cout<<sum<<endl;
    }          //��Ŀa




    scanf("%d",&n);
    double num=1.0; int i=1;
    for(i;i<=n;i++){
        double h=1.0;
        int k=1;
        for(k;k<=i;k++){
            h*=k;
        }
        num+=1/h;
    }
    printf("%.8f",num);//��Ŀb


    double a,b,c,d=1.0,x;
    scanf("%lf",&x);
    for(c=1;c<100;c++)
    {
        d*=c;
        b=pow(x,c);
        a+=b/d;
    }
    printf("%lf",a+1);//��Ŀc





    return 0;
}
