#include <stdio.h>

/*
	These codes show how long the different date types use.
*/
int main()
{
	char ca = 'a';
	short sa = 232;
	int ia = 32768;
	long la = 2147483648;
	long long lla = 1;
	float fa = 1.5;
	double da = 2.33;
	
	printf("\'char\' size is %d type\n", sizeof(ca));
	printf("\'short\' size is %d type\n", sizeof(sa));
	printf("\'int\' size is %d type\n", sizeof(ia));
	printf("\'long\' size is %d type\n", sizeof(la));
	printf("\'long long\' size is %d type\n", sizeof(lla));
	printf("\'float\' size is %d type\n", sizeof(fa));
	printf("\'double\' size is %d type\n", sizeof(da));
}