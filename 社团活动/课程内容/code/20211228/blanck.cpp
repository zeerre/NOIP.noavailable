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
    
    FILE *file;

    char a[100];

    // string b;
    // getline(cin,b);

    if((file=fopen("fget_file.txt","r"))!= NULL){
        while(fgets(a, 100, file)!= NULL)
            printf("%s",a);
        fclose(file);
    }
    return 0;
}