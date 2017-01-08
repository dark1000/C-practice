#include <stdio.h>
#include <stdlib.h>

int main(){
   int a,b,sum;
   printf("请输入矩形的两条边长。\n");
   scanf("%d%d",&a,&b);
   sum=a*b;
   printf("这个矩形的面积是%d\n",sum);
   system("pause");
	return 0;
}
