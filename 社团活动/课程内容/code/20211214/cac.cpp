//*************************************************************************
//* File Name: cac.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-14  11-54-45====
//*************************************************************************

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void calculate(int, char, int);

int main(){
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);//scanf接受字符不需要空格隔开
    calculate(a,c,b);
    return 0;
}
void calculate(int x,char z,int y){
    if(z=='+')	
        cout<<x+y;
    if(z=='-')	
        cout<< x-y;
    if(z=='*')	
        cout<< x*y;
    if(z=='/'&& y!=0)	
        cout<< x/y;
    else if(z=='/'&& y==0)
        cout<<"ERROR";
    if(z=='%'&& y!=0)	
        cout<< x%y;
    else if(z=='%'&& y==0) 
        cout<<"ERROR";
}
