//*************************************************************************
//* File Name: snake.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-02  21-46-10====
//*************************************************************************

#include<cstdio>
#include<cstring>
#define MAXN 10
int a[MAXN][MAXN];
int main(){
	int n,x,y,tot=0;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	tot=a[x=0][y=n-1]=1;
	while (tot<n*n){
        while (x+1<n && !a[x+1][y]) a[++x][y]=++tot;
        while (y-1>=0 && !a[x][y-1]) a[x][--y]=++tot;
        while (x-1>=0 && !a[x-1][y]) a[--x][y]=++tot;
        while (y+1<n && !a[x][y+1]) a[x][++y]=++tot;
    }
    for(x=0;x<n;++x){
		for(y=0;y<n;++y) 
            printf("%3d",a[x][y]);
		printf("\n");
    }
    return 0;
}