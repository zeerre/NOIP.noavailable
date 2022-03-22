//*************************************************************************
//* File Name: base.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-14  10-14-59====
//*************************************************************************

#include<cstdlib>
#include<iostream>
using namespace std;
void TurnData(int n,int a);
char ch[6]={'A','B','C','D','E','F'};
int main(){
    int n,m;  
    cin>>n>>m;
    //TurnData(n,2);      //n转成2进制数
    //TurnData(n,8);      //n转成8进制数
    //TurnData(n,16);     //n转成16进制数
    TurnData(n,m);        //n转成m进制
    return 0;
}
void TurnData(int n,int a){
    int x[17],i,j,k=0;
    cout<<n<<" turn into "<<a<<"  : "<<endl;
    if (n<0) 
        cout<<'-';      //负数的话，先输出负号再开始转
    j=abs(n);
    do{
        k++;           //用于统计转成a进制数后的总位数
        i=j%a;     
        j/=a;     
        x[k]=i;
    }while (j!=0);
    for (int h=k; h>=1; --h)
      	if (x[h]<10) 
            cout<<x[h];
      	else  
            cout<<ch[x[h]-10];
    cout<<endl;
}
//写成递归调用的方式。