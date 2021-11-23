//*************************************************************************
//* File Name: 3.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-23  22-44-35====
//*************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n, sum=0;
	cin >> n;
	bool b;             // 设定与7相关开关
	for (int i=1; i<=n; i++){
		b = false;      // 初始与7无关，每次循环重置
		if (i%7==0 || i%10==7 || (i/10==7)) 
			b=true;     // 与7有关
		if (!b) sum += i*i; 
	}
	cout << sum;
	return 0;
}