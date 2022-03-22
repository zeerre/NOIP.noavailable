//*************************************************************************
//* File Name: power_bit_operate.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com
//* Created And Modified Time: ====2022-01-10  11-01-41====
//*************************************************************************

#include<cstdio>
using namespace std;
void power_bit_oper(long long m){
	long long i=0,k=m,u=0;
    int h[50000];
	while(k){                       //位运算实现；a&1返回值0，1；直到将k->0;
        if(k&1){                    //代码结构要清晰，精简代码不能损失可读性；
            u+=1;                   //此语句块可以合并为 h[++u]=i,可读性丧失；
            h[u]=i;                 //h[u]数组从索引1开始存储。
        }
		k>>=1;                      //这里是移位找到相对因位为1的关键操作；
		i++;
	}
	while(u){                       //u为真代表输入的数m一定大于0；
		if(h[u]<3){                 //具体括号判断；
			if(h[u]==1 && u-1!=0)   //搜索有后续情况；
				printf("2+");
			else if(h[u]==1)        //无后续情况；
				printf("2");
			if((h[u]==0||h[u]==2)&&(u-1!=0))    //此包含h[u]=0,2时两种情况；
				printf("2(%d)+",h[u]);          //有后续情况；
			else if(h[u]==0||h[u]==2)           //五后续情况；
				printf("2(%d)",h[u]);
			--u;                                //继续搜索后续部分；
		}else{
			printf("2(");           //搜索开始部分不变；
			power_bit_oper(h[u--]); //递归实现幂搜索，直到h[u]<3,找到具体幂值;
                                    //这里注意h[u--],自减的作用。
			if(u!=0)
				printf(")+");       //u不等于0，代表还有后续部分，输出")+"链接；
			else
				printf(")");        //u等于0，代表没有后续部分，输出")"结束。
		}
	}
}
int main(){
	long long n;
	scanf("%lld",&n);
	power_bit_oper(n);
    	printf("\n");
	return 0;
}
