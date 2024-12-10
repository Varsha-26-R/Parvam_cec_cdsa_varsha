#include<stdio.h>
int main(){
    int num;
    printf("enter the range to print the number:");
    scanf("%d",&num);
    //for(INTIALIZATION;condition;increment/decrement)
    printf("the evennumber between 0 to %d are as follows:\n:",num);
    for(int i=0;i<=num;i++){
        if(i%2==0){
            printf("%d\n",i);
            }
    }
    printf("the oddnumber between 0 to %d are as follows:\n:",num);
    for(int i=0;i<=num;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }    
}