#include <stdio.h>

int main(){
	char s[1000];
	while(scanf("%s", &s) != EOF){
		int i, m=0, n=0;
		char s1[1000], s2[1000];
		for(i=0; i<1000; i++){
			if(s[i]=='\0'){
				s1[m] = '\0';
				s2[n] = '\0';
				break;
			}
			if(s[i]>='A' && s[i]<='Z'){
				s1[m] = s[i];
				m++;
			}
			if(s[i]>='a' && s[i]<='z'){
				s2[n] = s[i];
				n++;
			}
		}
		printf("%s\n%s\n", s1, s2);
	}
	return 0;
}


/*��Ŀ����
����һ���ַ��������䰴����ĸ��Сд���Ϊ�����ַ���
����
�����������룬ÿ������һ�У�ÿ��Ϊһ���ַ���
���
���������ÿ�����У�s�����д�д��ĸ�ַ���s1��s������Сд��ĸ�ַ���s2
�������� Copy
ThisIsATest
������� Copy
TIAT
hissest
��Դ/����
�� ���� */