//*************************************************************************
//* File Name: 对角线.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-09  17-55-43====
//*************************************************************************

#include <iostream>
#include<cstdio>
using namespace std;

long long a[100000];
long long b[100000];
long long c[100000];
int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long n;
    scanf("%lld",&n);
    int t=0;
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+i;          //这里生成1,3,6,10序列
    }
    for(int i=1;i<=n;i++){
        b[i]=b[i-1]+a[i];       //这里生成1,4,10,20序列
    }
    for(int i=1;i<=n;i++){
        c[i]=c[i-1]+b[i];       //这里生成答案序列：1,5,15,35
    }
    printf("%lld\n",c[n-3]);
    
    for(int i=1;i<n;i++){
        printf("%lld\t",c[i]);
        if(i%10==0)
            printf("\n");
    }
    return 0;
}
