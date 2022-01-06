//*************************************************************************
//* File Name: 1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-30  19-25-35====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    int n,count;
    int a[100]={};
    int c=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>count;
    for(int i=0;i<n;i++)
    {
        if(count==a[i])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
