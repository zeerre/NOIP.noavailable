//*************************************************************************
//* File Name: hw.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-02  21-40-57====
//*************************************************************************

#include<iostream>
using namespace std;
int main(){
    char ch,letter[101];
    int i=0,j=1;
    cout<<"Input a string:";
    cin>>ch;
    while (ch!='.'){				//读入一个字符串以'.'号结束
      ++i;
      letter[i]=ch;
      cin>>ch;
    }
    while ((j<i)&&(letter[j]==letter[i])){		//判断它是否是回文
         --i; ++j;
    }
    if (j>=i) cout<<"Yes"<<endl;
    else   cout<<"No"<<endl;
    return 0;}

