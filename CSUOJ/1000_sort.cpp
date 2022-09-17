#include <stdio.h>

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int a[n], temp;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i]<a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}

/*题目描述
对若干个整数从小到大排序。
输入
多组样例。每个样例输入包括两行，第一行是一个正整数n（0<n≤100），表示要排序的整数的个数。接下来的第二行输入n个整数x（-106≤n≤106）。
输出
对于每一组样例，按照从小到大输出排序后的结果。每个输出占一行。
样例输入 Copy
3
1 2 2
5
0 -8 7 5 2
样例输出 Copy
1 2 2
-8 0 2 5 7*/