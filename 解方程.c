#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,deta,x1,x2;
    printf("������ּ�ڽ����� ax^2+bx+c=0������ʽ��һԪ���η���\n");
    printf("//////////////////////////////////////////////////////\n\n");
    printf("�����������\n");
    scanf("%f",&a);
    printf("������һ����\n");
    scanf("%f",&b);
    printf("�����볣����\n");
    scanf("%f",&c);
    deta=b*b-4*a*c;
    
    if(deta<0){
        printf("��������޽⣡\n");
    }
    if(deta==0){
         x1=-b/(2*a);
         x2=x1;
        printf("���̵������� x1=%f, x2=%f\n",x1,x2);
    }
    if(deta>0){
       x1=(-b+sqrt(deta))/(2*a);
       x2=(-b-sqrt(deta))/(2*a);
       printf("���̵������� x1=%f, x2=%f\n",x1,x2);
    }
    system("pause");
	return 0;
}
