//*************************************************************************
//* File Name: pick.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-30  20-55-32===
//*************************************************************************

#include <iostream>
using namespace std;
#define N 10
int a[N];
int main() {
    int m,n;
    for(int i=0;i<10;i++){
        cin>>a[i];

    }
    cin>>m;
    n=0;
    for(int i=0;i<10;i++){
        if(a[i]<=m+30)
            n++;
    }
    cout<<n;
    return 0;
}
