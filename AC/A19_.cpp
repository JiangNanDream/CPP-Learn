#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", n/3+!!(n%3));
	return 0;
}



/*题目描述
极具北航特色的TD线（too dangerous line）现在开通啦！不知道大家有没有去刷呢？新版的TD每天可以刷3次哦O(∩∩)O
作为勤奋的Coolbreeze猪脚，可是一次都不肯落下呢。假设每学期要刷n次 TD，那么cool_breeze猪脚只需要多少天就可以完成任务呢？

输入
共一组数据，每组一个数字n（1<=n<=1000）

输出
Cool_breeze猪脚需要多少天才可以完成TD任务

输入样例1
4
输出样例1
2
输入样例2
3
输出样例2
1*/