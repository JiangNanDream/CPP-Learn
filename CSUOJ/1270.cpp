#include <stdio.h>

int main(){
	char s[200], account[11] = {'m','s','g','-'};
	while(scanf("%s", &s) != EOF){
		int i, state=0;
		for(i=0; i<200; i++){
			if(s[i] == '\0'){
				state = 1;
				break;
			}
			if(!(s[i]>='0' && s[i]<='9')){
				break;
			}
		}
		if(i<6){
			state = 0;
			printf("Wrong Message!\n");
		}
		while(state){
			int j;
			for(j=0; j<6; j++){
				account[j+4] = s[i-6+j];
			}
			printf("%s\n", account);
			state = 0;
		}
	}
}


/*1270: 申请账号
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
lcy最近得到了一个写满序列号的列表，她想拿这些序列号去申请一个叫做Message系统的账号。
但是呢这个系统有一个规定，申请的序列号长度必须不小于6而且必须为数字。
如果序列号是合法的呢，系统将会返还给你一个msg-加上序列号最后六位的一个账号。
lcy憨憨的，她希望聪明的你能够帮助他解决这个问题。


输入
多组输入，每组输入输入一个字符串，代表需要验证的序列号。
输出
如果是这个序列号是合法的，输出该账号，否则输出Wrong Message!
样例输入 Copy
135155111
456
样例输出 Copy
msg-155111
Wrong Message!
提示
字符串长度不超过200
来源/分类
 简单 */