//*************************************************************************
//* File Name: fopen_in.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-05  13-15-43====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    FILE *fp1,*fp2;
    fp1=fopen("out.txt","w+");
    fputs("Hello,fighting!!",fp1);
    
    fclose(fp1);
    fp2=fopen("out.txt","r");
    char a[100];
    while((fgets(a,100,fp2))!=NULL){
        printf("%s",a);
    }
    fclose(fp2);
    return 0;
}
