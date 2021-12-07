//*************************************************************************
//* File Name: pr.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-22  20-36-17====
//*************************************************************************

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i,num[11];
    memset(num,0,sizeof(num));    //数组初始化为0
    while(cin>>i)                 //读入选票
        num[i]=num[i]+1;            //num[i]表示i号歌手的选票数
    for (i=1;i<=10;i++)
    	cout<<i<<" ";               //输出1～10选手编号
    cout<<endl; 
    for (i=1;i<=10;i++) 
    	cout<<num[i]<<" ";          //输出各位歌手的最终选票数
    return 0;
}
