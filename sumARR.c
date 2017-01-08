#include <stdio.h>
#include <stdlib.h>
int main(){
	int sum=0;
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int *p=arr;
	int i=0;
	for(;i<10;i++){
        sum+=*p;
        p++;
	}
	printf("the sum is %d\n",sum);
	system("pause");
	return 0;
}