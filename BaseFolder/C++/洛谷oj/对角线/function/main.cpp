//*************************************************************************
//* File Name: main.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-09  18-31-56====
//*************************************************************************

#include <iostream>
#include "diagonal.cpp"
using namespace std;
int main() {
    const long long N=100000;
    long long a[N]{0} ,b[N]{0},c[N]{0};
    long long n;
    cin>>n;
    cre_seq(a,b,c,n);
    cout<<c[n-3]<<endl;
    print_arr_fun(a,n);
    print_arr_fun(b,n);
    print_arr_fun(c,n);
    return 0;
}
