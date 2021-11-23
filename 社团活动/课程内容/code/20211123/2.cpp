//*************************************************************************
//* File Name: 1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-23  22-30-29====
//*************************************************************************

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,t=1;
    double sum=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        t=t*i;
        sum=sum+1.0/t;
    }
    printf("%.10lf",sum);
    return 0;
}