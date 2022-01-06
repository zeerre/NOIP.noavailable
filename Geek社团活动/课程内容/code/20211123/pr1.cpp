#include<iostream>
#include<math.h>               //在Code blocks中可调用数学函数库cmath
#include<iomanip>
#include<cstring>
using namespace std;
const int n=100;
int t;
bool a[n+1];
int main(){
    //for (int i=0; i<=n; ++i) a[i]=true; //等同于memset(a,1,sizeof(a)) ,要调用cstrin库
    memset(a,1,sizeof(a));
    a[1]=false;
    for (int i=2; i<=sqrt(n); ++i)
      if (a[i])
        for (int j=2; j<=n/i; ++j)
          a[i*j]=false;
    t=0;
    for (int i=2; i<=n; ++i)
      if (a[i]){
          cout<<setw(5)<<i;
          t++;
          if (t%5==0) cout<<endl;
      }
    return 0;}
