//*************************************************************************
//* File Name: reduce.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-14  10-42-45====
//*************************************************************************

#include<iostream>
#include<iomanip>
using namespace std;
void common(int x,int y);
int main(){   
    int a,b;
    cin>>a>>b;
    common(a,b);
    return 0;
}
void common(int x,int y){   
    int m=x,n=y,r;    //用辗转相除法求x,y的最大公约数
    do{    
        r=m%n; 
        m=n;   
        n=r;
    }while (r!=0);
    x/=m;              //用两者的最大公约数m对x,y进行约分
    y/=m;
    cout<<setw(5)<<x<<setw(5)<<y<<endl;
}
