//*************************************************************************
//* File Name: palind.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-11  15-33-21====
//*************************************************************************


#include "palind.h"

//把s字符串写到q数组里(字符有待完善)
void init_arr(int q[],char s[],int l){
	int j = 0;
	for(int i = l - 1; i >= 0 ; i--){
		if(s[i] >= '0' && s[i] <= '9'){         //数字 
			q[j] = s[i] - '0';
			j++;
		}else{                                  //还有十六进制的 
			q[j] = s[i] - 'A' + 10;
			j++;
		} 
	}
}

//高精加 
void add(int a[], int b[],int l,int n){             
	for(int i = 1; i <= l; i++){
		a[i] += b[i];
		a[i + 1] += a[i] / n;           //进位 
		a[i] %= n;
	}
	if(a[l + 1] > 0){                   //考虑从最高位进位到最高位的下一位 
    	l++;                            //长度++ 
	}
}

//高精反转数字
void turn(int a[],int w[],int l){
	int j = 0;
	for(int i = l; i >= 1; i--){        //反着存 
		w[j++] = a[i];                  //存到w数组里 
	}
}

//判断是否是回文数
bool f(int a[],int l){
	int ln = l;
	int i = 0;                          //从两边判断
	int j = l;
	bool flag=1;
	while(ln--){
		if(ln < l / 2){                 //判一半就可以 
			break;
		}
		if(a[i] != a[j-1]){
			flag=0; 
			break;              		//有一位不相等就不是回文数 
		}
		i++;
		j--;
	}
	return flag;
}

