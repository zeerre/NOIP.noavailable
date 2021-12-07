//*************************************************************************
//* File Name: 1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-23  22-34-02====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
    int m,n,k;
    
    n=0;
    cin>>k;
    for(int i=1;i<=k;i++){
        m=1;
        for(int j=1;j<=i;j++)
            m*=j;
        n+=m;
    }
    cout<<n<<endl;
    return 0;
}
