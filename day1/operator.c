#include<stdio.h>
int main(){
    int op1,op2;
    //op1=20;
    //op2=10;
    printf("enter two values:");
    scanf("%d",&op1);
    scanf("%d",&op2);
    int sum,diff,prod,quo,rem;
    sum=op1+op2;
    diff=op1-op2;
    prod=op1*op2;
    quo=op1/op2;
    rem=op1%op2;
    printf("sum of %d and %d:%d\n",op1,op2,sum);
    printf("difference %d and %d:%d\n",op1,op2,diff);
    printf("product of %d and %d:%d\n",op1,op2,prod);
    printf("quotient of %d and %d:%d\n",op1,op2,quo);
    printf("remainder %d and %d:%d\n",op1,op2,rem);
}