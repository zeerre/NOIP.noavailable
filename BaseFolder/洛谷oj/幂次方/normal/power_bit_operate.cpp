//*************************************************************************
//* File Name: power_bit_operate.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-10  11-01-41====
//*************************************************************************

#include<cstdio>
using namespace std;
void ASCII(long long m){
	long long i=0,k=m,u=0;
    int h[50000];
	while(k){                       //位运算实现；
		if(k&1)h[++u]=i;
		//h[++u]相当于++u，h[u]…… 
		k>>=1;
		i++;
	}
	//据上面写的，u从1开始，无论如何一定会有输出； 
	while(u){                       //u为真 
		if(h[u]<3){                 //具体括号判断；
			if(h[u]==1 && u-1!=0)  printf("2+");
			else if(h[u]==1)	   printf("2");
			
			if((h[u]==0||h[u]==2)&&(u-1!=0))  printf("2(%d)+",h[u]);
			else if(h[u]==0||h[u]==2)		  printf("2(%d)",h[u]);	
			--u;                    //搜索下一个；
		}
		else{
			printf("2(");
			ASCII(h[u--]);
			//相当于h[u],--u; 
			//这里千万不能写成 h[--u],否则你会3个WA两个MLE； 
			if(u!=0)printf(")+");   //由于u进行了自减，此时的u已经是下一个数了； 
			else printf(")");       //判断括号；
		}	
	}
}
int main(){
	long long n;
	scanf("%lld",&n);
	ASCII(n);
    printf("\n");
	return 0;
}