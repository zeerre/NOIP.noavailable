//*************************************************************************
//* File Name: recip.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-08  07-33-00====
//*************************************************************************

#include <iostream>
using namespace std;
void reci(int);

int main() {
    int n,temp;
    cin>>n;
    reci(n);
    return 0;
}

void reci(int m){
    if(m<10){
        cout<<m;
        return;
    }
    cout<<m%10;
    reci(m/10);
}
