//*************************************************************************
//* File Name: main.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-11  15-31-24====
//*************************************************************************

#include <bits/stdc++.h> 
#include <cstring>
#include "palind.cpp"

#define N 100001
using namespace std;

int main(){                                //仅对十进制数有效
    int n;
    char s[N];
    int q[N], l, w[N], ans=0;
    cin>>n>>s;
    l=strlen(s);
    init_arr(q,s,l);
    while(!f(q,l)){                         //是否回文 
		turn(q,w,l);                        
		add(q,w,l,n);                       //加上回文数 
		ans++;
		if(ans > 30){                       //步数大于三十就退出 
			break;
		}
	}
	if(ans > 30){
		printf("Impossible!\n");            //叹号注意 
	}else{
		printf("STEP=%d\n", ans);
	}
    return 0;
}
