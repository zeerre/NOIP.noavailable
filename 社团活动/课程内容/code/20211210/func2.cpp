//*************************************************************************
//* File Name: code/20211210/func2.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-10  14-59-52====
//*************************************************************************

#include <iostream>
using namespace std;
int ma(int x,int y);

int main() {
    int a,b;
    cin>>a>>b;
    cout<<ma(a,b);
    return 0;
}

int ma(int x,int y){
    if(x>=y)
        return x;
    else
        return y;
}
