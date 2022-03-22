//*************************************************************************
//* File Name: ifp.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-20  20-45-39====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    int x,y,c;
    cin>>x>>y;
    c=x-y;
    if(c>0)
        cout<<">";
    else if(c==0)
        cout<<"=";
    else
        cout<<"<";
    return 0;
}
