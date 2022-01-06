//*************************************************************************
//* File Name: palind.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-17  22-11-28====
//*************************************************************************

#include <iostream>
using namespace std;
int a[10001];
int palind(int);
int main() {
    int n;
    cin>> n;
    for(int i=100;i<=n;i++){
        if(palind(i))
            cout<<i<<" is palind Yes"<<endl;
        else
            //cout<<i<<" is palind No"<<endl;
            continue;

    }
    return 0;
}
int palind(int x){
    int tem;
    int i=1,k;
    while(x){
        a[i]=x%10;
        x/=10;
        i++;
    }
    k=i-1;
    for(int j=1;j<i;j++){
        if(a[j]==a[k]){
            tem=1;
            k-=1;
        }else{
            tem=0;
            break;
        }
            
        if(j>k) break;
    }
    return tem;
}
