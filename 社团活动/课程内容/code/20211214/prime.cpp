//*************************************************************************
//* File Name: prime.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-14  10-09-03====
//*************************************************************************

#include<cstdio>
#include<cmath>
int prime(int x); //对于函数的声明
int main(){
	int n;
	scanf("%d",&n);
	if (prime(n))
	  printf("yes");
	else 
	  printf("no");
	return 0;
}
int prime(int x){                //判断x是否素数的函数
	int j;
	if (x==2) return 1;
	j=2;
    while(j<=sqrt(x) && x%j!=0)               
        j++;
	if (x%j == 0) 
	   return 0;
	else 
	   return 1;
}
