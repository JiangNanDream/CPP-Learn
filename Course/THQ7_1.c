/*7.1 函数 最大公约数 最小公倍数*/
#include "stdio.h"

int highestCommonFactor(int, int);
int leastCommonMultiple(int, int);

void main()
{
	int x, y;
	printf("请输入两个整数：");
	scanf("%d%d", &x, &y);
	printf("最大公约数是：%d", highestCommonFactor(x, y));
	printf("最小公倍数是：%d", leastCommonMultiple(x, y));
}

int highestCommonFactor(int x, int y){
	int n;
	n = x<y ? x : y;
	for(; n>=2; n--){
		if(x%n == 0 && y%n == 0) return n;
	}
	return 1;
}

int leastCommonMultiple(int x, int y){
	int n;
	n = x>y ? x : y;
	while(1){
		if(n%x == 0 && n%y == 0) return n;
		n++;
	}
}