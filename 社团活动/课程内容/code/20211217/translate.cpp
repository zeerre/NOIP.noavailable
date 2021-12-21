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
int checkrep(int[],int[],int,int);
void checkrepp(int[],int[],int,int,int);
void swap(int[],int,int);
void printarr(int[],int);
int ret;
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<< trans(m,n)<<endl;
    //cout<<ret;
    return 0;
}

int trans(int x,int y){
    int flag,rep;
    ret=0;
    int b[x]{0};
    int k=0,kk;
    b[k]=a[k];
    ret+=1;
    if(x>=y){
        kk=checkrep(a,b,y,k);
        printarr(b,kk+1);
    }
    else{
        checkrepp(a,b,x,y,k);
    }
    return ret;
}

void swap(int c[],int z,int k){
    c[z]=k;
    for(int i=0;i<z;i++)
        c[i]=c[i+1];
}

void checkrepp(int c[],int d[],int o,int p,int q){
    int flag;
    for(int i=1;i<p;i++){
        flag=0;
        for(int j=0;j<=q;j++){
            if(i!=j&&c[i]==d[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            q++;
            d[q]=c[i];
            if(q%o==0){
                for(int l=0;l<o;l++){
                    d[l]=d[l+1];
                }
            }
            ret+=1;
            printarr(d,q+1);
        }
    }
    //return q;
}

int checkrep(int c[],int d[],int o,int p){
    int flag;
    for(int i=1;i<o;i++){
        flag=0;
        for(int j=0;j<=p;j++){
            if(i!=j&&c[i]==d[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            p++;
            d[p]=c[i];
            ret+=1;
        }
    }
    return p;
}

void printarr(int b[],int x){
    for(int i=0;i<x;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}