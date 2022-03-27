//*************************************************************************
//* File Name: 20220319.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-19  17-32-16====
//*************************************************************************

#include"stdio.h"
using namespace std;
int Hn(int,int);
int main(){
    int x,n,kel,sum=0;
    printf("Please input x & n:\n");
    scanf("%d %d",&x,&n);
    for(int i=0;i<=n;i++){
        kel=Hn(x,n);
        sum+=kel;
    }
    printf("%d",sum);
    return 0;
}

int Hn(int a,int b){    
    if(b==0)
        return 1;
                        //接下来的内层循环应该如何用代码实现？代码是什么？
}
