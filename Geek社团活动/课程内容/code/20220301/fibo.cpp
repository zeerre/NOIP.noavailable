//*************************************************************************
//* File Name: fibo.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-07  16-14-15====
//*************************************************************************

#include <iostream>
using namespace std;
int fibo(int n);
int main() {
    int a;
    cin>>a;
    cout<<fibo(a);
    return 0;
}

int fibo(int n){
    int s;
    if(n<=0) s=0;
    if(n==1) s=1;
    if(n>1)  s=fibo(n-1)+fibo(n-2);
    return s;
}
