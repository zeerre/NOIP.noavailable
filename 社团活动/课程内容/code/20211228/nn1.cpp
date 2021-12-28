//*************************************************************************
//* File Name: nn.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-21  09-13-07====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<10;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
