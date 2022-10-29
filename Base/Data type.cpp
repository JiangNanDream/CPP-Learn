#include <stdio.h>

/*
	These codes show how long the different date types use.
	int's range is -32768 ~ 32767  //This's a old stand.
	unsigned int's range is 0 ~ 65535  //This's a old stand.
	
	
	10进制: 10 35
	8进制: 012 043
	16进制: 0x10 0x23
*/
int main()
{
        //字符型使用单引号'a',"a"实际存储为'a','\0'
	char ca = 'a';
	short sa = 232;
	int ia = 32767;
	long la = 2147483648;
	long long lla = 1;
	float fa = 1.5;
	double da = 2.33;
	
	ia = 1000000;
	printf("%d\n", ia);
	printf("\'char\'\t size is %d type\n", sizeof(ca));
	printf("\'short\'\t size is %d type\n", sizeof(sa));
	printf("\'int\'\t size is %d type\n", sizeof(ia));
	printf("\'long\'\t size is %d type\n", sizeof(la));
	printf("\'long long\'\t size is %d type\n", sizeof(lla));
	printf("\'float\'\t size is %d type\n", sizeof(fa));
	printf("\'double\'\t size is %d type\n", sizeof(da));
	
	//I don't know what is different about int and long int.
	//It seems no difference.
	printf("\'int\'\t size is %d type\n", sizeof(int));
	printf("\'long int\'\t size is %d type\n", sizeof(long int));
	printf("\'8L\'\t size is %d type\n", sizeof(8L));
	
}
