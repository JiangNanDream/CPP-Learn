#include <stdio.h>

int main(){
	char s[10000];
	while(scanf("%s", s) != EOF){
		short u=0, z=0, i=0;
		for(int n=0; n<10000; n++){
			if(s[n] == '\0') break;
			if(!u && !z && !i && s[n]=='u') u = 1;
			if(u && !z && !i && s[n]=='z') z = 1;
			if(u && z && !i && s[n]=='i') i = 1;
		}
		if(u && z && i) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}

/*题目描述
题主是uzi粉丝，对uzi三个字母十分敏感，想知道给定的字符串里有没有依次出现uzi三个字母。（不需要连续出现）
比如“abucdezfgi”中间就有，“izu”中就没有。
输入
多组样例，每个测试样例一行，每行为一个字符串s，均为小写字符。（字符串s长度小于10^4）
输出
有则输出“yes”,无则输出“no”
样例输入 Copy
abucdezfgi
uzi
izu
样例输出 Copy
yes
yes
no
来源/分类
简单 入门 */