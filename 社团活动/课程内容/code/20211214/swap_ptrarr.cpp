//*************************************************************************
//* File Name: parameter.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-14  08-41-57====
//*************************************************************************

#include<iostream>
using namespace std;
void bubble(int[],int);     //相当于void bubble(int a[],int n);
int main(){                 //数组应开为全局变量
    int array[10]={11,4,55,6,77,8,9,0,7,1};  
    cout<<"排序前 ";
    for (int i=0; i<10; ++i)
       cout<<array[i]<<','; 
    cout<<endl;
    cout<<array<<endl;
    bubble(array,10); 
    cout<<"排序后 ";
    for (int i=0; i<10; ++i)
   	    cout<<array[i]<<',';
    cout<<endl;
    cout<<&array<<endl;
    return 0;
}

void bubble(int a[],int n){
    for (int i=1; i<n; ++i){
       	for (int j=0; j<n-i;++j)
         	if (a[j]>a[j+1]){     //判断并交换变量
                int temp=a[j]; 
			    a[j]=a[j+1];   
            	a[j+1]=temp;
         	}
      }
}
