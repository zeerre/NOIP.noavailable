//*************************************************************************
//* File Name: 20220319.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-19  17-32-16====
//*************************************************************************

#include"stdio.h"
using namespace std;
int ack(int,int);
int main(){
    int m,n,sum=0;
    printf("The Max num of m is 3 ; n is 10.\n");
    scanf("%d %d",&m,&n);
    sum+=ack(m,n);
    printf("%d",sum);
    return 0;
}

int ack(int a,int b){
    if(a==0)
        return b+1;
    if(a!=0&&b==0){
        b=1;
        return ack(a,b);
    }
    if(a!=0&&b!=0){
        b=ack(a,b-1);
        a-=1;
        return ack(a,b);
    }
}
