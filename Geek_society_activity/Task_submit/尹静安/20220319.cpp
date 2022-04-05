//*************************************************************************
//* File Name: 20220319.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-19  17-32-16====
//*************************************************************************

#include"stdio.h"
using namespace std;

    return 0;
}

int Hn(int x,int y){
    int tem;
    if(y==0)
        tem=1;
    if(y==1)
        tem=2*x;
    if(y>1)
        tem=2*x*Hn(x,y-1)-2*(y-1)*Hn(x,y-2);
    return tem;
}
