//*************************************************************************
//* File Name: 20220319.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-19  17-32-16====
//*************************************************************************

#include"stdio.h"
using namespace std;
int Ack(int,int);
int main(){
    printf("The Maxnum of m/n is 3/10;\n Please input m&n:\n");   //警示信息
    int m,n,sum=0;
    scanf("%d %d",&m,&n);
    sum+=Ack(m,n);
    printf("The result is:\n %d",sum);
    printf("Please input x&n:\n");
    int x,n,sum=0;
    scanf("%d %d",&x,&n);
    sum+=Hn(x,n);
    printf("The result is:\n %d",sum);
    return 0;
}
//____________________ackmann function
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

//----------上：阿克曼函数；下：埃尔米特函数----------

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
