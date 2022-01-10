//*************************************************************************
//* File Name: main.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-09  21-52-59====
//*************************************************************************

#include <iostream>
#include <cstdio>
#define N 10001
#include "factorial.cpp"

using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int s[N]{0},a[N]{0};
	s[N-1]=a[N-1]=1;
	for(int i=2;i<=n;i++){
		product(a,i);
		sum(s,a);
	}
	print(s);
	return 0;
}