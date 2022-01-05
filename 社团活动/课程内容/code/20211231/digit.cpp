//*************************************************************************
//* File Name: digit.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-17  10-15-24====
//*************************************************************************

#include <iostream>
using namespace std;
int digit(int,int);
int i=0;
int temp;
int main() {
    int n,k;
    cin>>n>>k;
    cout<<digit(n,k)<<endl;
    return 0;
}
int digit(int x,int y){
    temp=x%10;
    x/=10;
    i+=1;
    if(i!=y) digit(x,y);
    return temp;
}

