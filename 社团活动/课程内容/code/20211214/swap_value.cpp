//*************************************************************************
//* File Name: parameter.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-14  08-41-57====
//*************************************************************************

#include<iostream>
using namespace std;
void swap(int a,int b){
    int tmp=a;
    a=b;
    b=tmp;
}
int main(){
    int c=1,d=2;
    cout<<c<<' '<<d<<endl;
    cout<<&c<<' '<< &d<<endl;
    swap(c,d);
    cout<<c<<' '<<d<<endl;
    cout<<&c<<' '<< &d<<endl;
    return 0;
}
