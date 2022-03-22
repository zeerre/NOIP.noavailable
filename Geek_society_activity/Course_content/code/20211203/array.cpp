//*************************************************************************
//* File Name: array.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-04  20-08-36====
//*************************************************************************

#include <iostream>
#include<iomanip>
using namespace std;
const int N=10;
int main() {
    int n,temp;
    int a[N]{};
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    temp=a[0];
    for(int i=0;i<n-1;i++)
        a[i]=a[i+1];
    a[n-1]=temp;
    for(int i=0;i<n;i++)
        cout<<setw(3)<<a[i];
    return 0;
}
