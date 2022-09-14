#include <stdio.h>

/*
	STEP 1:
	Try to solve a question about a char
	STEP 2:
	To solve for circle
	STEP 3:
	Improve program
*/
int main()
{
	int n;	//read sum of number
	char word;	//to read input
	int number;	//to record number
	bool numState = false;	//to record wheather input number

	scanf("%d", &n);	//to read n
	
	//getchar();	//Fix1
	
	for (;n>0;n--)
	{
		//scanf("%c", &word);	//error: cache ' '
		//scanf("%c", &word);	//Fix1
		//scanf("\t%c", &word);	//Fix2
		scanf(" %c", &word);	//Fix3
		
		if (word>='a'&&word<='z' || word>='A'&&word<='Z')	//to judge word is a letter
		{
			//printf("This is a letter!\n");	//test message
			if (word>='a' && word<='z'){
				word = word - 32;	//a --> A
			}else{
				word = word + 32;	//A --> a
			}
			
			if (numState){	//more letter?
				
				for(;number>0;number--){	//
				printf("%c", word);
				}
				printf("\n");
				numState = false;
				
			}else{
				printf("%c\n", word);	//
			}
		}
		else if (word>='0'&&word<='9')	//word is number?
		{
			//printf("This is a number!\n");	//test message
			number = word - '0';	//calculate number
			numState = true;	//set numState
		}
		else {
		//printf("This isn't a letter or number!\n");	//test message
		printf("special letter!\n");	//
		}
	}
	
}