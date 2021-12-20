//*************************************************************************
//* File Name: pr.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-28  09-28-07====
//*************************************************************************

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n,result=0;
    
    cin>>n;
    int a[n]{0};
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int max=a[1],min=a[1];
    for(int i=1;i<=n;i++){
        if(max<=a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    result=max-min;
    cout<<result<<endl;
    return 0;
}
