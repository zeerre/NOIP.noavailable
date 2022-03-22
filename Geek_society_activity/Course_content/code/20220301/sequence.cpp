//*************************************************************************
//* File Name: sequence.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-07  16-09-13====
//*************************************************************************

#include <iostream>
using namespace std;
int seq(int n);
int main() {
    int n;
    cin>>n;
    cout<<seq(n);
    return 0;
}

int seq(int n){
    if(n<=0) return 0;
    else
        return seq(n-1)+n;
}