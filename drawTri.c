#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	for(;i<5;i++){
		int j=0;
		for(;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}