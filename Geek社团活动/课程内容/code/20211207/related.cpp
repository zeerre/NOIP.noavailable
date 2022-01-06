//*************************************************************************
//* File Name: related.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-07  21-12-20====
//*************************************************************************

#include<cstdio>
#include<cstring>
using namespace std;
int s=0,len;
char a[501],b[501];

int main(){   
    double n;
	scanf("%lf",&n);
	scanf("%s",a);
	scanf("%s",b);
	len=strlen(a);
	for(int i=0;i<len;i++)
		if(a[i]==b[i])
            s++;
	if(s*1.0/len>=n)
	    printf("yes\n");
	else
		printf("no\n");
	return 0;
}