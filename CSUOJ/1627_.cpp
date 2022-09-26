#include <stdio.h>

int strlen(char a[]);

int main(){
	char s[100];
	int len;
	scanf("%s", &s);
	len = strlen(s);
	int i,j;
	for(i=0; i<len/2-1; i++){
		for(j=0; j<len/2-1; j++){
			if(s[j] > s[j+1]){
				char temp;
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}	
	}
	for(i=len-len/2-1; i<len-1; i++){
		for(j=len-len/2; j<len-1; j++){
			if(s[j] > s[j+1]){
				char temp;
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}	
	}
	printf("%s", s);
	return 0;
}

int strlen(char a[]){
	int i=0;
	while(a[i] != '\0')
		i++;
	return i;
}



/*题目描述
输入一个长度不超过100个字符的字符串，将字符串中间一分为二，左边部分按字符的ASCII值升序排序，排序后左边部分与右边部分进行交换。如果原字符串长度为奇数，则最中间的字符不参加处理，字符仍放在原位置上。

输入
一个字符串
输出
排序后的字符串
样例输入 Copy
12345
样例输出 Copy
45312
来源/分类
字符串 */