//*************************************************************************
//* File Name: yh.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-02  21-05-25====
//*************************************************************************

#include<iostream>
#include<iomanip>
int a[11][11];
using namespace std;
int main(){
    int n;                          //n<=11
    cin>>n;

    a[1][1]=1;                      //设定第一行的值
    for (int i=2; i<=n; ++i){		//从第二行开始推
        a[i][1]=1;
        a[i][i]=1;          		//设定每一行的首尾值为1
        for (int j=2; j<=i-1; ++j)  //当前行非首，尾的数
            a[i][j]=a[i-1][j-1]+a[i-1][j];    //每个数等于上一行的两个数之和
    }
    for (int i=1; i<=n; i++){
        if (i!=10) 
            cout<<setw(30-3*i)<<" ";    //控制每行的起始位置，即空格数量
        for (int j=1; j<=i; j++) 
            cout<<setw(6)<<a[i][j];
        cout<<endl;        
    }
    return 0;
}
