#include <stdio.h>

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		if(n>100) printf("wrong\n");
		else if(n>=90) printf("A\n");
		else if(n>=80) printf("B\n");
		else if(n>=70) printf("C\n");
		else if(n>=60) printf("D\n");
		else if(n>=0) printf("E\n");
		else printf("wrong\n");
	}
	return 0;
}




/*题目描述
面对这么多成绩，助教很是头疼呢[悲伤]。好在宋老师说只要给成绩分级就行啦！那么，就由你来帮帮助教吧O(∩_∩)O
90<=X<=100 A
80<=X<90 B
70<=X<80 C
60<=X<70 D
X<60 E
对于那些不合法的成绩，输出wrong就可以啦！（不合法是指低于0分或者高于100分）

输入
多组输入输出
每组一行，为成绩n

输出
成绩对应的等级或者wrong

输入样例
90
80
70
60
50
-1

输出样例
A  
B
C
D
E
wrong*/