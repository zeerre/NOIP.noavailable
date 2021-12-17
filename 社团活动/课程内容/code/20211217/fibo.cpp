//*************************************************************************
//* File Name: fibo.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-17  13-17-47====
//*************************************************************************

#include <iostream>
using namespace std;

long long fibo(int);

int main() {
    int n;
    cin>> n;
    cout<<fibo(n);
    return 0;
}
long long fibo(int n){
    long long s;
    if(n==0) s=0;
    if(n==1) s=1;
    if(n>1) s=fibo(n-1)+fibo(n-2);
    return s;
}
