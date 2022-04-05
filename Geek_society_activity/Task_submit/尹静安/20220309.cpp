//*************************************************************************
//* File Name: 20220309.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-09  21-25-09====
//*************************************************************************

//埃尔米特函数
#include"stdio.h"
using namespace std;
int Hn(int,int);
int main(){
    printf("Please input x&n:\n");
    int x,n,sum=0;
    scanf("%d %d",&x,&n);
    sum+=Hn(x,n);
    printf("The result is:\n %d",sum);
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
