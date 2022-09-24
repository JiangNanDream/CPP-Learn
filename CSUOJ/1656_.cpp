#include <stdio.h>

int main(){
	char s[1000];
	while(scanf("%s", &s) != EOF){
		int i, m=0, n=0;
		char s1[1000], s2[1000];
		for(i=0; i<1000; i++){
			if(s[i]=='\0'){
				s1[m] = '\0';
				s2[n] = '\0';
				break;
			}
			if(s[i]>='A' && s[i]<='Z'){
				s1[m] = s[i];
				m++;
			}
			if(s[i]>='a' && s[i]<='z'){
				s2[n] = s[i];
				n++;
			}
		}
		printf("%s\n%s\n", s1, s2);
	}
	return 0;
}


/*题目描述
输入一个字符串，将其按照字母大小写拆分为两个字符串
输入
多组样例输入，每个输入一行，每行为一个字符串
输出
多组输出，每组两行，s的所有大写字母字符串s1和s的所有小写字母字符串s2
样例输入 Copy
ThisIsATest
样例输出 Copy
TIAT
hissest
来源/分类
简单 入门 */