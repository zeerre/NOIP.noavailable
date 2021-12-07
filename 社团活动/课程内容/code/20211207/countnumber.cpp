//*************************************************************************
//* File Name: countnumber.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2021-12-07  20-52-45====
//*************************************************************************


#include <stdio.h>
#include <string.h>
#include <iostream>
 
using namespace std;
char s[255]; 
int main(){
    int len,ss=0;
    cin.getline(s,255);
    len=strlen(s);
    for(int i=0;i<len;i++)
		if(s[i]>='0'&&s[i]<='9')
			ss++;    
	printf("%d",ss);

}
