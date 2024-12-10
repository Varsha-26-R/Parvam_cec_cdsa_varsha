#include<stdio.h>
int main(){
    int row,collumn;
    printf("enter the number of rows and collumn:");
    scanf("%d %d",&row,&collumn);
    for(int i=0;i<row;i++){
        for(int j=0;j<collumn;j++){
            printf("*\t");
        }
        printf("\n");
    }
}