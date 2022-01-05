//*************************************************************************
//* File Name: freopen.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-04  15-59-00====
//*************************************************************************

#include <iostream>
#include<cstdio>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);        //定义输入文件名
    freopen("out.txt","w",stdout);      //定义输出文件名
    int temp,sum=0;
    while (scanf("%d",&temp)==1){       //(cin>>temp)从输入文件中读入数据
        printf("%d\n",temp);            //在C++中非0为真
        sum=sum+temp;
    }
    printf("%d\n",sum);                // cout<<sum<<endl;
    fclose(stdin);fclose(stdout);       //关闭文件，可省略
    return 0; 
}

