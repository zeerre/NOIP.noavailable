//*************************************************************************
//* File Name: bookarr.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-02  08-56-00====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    float s=0.0, a[10]={};
    float b[10]={28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
    for(int i=0;i<10;i++){
        cin>>a[i];
        s+=a[i]*b[i];
    }
    printf("%.1f",s);
    return 0;
}
