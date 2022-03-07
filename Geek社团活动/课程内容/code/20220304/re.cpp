//*************************************************************************
//* File Name: re.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-04  15-42-03====
//*************************************************************************

#include <iostream>
using namespace std;
int xl(int x);

int main() {
    int x;
    cin>>x;
    int out;
    out=xl(x);
    cout<<out;
    return 0;
}

int xl(int x){
    if(x==1) return x;
    else return xl(x-1)+x;
}
