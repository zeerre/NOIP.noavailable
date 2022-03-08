//*************************************************************************
//* File Name: cal.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-08  08-55-45====
//*************************************************************************


#include<iostream>

using namespace std;
void cal(int n);
char ch[10000];
int main(){
    char cha;
    int i=0;
    while(true){
        cin>>cha;
        
        ch[i]=cha;
        i++;
        if(cha=='!')
            break;
    }
    cal(0);
    cout<<endl;    
    return 0;
}
void cal(int n){
    if(ch[n]!='!')
        cal(n+1);
    else return;
    cout<<ch[n];
}