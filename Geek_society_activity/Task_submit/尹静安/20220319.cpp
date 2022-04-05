//*************************************************************************
//* File Name: 20220319.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-19  17-32-16====
//*************************************************************************

//阿克曼函数
#include"stdio.h"
using namespace std;
int Ack(int,int);
int main(){
    printf("The Maxnum of m/n is 3/10;\n Please input m&n:\n");   //警示信息
    int m,n,sum=0;
    scanf("%d %d",&m,&n);
    sum+=Ack(m,n);
    printf("The result is:\n %d",sum);
}

int Ack(int m,int n){
    int tem;    //缓存变量
    if(m==0)
        tem=n+1;
    if(m>0 && n==0)
        tem=Ack(m-1,1);
    if(m>0 && n>0)
        tem=Ack(m-1,Ack(m,n-1));
    return tem;
}