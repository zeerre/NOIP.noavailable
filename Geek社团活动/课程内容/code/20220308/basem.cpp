//*************************************************************************
//* File Name: basem.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-09  14-54-15====
//*************************************************************************

#include <iostream>
using namespace std;
void turns(int,int);
void outs(int[]);
char ch[6]={'A','B','C','D','E','F'};
int main() {
    int m,n;
    int k=0,i,x[100];
    cout<<"Please input Number and NumS: ";
    cin>>m>>n;
    cout<<m<<" turn into "<<n<<"   : "<<endl;
    turns(m,n);
    outs(ch);
    return 0;
}

void turns(int m,int n){
    if(m<n){
        if(m<10){
            k++;
            x[k]=m;
            //cout<<m;
            return;
        }else{
            k++;
            x[k]=ch[m-10];
            return;
        }
    }else{
        k++;
        x[k]=m%n;
        turns(m/n,n);
    }

}
