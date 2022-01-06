//*************************************************************************
//* File Name: prr.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-30  15-45-54====
//*************************************************************************

#include<cstdio>
int a[100];
int main(){
    int x,n=0;
    while(scanf("%d",&x)==1) a[n++]=x;  //相当{a[n]=x;n++;}
    for (int i=n-1;i>=1;--i)
        printf("%d ",a[i]);  	//注意%d后面有一个空格，
    printf("%d\n",a[0]);	//保证行首行尾均无空格
    return 0;
}
