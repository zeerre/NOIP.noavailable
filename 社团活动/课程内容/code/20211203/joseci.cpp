//*************************************************************************
//* File Name: joseci.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-01  09-23-27====
//*************************************************************************

#include<iostream>
using namespace std;
int n,m,s,f,t;
bool a[101];				    //根据题意开出数组大小
int main(){
    cin>>n>>m;			        //共n人，报到m出圈
    cout<<endl;
    for (t=1;t<=n;++t) 
        a[t]=false;             //等同于memset(a,0,sizeof(a)),要调用cstring库
    f=0;  t=0;  s=0;            //刚开始所有变量默认值也是0,或者用f=t=s=0;
    do{
	    ++t;			        //逐个枚举圈中的所有位置
        if(t==n+1) t=1;		    //数组模拟环状，最后一个与第一个相连
        if (a[t]==false) ++s;	//第t个位置上有人则报数
        if (s==m){
   	        s=0;			    //计数器清零
            cout<<t<<" ";		//输出出圈人的编号
            a[t]=true;		    //此处的人已出圈，设置为空
            f++;
        }	 		            //出圈的人数增加一个
    } while(f!=n);			    //直到所有的人都出圈为止
    return 0;
}
