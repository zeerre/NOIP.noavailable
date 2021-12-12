//*************************************************************************
//* File Name: sumdiv.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-12  21-02-09====
//*************************************************************************

#include<iostream>
using namespace std;
int const maxNum=1000;
int num_1,num_2;
int divSum(int x){
    int sum=0;
    for(int i=1;i<x;i++)
        if(x%i==0) sum+=i;
    return sum;
}

int main(){
    for(int num_1=1;num_1<=maxNum;num_1++){
        num_2=divSum(num_1);
        if(num_1!=num_2 && num_1==divSum(num_2)){
            printf("%d %d\n",num_1,num_2);
            break;
        }
    }
    return 0;
}