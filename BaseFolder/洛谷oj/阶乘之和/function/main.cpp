//*************************************************************************
//* File Name: main.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-09  21-52-59====
//*************************************************************************

#include <iostream>
#include <cstdio>
#include "factorial.cpp"
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int s[10000]{0},a[10000]{0};
	s[10000]=a[10000]=1;
	for(int i=2;i<=n;i++){
		product(a,i);
		sum(s,a);
	}
	print(s);
	return 0;
}