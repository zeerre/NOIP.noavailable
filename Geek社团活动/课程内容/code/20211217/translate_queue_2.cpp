//*************************************************************************
//* File Name: translate_queue_2.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-20  22-03-09====
//*************************************************************************

#include<iostream>
#include<cstring>
using namespace std;
int a[1001]={0};
int m,n,x,ans=0;
void replace(){
    int sum,i;
    if(a[x]==0&&ans>=m){
        ans++;
        sum=0;
        for(i=0;i<=1000;i++){    
            if(a[i]>=1){    
                a[i]=a[i]-1;
                sum++;
            }
            if(sum==m) 
                break;
        }
        if(m>0)
            a[x]=m;
    }
}
int main(){
    int i;
    cin>>m>>n;
    for(i=1;i<=n;i++){
      cin>>x;
      if(a[x]==0&&ans<m){
          ans++;
          a[x]=ans;
      }
      else
          replace();
    }
    cout<<ans<<endl;
    return 0;
}
