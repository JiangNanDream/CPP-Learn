#include <stdio.h>

int main()
{
	/***
	char word;
        //scanf 输入需用 & 符
	scanf("%c", &word);
	printf("%c", word);
	return 0;
	***/
	
	
	char a, b, c;
	scanf("%c %c %c", &a, &b, &c);
	int i;
	i = a;
	printf("%c %c %c %d", a, b, c, i);
	return 0;

}
