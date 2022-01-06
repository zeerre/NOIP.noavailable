//*************************************************************************
//* File Name: translate_queue.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-20  21-46-57====
//*************************************************************************

#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main(){
    queue<int> q;
    int m,n,ans=0;
    int b;
    cin  >> m >> n;
    for(int i=1;i<=n;i++){
        cin >> b;
        if(!a[b]){
            ans++;
            if(q.size()<m){
                a[b]=1;
                q.push(b);
            }else if(m!=0){
                a[q.front()]=0;
                a[b]=1;
                q.pop();
                q.push(b);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
