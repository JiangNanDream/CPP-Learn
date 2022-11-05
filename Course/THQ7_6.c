/* 两个字符串连接 */
#include "stdio.h"

void addString(char [], char []);

void main()
{
    char s1[1000], s2[100];
    gets(s1);
    gets(s2);
    strcat(s1, s2);
    puts(s1);
}

void addString(char s1[1000], char s2[100]){
	strcat(s1, s2);
}