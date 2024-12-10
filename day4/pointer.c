#include<stdio.h>
int main(){
    int num=20;
    printf("the values of the number:%d\n",num);
    printf("the address of the number %d:%p\n",num,&num);
    int*ptr=&num;
    printf("the address of pointer:%p\n",ptr);
    printf("the values of pointer :%d\n",*ptr);
    *ptr=30;
    printf("the updated value of a number:%d\n",num);
}