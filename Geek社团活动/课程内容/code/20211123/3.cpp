//*************************************************************************
//* File Name: 3.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-23  23-12-01====
//*************************************************************************

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    float t,x,s;
    s=0.0;
    cin>>x>>n;
    // for(int i=n;i>=0;i--)
    //     s+=pow(x,i);
    for(int i=n;i>=0;i--){
        t=1;
        for(int j=i;j>0;j--){
            t*=x;
        }
        s+=t;
    }        
    printf("%.2f",s);
    return 0;
}
