//*************************************************************************
//* File Name: freopen_out.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-05  13-27-47====
//*************************************************************************

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    printf("Hello!!\n");
    fputs("test\n",stdout);
    char a[100];
    while(fgets(a,100,stdin)!=NULL)
        printf("%s",a);
    return 0;
}
