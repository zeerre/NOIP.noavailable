//*************************************************************************
//* File Name: code/20211210/func1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-10  14-56-17====
//*************************************************************************

#include <iostream>
using namespace std;
void swap(int x,int y,int z){
    int tem;
    tem=x;
    x=y;
    y=z;
    z=tem;
    cout<<x<<y<<z;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    swap(a,b,c);
    coutM<<a<<b<<c;
    return 0;
}
