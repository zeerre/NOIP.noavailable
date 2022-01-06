//*************************************************************************
//* File Name: fget.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-21  10-18-23====
//*************************************************************************

#include<iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
    char b[100];
    FILE *fp;
    fp= fopen("temp.txt", "w+");
    fputs("Hello China!!!!", fp);
    // string b;
    // getline(cin,b);
    fclose(fp);
    if((fp=fopen("temp.txt","r"))!= NULL){
        while(fgets(b, 100, fp)!= NULL)
            printf("%s",b);
        fclose(fp);
    }
    
    return 0;
}