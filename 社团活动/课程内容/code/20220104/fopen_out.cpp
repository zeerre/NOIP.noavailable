//*************************************************************************
//* File Name: freopen_1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-05  13-08-11====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    FILE *fp;
    char a[100];
    fp=fopen("out.txt","r");
    while(fgets(a,100,fp)!=NULL){
        printf("%s",a);
    }
    fclose(fp);
    return 0;
}
