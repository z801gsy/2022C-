/*
 * FileName:判断回文数.cpp
 * Author:  桂诗源
 * E-mail:  1145428914@qq.coom
 * Date:    Mar 6th,2022
 * College: School of Computer Science and Information Engineering
 * Function:判断一个数是否为回文数,范围可到无穷.
 */
#include<iostream>
#include<cstring>
#include<algorithm>//包含字符串翻转的头文件 
using namespace std;
int main() {
	string a, b;
	cin >> a;
	b = a;
	reverse(begin(a), end(a)); //翻转函数
	cout << a << endl;
	if (a == b) {
		cout << "是回文数" << endl;
	}
	return 0;
}
