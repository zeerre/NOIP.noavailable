//*************************************************************************
//* File Name: pernum.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-17  15-51-21====
//*************************************************************************

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int pr,i,j;
    
    for(i=2;i<=100;i++){
        int s=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                s+=j;            
            }
        //for(j=1;j<sqrt(i);j++)    
        //    s=j+i/j;
        }
        if(s==i) cout<<s<<' ';
        //cout<<endl;
    }
    return 0;
}
