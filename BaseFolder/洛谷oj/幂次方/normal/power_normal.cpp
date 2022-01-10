//*************************************************************************
//* File Name: power.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-01-10  11-00-29====
//*************************************************************************

#include<cstdio>
using namespace std;
int n;
void power_nor(int x){
	if(n!=0){
		int p=1,q=0;
		printf("2");
		//每一次搜索都要输出2 
		//如果是1次幂就没必要写2(1)，后面会说; 
		while(x>=p){
			++q; 
			p*=2;	
		}
		--q;            //计算幂，由于这里会多算一次，所以计数器q-1; 
		if(q==0 || q==2)    
            printf("(%d)",q);
		//各种括号的判断
        if(q>=3){
			printf("("); 
			power_nor(q);
			printf(")");
		}
		x-=p/2;         //上面计数器就是多算了一次，因此p也多乘了一个2; 
		if(x){          //输入的数x为真（最后分解完就成0了，变成假），输出"+"; 
			printf("+");
            power_nor(x);
		}
	}
}
int main(){
	scanf("%d",&n);
	power_nor(n);
    printf("\n");
	return 0;	
} 
