#include <stdio.h>

int main(){
	char s[10000];
	while(scanf("%s", s) != EOF){
		short u=0, z=0, i=0;
		for(int n=0; n<10000; n++){
			if(s[n] == '\0') break;
			if(!u && !z && !i && s[n]=='u') u = 1;
			if(u && !z && !i && s[n]=='z') z = 1;
			if(u && z && !i && s[n]=='i') i = 1;
		}
		if(u && z && i) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}

/*��Ŀ����
������uzi��˿����uzi������ĸʮ�����У���֪���������ַ�������û�����γ���uzi������ĸ��������Ҫ�������֣�
���硰abucdezfgi���м���У���izu���о�û�С�
����
����������ÿ����������һ�У�ÿ��Ϊһ���ַ���s����ΪСд�ַ������ַ���s����С��10^4��
���
���������yes��,���������no��
�������� Copy
abucdezfgi
uzi
izu
������� Copy
yes
yes
no
��Դ/����
�� ���� */