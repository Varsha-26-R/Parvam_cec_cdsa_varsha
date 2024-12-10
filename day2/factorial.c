#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter the number to find factorial:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("factorial of %d :%d",num,fact);
}