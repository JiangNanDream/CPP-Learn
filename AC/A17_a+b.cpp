#include <stdio.h>

int main(){
	int n, a, b;
	scanf("%d", &n);
	while(n--){
		scanf("%d%d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}


/*��Ŀ����
���� A+B

����
��һ����Ϊ��������n

������n�У�ÿ��2������A, B����֤A, B, A+B��int��Χ�ڣ�

���
����ÿ�����ݣ����һ�У�ΪA+B��ֵ

��������
2
1 2
3 5
�������
3
8*/