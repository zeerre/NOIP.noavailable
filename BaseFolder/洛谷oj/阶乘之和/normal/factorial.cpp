//*************************************************************************
//* File Name: factorial.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-09  22-30-46====
//*************************************************************************

#include<iostream>
#include<cstdio>
using namespace std;
int n,a[10000]={0},s[10000]={0};
void change(int x)
{
	int g=0;
	for(int i=10000;i>=0;i--)
	{
		a[i]=a[i]*x+g;
		g=a[i]/10;
		a[i]=a[i]%10;
	}
}
void qh()
{
	int g=0;
	for(int i=10000;i>=0;i--)
	{
		s[i]=s[i]+a[i]+g;
		g=s[i]/10;
		s[i]=s[i]%10;
	}
}
void sc()
{
	int w;
	for(int i=0;i<=10000;i++)
	{
		if(s[i]!=0)
		{
			w=i;
			break;
		}
	}
	for(int i=w;i<=10000;i++)
	   printf("%d",s[i]);
}
int main()
{
	scanf("%d",&n);
	s[10000]=a[10000]=1;
	for(int i=2;i<=n;i++)
	{
		change(i);
		qh();
	}
	sc();
	return 0;
}
