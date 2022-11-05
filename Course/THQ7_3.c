/* 通过函数判断是否为质数 */
#include "stdio.h"

int primeNumber(int);

void main()
{
	int x;
	printf("请输入一个整数：");
	scanf("%d", &x);
	primeNumber(x);
}

int primeNumber(int x){
	int i;
	for(i=2; i<x; i++){
		if(x%i == 0){
			printf("不是质数");
			return 0;
		}
	}
	printf("是质数");
	return 1;
}