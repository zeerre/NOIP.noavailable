//*************************************************************************
//* File Name: ackman.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-17  13-02-25====
//*************************************************************************

#include <iostream>
using namespace std;
int ackman(int ,int);

int main() {
    int m,n;
    cin>> m>> n;
    cout<<ackman(m,n)<<endl;
    return 0;
}

int ackman(int x,int y){
    int tem;
    if(x==0) tem=y+1;
    if(x>0&& y==0) tem=ackman(x-1,1);
    if(x>0&& y>0) tem=ackman(x-1,ackman(x,y-1));
    return tem;
}
