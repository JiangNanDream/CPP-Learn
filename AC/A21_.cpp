#include <stdio.h>

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		if(n>100) printf("wrong\n");
		else if(n>=90) printf("A\n");
		else if(n>=80) printf("B\n");
		else if(n>=70) printf("C\n");
		else if(n>=60) printf("D\n");
		else if(n>=0) printf("E\n");
		else printf("wrong\n");
	}
	return 0;
}




/*��Ŀ����
�����ô��ɼ������̺���ͷ����[����]����������ʦ˵ֻҪ���ɼ��ּ�����������ô����������������̰�O(��_��)O
90<=X<=100 A
80<=X<90 B
70<=X<80 C
60<=X<70 D
X<60 E
������Щ���Ϸ��ĳɼ������wrong�Ϳ������������Ϸ���ָ����0�ֻ��߸���100�֣�

����
�����������
ÿ��һ�У�Ϊ�ɼ�n

���
�ɼ���Ӧ�ĵȼ�����wrong

��������
90
80
70
60
50
-1

�������
A  
B
C
D
E
wrong*/