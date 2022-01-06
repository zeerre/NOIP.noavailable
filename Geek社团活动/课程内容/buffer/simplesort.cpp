//*************************************************************************
//* File Name: simplesort.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-05  21-10-57====
//*************************************************************************

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void simplesort(vector<int> &v);
int main() {
    vector<int> v={9,8,1,3,2,4,7,6};
    simplesort(v);
    for(auto item :v){
        cout<<item<<" ";
    }
    cout<<endl;
    return 0;
}
void simplesort(vector<int> &v){
    for(int i=0;i<v.size();++i){
        for(int j=0;j<v.size();++j){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }
}
