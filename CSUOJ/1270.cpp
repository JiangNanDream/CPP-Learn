#include <stdio.h>

int main(){
	char s[200], account[11] = {'m','s','g','-'};
	while(scanf("%s", &s) != EOF){
		int i, state=0;
		for(i=0; i<200; i++){
			if(s[i] == '\0'){
				state = 1;
				break;
			}
			if(!(s[i]>='0' && s[i]<='9')){
				break;
			}
		}
		if(i<6){
			state = 0;
			printf("Wrong Message!\n");
		}
		while(state){
			int j;
			for(j=0; j<6; j++){
				account[j+4] = s[i-6+j];
			}
			printf("%s\n", account);
			state = 0;
		}
	}
}


/*1270: �����˺�
[������ : �ⲿ����]
ʱ������ : 1.000 sec  �ڴ����� : 128 MB

��Ŀ����
lcy����õ���һ��д�����кŵ��б�����������Щ���к�ȥ����һ������Messageϵͳ���˺š�
���������ϵͳ��һ���涨����������кų��ȱ��벻С��6���ұ���Ϊ���֡�
������к��ǺϷ����أ�ϵͳ���᷵������һ��msg-�������к������λ��һ���˺š�
lcy�����ģ���ϣ�����������ܹ����������������⡣


����
�������룬ÿ����������һ���ַ�����������Ҫ��֤�����кš�
���
�����������к��ǺϷ��ģ�������˺ţ��������Wrong Message!
�������� Copy
135155111
456
������� Copy
msg-155111
Wrong Message!
��ʾ
�ַ������Ȳ�����200
��Դ/����
 �� */