/* Note:Your choice is C IDE */
#include "stdio.h"

void translate(int a[3][3]);

void main()
{
    int a[3][3];
	int i, j;
//输入矩阵
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    	    scanf("%d", &a[i][j]);
    	}
    }
   
//输出原矩阵    
//    for(i=0; i<3; i++){
//    	for(j=0; j<3; j++){
//    	    printf("%d ", a[i][j]);
//    	}
//    	printf("\n");
//    }
    
    translate(a);	//转置
//输出转置矩阵
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    	    printf("%d ", a[i][j]);
    	}
    	printf("\n");
    }
}

void translate(int a[3][3]){
	int i, j, m, n;
	m = 3;
	for(i=0; i<m; i++){
		n = 0;
		for(j=2; j>n; j--){
			int temp;
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
		m--;
	}
}