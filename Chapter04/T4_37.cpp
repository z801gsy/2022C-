/*
 * FileName:T4_37.cpp
 * Author:  ��ʫԴ
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 11th,2022
 * College: School of Computer Science and Information Engineering (HENU) 
 * Function:�˿����� 
 */
#include <iostream>
using namespace std;
int main()
{
    double t=1.00;//��λ����
    cout<<"�ڼ���"<<"\t"<<"��ĩԤ�������˿�(��)"<<endl;
    for(int i=1;i<=75;i++)
    {
        cout<<i<<"\t"<<t<<endl;
        t=t*1.05;
    }
    return 0;
}
