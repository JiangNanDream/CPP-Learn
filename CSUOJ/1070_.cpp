#include <stdio.h>
#include <math.h>


int main(){
	
	const double pi = acos(-1.0);	//用于定义π值

	double x0, y0, z0, x1, y1, z1;
	while(scanf("%lf%lf%lf%lf%lf%lf", &x0, &y0, &z0, &x1, &y1, &z1) != EOF){
		double r, v;
		r = sqrt(pow((x1-x0),2) + pow((y1-y0),2) + pow((z1-z0),2));
		v = 4.0/3.0 * pi * pow(r,3);
		printf("%.3lf %.3lf\n", r, v);
	}
	return 0;
}



/*1070: 球的半径和体积
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
输入球的中心点和球上某一点的坐标，计算球的半径和体积。
输入
输入包含多组测试用例。
对于每一组测试用例，输入球的中心点和球上某一点的坐标，以如下形式输入：x0 y0 z0 x1 y1 z1
输出
对于每组输入，输出球的半径和体积，结果保留三位小数.
样例输入 Copy
0 0 0 1 1 1
样例输出 Copy
1.732 21.766
来源/分类
简单 数学 */