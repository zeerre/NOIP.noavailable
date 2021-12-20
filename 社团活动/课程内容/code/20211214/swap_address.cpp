//*************************************************************************
//* File Name: parameter_address.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-14  08-43-52====
//*************************************************************************

#include<iostream>
using namespace std;
void swap(int &a,int &b){        //定义swap()函数，形参是传址调用
    int tmp=a;
    a=b;
    b=tmp;
}
int main(){
    int c=33,d=22;
    cout<<c<<' '<<d<<endl;
    cout<<&c<<' '<< &d<<endl;
    swap(c,d);                   //交换变量
    cout<<c<<' '<<d<<endl;
    cout<<&c<<' '<< &d<<endl;
    return 0;
}
