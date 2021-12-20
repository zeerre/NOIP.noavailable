//*************************************************************************
//* File Name: gotop.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-16  22-53-21====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
label:
    n+=1;
    if(n>40) goto lab;
goto label;
lab:
    cout<<n;
    return 0;
}
