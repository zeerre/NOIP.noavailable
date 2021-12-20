//*************************************************************************
//* File Name: hermite.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-17  10-50-05====
//*************************************************************************

#include <iostream>
using namespace std;
float hermite(float ,int);  // Hermite,埃尔米特多项式  Hn(x)
float he=1.0;
//float h1,h2;

int main() {
    float x;
    int n;
    cin>>x>>n;
    cout<< hermite(x,n)<< endl;
    return 0;
}

float hermite(float x,int n){
    
    if(n<=0) he=1;
    if(n==1) he=2 * x;
    if(n>1){
        //h1=hermite(x,n-1);
        //h2=hermite(x,n-2);
        he=2 * (x * hermite(x,n-1) - (n-1) * hermite(x,n-2));
    }
    return he;
}