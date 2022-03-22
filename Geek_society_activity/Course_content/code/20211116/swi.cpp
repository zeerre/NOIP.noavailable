//*************************************************************************
//* File Name: swi.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-11-16  16-18-24====
//*************************************************************************

#include <iostream>
using namespace std;
int main() {
      int weekday;
      cin>>weekday;
      switch(weekday){
           case 1:cout<<"Monday"<<endl; break;
           case 2: cout<<"Tuesday"<<endl; break;
           case 3: cout<<"Wednesday"<<endl; break;
           case 4: cout<<"Thursday"<<endl; break;
           case 5: cout<<"Friday"<<endl; break;
           case 6: cout<<"Saturday"<<endl; break;
           case 7: cout<<"Sunday"<<endl; break;
           default:cout<<"input  error!";}
     
    return 0;
}
