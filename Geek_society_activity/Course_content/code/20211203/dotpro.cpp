//*************************************************************************
//* File Name: dotpro.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-02  13-44-43====
//*************************************************************************

#include <iostream>
using namespace std;
#define N 1000
int main() {
    int a[N]{},b[N]{};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int s=0;
    for(int i=0;i<n;i++)
        s+=a[i]*b[i];
    cout<<s;
    cout<<endl;
    return 0;
}
