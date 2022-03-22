//*************************************************************************
//* File Name: diagonal.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-09  18-31-41====
//*************************************************************************

#include "diagonal.h"

void print_arr_fun(long long a[],long long n){
    for(int i=1;i<n;i++){
        printf("%lld\t",a[i]);
        if(i%10==0)
            printf("\n");
    }
    printf("\n");
}
void cre_seq(long long a[] ,long long b[] ,long long c[], long long n){
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+i;          //这里生成1,3,6,10序列
    }
    for(int i=1;i<=n;i++){
        b[i]=b[i-1]+a[i];       //这里生成1,4,10,20序列
    }
    for(int i=1;i<=n;i++){
        c[i]=c[i-1]+b[i];       //这里生成答案序列：1,5,15,35
    }
}