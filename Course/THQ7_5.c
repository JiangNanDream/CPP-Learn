/* 字符串倒序函数 */
#include <stdio.h>
#include <string.h>

void fun(char []);

void main()
{
    char s[100];
    printf("Please input a string: ");
    gets(s);
    fun(s);
    puts(s);
}

void fun(char s[]){
	char st[100];
	int i, t;
	strcpy(st, s);
	t = strlen(s)-1;
	for(i=0; st[i] != '\0'; i++){
		s[t] = st[i];
		t--;
	}
}