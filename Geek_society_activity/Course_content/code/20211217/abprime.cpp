//*************************************************************************
//* File Name: abprime.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-17  19-10-03====
//*************************************************************************

#include <iostream>
#include <cmath>
using namespace std;
int abprime(int);
void juge(int);
int i,j;
int main() {
    int tem;
    cin>>tem;
    for(int k=10;k<=tem;k++){
        juge(k);
    }
    return 0;
}

int prime(int x){                //判断x是否素数的函数
	int j;
	if (x==2) return 1;
	j=2;
    while(j<=sqrt(x) && x%j!=0)               
        j++;
	if (x%j == 0) 
	    return 0;
	else 
	    return 1;
}

void juge(int m){                //判断是否是绝对素数（2位数）函数
    int x,y,z;                   //三位数？四位数？。。。
    if(prime(m)){
        x=m%10;
        y=m/10;
    
        if(x!=y)
            z=x*10+y;
        if(prime(z))
            cout<<m<<" "<<z<<endl;
    }
}
            