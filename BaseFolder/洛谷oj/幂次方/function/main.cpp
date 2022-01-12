//*************************************************************************
//* File Name: main.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-10  18-56-11====
//*************************************************************************

#include <iostream>
#define N 100000
#include "power_fun.cpp"
using namespace std;
int main() {
    long long n;
	scanf("%lld",&n);
	power_bit_oper(n);
    printf("\n");
    power_bit_print(n);
	return 0;
}
