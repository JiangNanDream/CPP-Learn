#include <stdio.h>
#include <string.h>

int main(){
	char s[16];
	char passWord[] = "123456789";
	short count = 0;
	while(1){
		gets(s);
		if(strcmp(s, passWord) != 0){
			count++;
		}else{
			break;
		}
		if(count == 3) return 0;
	}
	printf("欢迎进入主程序");
}