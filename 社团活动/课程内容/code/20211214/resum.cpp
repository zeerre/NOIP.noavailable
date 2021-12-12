//*************************************************************************
//* File Name: resum.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-12  21-54-59====
//*************************************************************************

#include <iostream>
using namespace std;

long long resum(long long n){
    long long sum;
    if (n <= 0)
        sum = 0;
    else
        sum= n + ad( n-1);
    return sum;
}

int main(){
    long long n;
    long long result;
    cin >> n;
    result=resum(n);
    cout << result<< '\n';
    return 0;
}
