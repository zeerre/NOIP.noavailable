//*************************************************************************
//* File Name: basem.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-03-09  14-54-15====
//*************************************************************************
//将十进制数转换成n(n<=20)进制数
#include <iostream>
using namespace std;
void turns(int,int);            //定义进制转换函数；
void outs(int[],int);           //定义输出转制后的结果函数；
char ch[10]={'A','B','C','D','E','F','G','H','I','J'};   //处理余数大于10小于20的数组
int k=0,i,x[100];               //全局变量，x[100]数组存取余数数组，k控制已经存储余数的数组边界
int main() {
    int m,n;
    cout<<"Please input Number and NumS: ";
    cin>>m>>n;
    cout<<m<<" turn into "<<n<<" is : ";
    turns(m,n);
    outs(x,k);
    cout<<endl;
    return 0;
}

void turns(int m,int n){
    
    if(m<n){                    //无论余数是多少，都存储到数组x[k]
        k++;
        x[k]=m;
    }else{                      //这个过程很好理解，递归求剩余部分的余数，直到m<n
        k++;
        x[k]=m%n;
        turns(m/n,n);
    }

}
void outs(int a[],int i){       //倒序打印数组，最先求出来的是最低位，这需要根据数组的数据与实际得到的内容来做决策。
    for(int j=i;j>0;j--){
        
        if(a[j]<10){
            cout<<a[j];
        }else{
            cout<<ch[a[j]-10];
        }
    }
}
