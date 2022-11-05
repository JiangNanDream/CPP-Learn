/* 求解一元二次方程 */
#include "stdio.h"
#include "math.h"
void fun1(double, double, double);	//dalter > 0
void fun0(double, double, double);	//dalter = 0
void fun_1(double, double, double);	//dalter < 0

void main()
{
    double a, b, c, d;
    printf("ax^2 + bx + c = 0 请输入a，b，c值\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = sqrt(b*b - 4*a*c);
    if(d<0)	fun_1(a,b,c);
    else if(d==0) fun0(a,b,c);
    else fun1(a, b, c);
}

void fun1(double a, double b, double c){	//dalter > 0
	double x1, x2, d;
	d = sqrt(b*b - 4*a*c);
	x1 = (-b + d) / 2*a;
	x2 = (-b - d) / 2*a;
	printf("x1 = %lf, x2 = %lf", x1, x2);
}
void fun0(double a, double b, double c){		//dalter = 0
	double x;
	x = -b / 2*a;
	printf("x = %lf", x);
}
void fun_1(double a, double b, double c){		//dalter < 0
	printf("虚根");
}