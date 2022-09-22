/*使用 Switch语句 进行百分制评级*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	char c;
	printf("input score: ");
	scanf("%d", &n);
	if(n>100||n<0) printf("input error!");	//输入错误
	else
	{
		switch(n/10)
		{
			case 10: ;
			case 9:  c = 'A'; break;
			case 8:  c = 'B'; break;
			case 7:  c = 'C'; break;
			case 6:  c = 'D'; break;
			default: c = 'E'; break;
		}
		printf("Your level is: %c", c);
	}
//	getchar();
}