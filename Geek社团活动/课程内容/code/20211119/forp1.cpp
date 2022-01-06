//*************************************************************************
//* File Name: forp1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-20  16-01-53====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    int n,m;
    float ave=0.0,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m;
        sum+=m;
    }
    ave=sum/n;
    printf("%.2f",ave);
    return 0;
}
