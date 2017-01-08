#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,deta,x1,x2;
    printf("本程序旨在解诸如 ax^2+bx+c=0这种形式的一元二次方程\n");
    printf("//////////////////////////////////////////////////////\n\n");
    printf("请输入二次项\n");
    scanf("%f",&a);
    printf("请输入一次项\n");
    scanf("%f",&b);
    printf("请输入常数项\n");
    scanf("%f",&c);
    deta=b*b-4*a*c;
    
    if(deta<0){
        printf("这个方程无解！\n");
    }
    if(deta==0){
         x1=-b/(2*a);
         x2=x1;
        printf("方程的两个解 x1=%f, x2=%f\n",x1,x2);
    }
    if(deta>0){
       x1=(-b+sqrt(deta))/(2*a);
       x2=(-b-sqrt(deta))/(2*a);
       printf("方程的两个解 x1=%f, x2=%f\n",x1,x2);
    }
    system("pause");
	return 0;
}
