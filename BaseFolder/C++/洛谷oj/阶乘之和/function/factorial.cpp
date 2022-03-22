//*************************************************************************
//* File Name: factorial.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-09  21-52-53====
//*************************************************************************

#include "factorial.h"
const int m=N-1;
void product(int a[],int x){	
	int g=0;
	for(int i=m;i>=0;i--){
		a[i]=a[i]*x+g;
		g=a[i]/10;
		a[i]=a[i]%10;
	}
}
void sum(int s[],int a[]){	
	int g=0;
	for(int i=m;i>=0;i--){
		s[i]=s[i]+a[i]+g;
		g=s[i]/10;
		s[i]=s[i]%10;
	}
}
void print(int s[]){	
	int w;
	for(int i=0;i<=m;i++){
		if(s[i]!=0){
			w=i;
			break;
		}
	}
	for(int i=w;i<=m;i++)
	   printf("%d",s[i]);
}
