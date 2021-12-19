//*************************************************************************
//* File Name: translate.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-19  19-04-31====
//*************************************************************************

#include <iostream>
using namespace std;
int a[1000];
int trans(int,int);
void checkrep(int[],int);
void swap(int[],int,int);
void printarr(int[],int);
int ret;
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<< trans(m,n);
    //cout<<ret;
    return 0;
}

int trans(int x,int y){
    int flag,rep;
    ret=0;
    int b[x+1]{0};
    
    if(x>=y){
        for(int i=0;i<y;i++){
            b[i]=a[i];
            ret+=1;
        }
        for(int i=0;i<y;i++){
            for(int j=i+1;j<y;j++){
                if(b[j]==a[i])
                    ret-=1;
            }
        }
        //checkrep(b,y);
        printarr(b,y);

    }
    else{
        //for(int j=0;j<y;j++){
        
        for(int i=0;i<x;i++){
            b[i]=a[i];
            ret+=1;
        }
        //checkrep(b,y);
        printarr(b,y);
        //}
        for(int i=0;i<x;i++){
            for(int j=x-1;j>i;j--){
                if(b[j]==a[i])
                    ret-=1;
            }
        }
        for(int j=x;j<y;j++){
            flag=0;
            for(int i=0;i<x;i++){
                if(a[j]==b[i])
                    continue;
                else
                    flag+=1;
            }
            if(flag==x){
                swap(b,x,a[j]);
                printarr(b,y);
                ret+=1;
            }
        }
    }
    return ret;
}

void swap(int c[],int z,int k){
    c[z]=k;
    for(int i=0;i<z;i++)
        c[i]=c[i+1];
}

void checkrep(int c[],int z){
    for(int i=z-1;i<=0;i--){
        for(int j=z-1;j<=0;j--){
            if(i!=j&&c[j]==c[i]){
                c[j-1]=c[j];
            }
        }
    }
}

void printarr(int b[],int x){
    for(int i=0;i<x;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}