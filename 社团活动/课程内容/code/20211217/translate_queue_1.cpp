//*************************************************************************
//* File Name: translate_queue.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-20  21-46-57====
//*************************************************************************

#include <iostream>
#include <queue>
using namespace std;
int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    queue<int> que;
    int a[1005] = {0};
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(a[x])
        continue;

        if(que.size() == m){
            int t = que.front();
            a[t] = 0;
            que.pop(),que.push(x);
        }
        else
        que.push(x);

        a[x] = 1;
        ans++;
    }
    cout<<ans;
    return 0;
}