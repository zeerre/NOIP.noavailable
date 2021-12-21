//*************************************************************************
//* File Name: nn.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-21  09-13-07====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    int i,j;
    i=1;
    while(i<=9){
        j=1;
        while(j<=i){
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
