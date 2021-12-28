//*************************************************************************
//* File Name: yang.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-21  09-24-49====
//*************************************************************************

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
	int i,j;
	for(i=1;i<=n;i++){//控制行数 
	    for(j=1;j<=(n-i);j++){
    		cout<<" ";//控制输出空格 
    	}
    	for(j=1;j<=(2*i-1);j++){
	    	cout<<"*";//控制输出* 
	    }
	    cout<<endl;//每一行进行换行 
	}
	return 0;
} 
