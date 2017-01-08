#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum=0;
    printf("this program sums a series of integers.\n");
    printf("remember to input the 0 to end the input\n");
    printf("please input a series of num:");
    scanf("%d",&n);
    while(n!= 0){
    	sum+=n;
    	scanf("%d",&n);
    }
    printf("the sum is : %d\n", sum);
    system("pause"); 
	return 0;
}
