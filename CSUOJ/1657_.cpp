#include <stdio.h>

int main(){
	char a[40];
	while(scanf("%s", &a) != EOF){
		int i;
		for(i=0;i<40;i++){
			switch(a[i]){
				case 'e':	a[i] = a[i] - 32; break;
				case 'r':	a[i] = a[i] - 32; break;
				case 'n':	a[i] = a[i] - 32; break;
				case 'M':	a[i] = a[i] + 32; break;
				case 'I':	a[i] = a[i] + 32; break;
				case 'K':	a[i] = a[i] + 32; break;
				case 'A':	a[i] = a[i] + 32; break;
				case 'S':	a[i] = a[i] + 32; break;
			}
		}
		printf("%s\n", a);	
	}
	return 0;
}


/*题目描述
Eren和mikasa之间拥有强烈的羁绊，现在对于给出的任意一个字符串，要求将e，r，n这三个字母大写，原来就是大写的则保持不变；将m，i，k，a，s这五
个字母小写，原来就是小写的则保持不变。
输入
多组样例，每个测试样例一行，每行为一个字符串。（字符串长度小于40）
输出
将指定字母进行大小写转换之后的结果。
样例输入 Copy
bhFjbhFNdnknjk./]’]’gfjdsfnmv
ErEnJaegerMikasaAckerman
ereMIKAS
EREmikas
样例输出 Copy
bhFjbhFNdNkNjk./]’]’gfjdsfNmv
ERENJaEgERmikasaackERmaN
EREmikas
EREmikas
来源/分类
入门 简单 */