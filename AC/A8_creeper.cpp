#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[8];
		for(int i=0;i<8;i++){
			scanf("%d",&a[i]);
		}
		printf("%d\n", (a[0]*a[2])/a[1] + (a[3]*a[6]*a[7])/(a[4]*a[5]));	
	}
	return 0;	
}


/*题目描述
creeper学妹有一天拿来一个表达式a/bc+d/e/fg*h，然后在纸上一堆数字让Lawliet做，每一组不超过1秒。Lawliet表示瞬间被秒杀了- -#所以推倒creeper学妹的任务只能交给大家来完成了。

输入
多组数据，第一行一个数T，表示有T组数据。(1<T<1000)
接下来T行，每行8个数a,b,c,d,e,f,g,h（0<=a,b,c,d,e,f,g,h<=999999999,b,e,f均不为0)表示一组数据。
保证a/bc、d/e/fg*h与最终结果均为整数且在int范围内。

输出
每组数据输出一行，为最终计算结果。

输入样例
1
6 2 3 9 3 1 6 2

输出样例
45

Hint
此题禁用float和double
GG说long double也不能忍！！！
数据可能比较弱。 整个式子其实就是(a×c)/b+(d×g×h)/(e×f)= =*/