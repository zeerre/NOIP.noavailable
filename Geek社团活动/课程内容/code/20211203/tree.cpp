//*************************************************************************
//* File Name: tree.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-02  10-19-27====
//*************************************************************************

#include <iostream>
using namespace std;
int a[10001]={0};
int main(){
    int L, M;
    cin >> L >> M;
    for(int i = 0; i < M; i++){  
        int m, n;
        cin >> m >> n;
        if(m > n){ 
            int temp=m;
            m=n;
            n=temp;
        }
        for(int j = m; j <= n; j++)
              a[j]=1;//标记移除树
    }
    int count=0;
    for(int k = 0; k <= L; k++)
        if(a[k]==1)
        count++;//总共移除树
    cout << L+1-count << endl;//总共有L+1棵树
    return 0;
}

