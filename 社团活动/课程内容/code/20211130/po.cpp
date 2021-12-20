//*************************************************************************
//* File Name: po.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-28  22-06-55====
//*************************************************************************

#include<cstdio>
#include<cstring>
#define MAXN 100+10
int a[MAXN];
int main(){
	int n,k,first=1;
	memset(a,0,sizeof(a));
    for (int i=1;i<=100;i++)
	    for (int j=1;j<=100;j++)
	        if (j%i==0) a[j]=!a[j];
    for (int i=1;i<=100;++i)
        if (a[i]){
        	if(first) first=0; 
            else printf(" ");
            printf("%d",i);  
        }
    printf("\n");
    return 0;	
}
     