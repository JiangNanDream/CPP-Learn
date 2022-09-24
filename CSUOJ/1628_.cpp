#include <stdio.h>

int main(){
	char s[100];
	int i, n=1;
	scanf("%s", &s);
	for(i=0; i<100; i++){
		if(s[i] == '\0') break;
		if(s[i] == s[i+1]){
			n++;
		}else{
			if(n != 1){
				printf("%c%d", s[i], n);
				n = 1;
				continue;
			}
			printf("%c", s[i]);
		}
	}
	return 0;
}


/*题目描述
有一种字符串压缩方式简单易行。那就是，如果有连续很多个相同的字符，就把他们写作：字符+出现次数的形式。你可以假设字符串中只包含大小写英文字母（a至z）。
例如：aaagbbbbaac压缩成a3gb4a2c
现在你也来试试。

注意：字符单个出现的不作改变,只有连续出现多次才有改变。
输入
一个字符串
输出
压缩后的字符串
样例输入 Copy
aaagbbbbaac
样例输出 Copy
a3gb4a2c
来源/分类
字符串 */