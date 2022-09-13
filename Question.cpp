#include <stdio.h>

/*
	STEP 1:
	Try to solve a question about a char
	
*/
int main()
{
	char word;	//to read input
	bool numState;	//to record wheather input number
	
	scanf("%c", &word);
	if (word>='a'&&word<='z'||word>='A'&&word<='Z')	//to judge word is a letter
	{
		printf("This is a letter!");	//test message
	}
	else if (word>='0'&&word<='9')
	{
		printf("This is a number!");	//test message
	}
	else 
	printf("This isn't a letter or number!");	//test message
	
}