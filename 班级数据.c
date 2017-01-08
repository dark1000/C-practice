#include <stdio.h>


int sum(int arr[])
{
    int i;
    int sum=0;
    for(i=0;i<10;i++){
        sum+=arr[i];
    }
    return sum;
}

int topest(int arr[])
{
    int i;
    int temp=arr[0];
    for(i=1;i<10;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    int topest;
    topest=temp;
    return topest;
}

int lowest(int arr[])
{
    int i;
    int temp=arr[0];
    for(i=1;i<10;i++){
        if(arr[i]<temp){
            temp=arr[i];
        }
    }
    return temp;
}

float aver(int arr[]){
     int i;
    int sum=0;
    for(i=0;i<10;i++){
        sum+=arr[i];
    }
    return sum/(i+1); 
}

int sortD(int arr[])
{
    int i;
    int j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[j]<arr[j+1]){
                double tmp;
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    
}
    

int main()
{
    int score[10]={67,98,75,63,82,79,81,91,66,84};
    printf("*************班里的原始分数是************\n");
    int i;
    int j;
    for(i=0;i<10;i++){
        if(i!=9){printf("%d,",score[i]);}
        else{printf("%d\n\n\n",score[i]);}
    }
    printf("班里的总分是%d\n",sum(score));
    printf("班里的平均分是%.2f\n",aver(score));
    printf("班里的最高分是%d\n",topest(score));
    printf("班里的最低分是%d\n",lowest(score));
    printf("\n\n");
 
    sortD(score);
    printf("******经过冒泡排序后的降序分数排列***\n");
     for(j=0;j<10;j++){
        if(j!=9){printf("%d,",score[j]);}
        else{printf("%d\n\n",score[j]);}
    }
    getchar();
    return 0;
}
