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
    int m,n;
    printf("The Max num of m is 3 ; n is 10.\n");
    scanf("%d %d",&m,&n);
    printf("%d",ack(m,n));
    return 0;
}

int ack(int a,int b){   //The function is not overall.Think it.
    if(a==0);
        return b+1;
    while(a>0){
        if(b==0)
            b=1;
        else
            b=ack(a,b-1);
            a--;
    }
}
