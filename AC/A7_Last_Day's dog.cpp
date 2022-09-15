#include <stdio.h>

int main(){
	int n,m;
	while(scanf("%d", &n) != EOF){
		m = 2*n - 1;
		int p = n-1;
		for(int i=n;i>0;i--){
			for(int i=n-1;i>p;i--){
				printf(" ");
			}
			for(int i=m;i>0;i--){
				printf("#");
			}
			printf("\n");
			m -= 2;
			p--;
		}
	
	}
}



/*题目描述
LastDay要去西安了。
但是LastDay的狗狗被禁止带上火车。 
为了防止饿出狗命来，LastDay 机智的准备了一些狗粮 (#)。
作为强迫症，LastDay决定把狗粮摆放的整齐大方。 比如倒三角形。 Last_Day手残不会摆，是时候你上场了。

输入
输入多组数据。
每组数据只有一行，为一个正整数n（n<=30）。

输出
每组数据输出n行，为n层的倒三角形

输入样例
2
3
输出样例
###
 #
#####
 ###
  #*/