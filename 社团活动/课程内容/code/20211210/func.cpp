//*************************************************************************
//* File Name: code/20211210/func.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-10  14-48-55====
//*************************************************************************

#include <iostream>
using namespace std;
void swap(int,int,int);

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    swap(a,b,c);
    cout<<a<<b<<c<<endl;
    return 0;
}
void swap(int x,int y,int z){
    int tem;
    tem=x;
    x=y;
    y=z;
    z=tem;
    cout<<x<<y<<z<<endl;
}
