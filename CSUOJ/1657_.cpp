#include <stdio.h>

int main(){
	char a[40];
	while(scanf("%s", &a) != EOF){
		int i;
		for(i=0;i<40;i++){
			switch(a[i]){
				case 'e':	a[i] = a[i] - 32; break;
				case 'r':	a[i] = a[i] - 32; break;
				case 'n':	a[i] = a[i] - 32; break;
				case 'M':	a[i] = a[i] + 32; break;
				case 'I':	a[i] = a[i] + 32; break;
				case 'K':	a[i] = a[i] + 32; break;
				case 'A':	a[i] = a[i] + 32; break;
				case 'S':	a[i] = a[i] + 32; break;
			}
		}
		printf("%s\n", a);	
	}
	return 0;
}


/*��Ŀ����
Eren��mikasa֮��ӵ��ǿ�ҵ�����ڶ��ڸ���������һ���ַ�����Ҫ��e��r��n��������ĸ��д��ԭ�����Ǵ�д���򱣳ֲ��䣻��m��i��k��a��s����
����ĸСд��ԭ������Сд���򱣳ֲ��䡣
����
����������ÿ����������һ�У�ÿ��Ϊһ���ַ��������ַ�������С��40��
���
��ָ����ĸ���д�Сдת��֮��Ľ����
�������� Copy
bhFjbhFNdnknjk./]��]��gfjdsfnmv
ErEnJaegerMikasaAckerman
ereMIKAS
EREmikas
������� Copy
bhFjbhFNdNkNjk./]��]��gfjdsfNmv
ERENJaEgERmikasaackERmaN
EREmikas
EREmikas
��Դ/����
���� �� */