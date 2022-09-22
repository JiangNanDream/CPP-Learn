/*浮点数存在舍入误差。
该程序用于测试不同编译器对浮点数的处理。
*/


#include <stdio.h>
#include <math.h>

main(){
	float a, b;
	int flag1 = 0, flag2 = 0;
	a = 1.0;
	b = 0.0;
	b += 0.1; b += 0.1; b += 0.1; b += 0.1; b += 0.1;
	b += 0.1; b += 0.1; b += 0.1; b += 0.1; b += 0.1;
	if(a-b==0) flag1 = 1;
	if(fabs(a-b)<10e-10) flag2 = 1;
	printf("a = %20.17f; b = %20.17f\n", a, b);
	printf("flag1=%d; flag2=%d\n", flag1, flag2);
	printf("Please click any key to continue...");
	getchar();
}