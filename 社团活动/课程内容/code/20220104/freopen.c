//*************************************************************************
//* File Name: c.c
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-05  12-10-26====
//*************************************************************************

#include "stdio.h"
int main(int argc, int argv[]){
    freopen("out.txt","w",stdout);
    freopen("in.txt","r",stdin); 
    char a[100];
    while(fgets(a,100,stdin)!=NULL){
    	printf("%s\n",a);
    }
    printf("Hello C!!!");
    return 0;
}
