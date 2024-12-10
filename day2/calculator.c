#include<stdio.h>
int main(){
    char operator;
    float op1,op2,result;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter any two number:");
    scanf("%f %f",&op1,&op2);
    switch (operator)
    {
    case'+':
        result=op1+op2;
        printf("sum of %f & %f:%f",op1,op2,result);
        break;
    case'-':
        result=op1-op2;
        printf("difference of %f & %f:%f",op1,op2,result);
        break;
    case'*':
        result=op1*op2;
        printf("product of %f & %f:%f",op1,op2,result);
        break;
    case'/':
        result=op1/op2;
        printf("quotient of %f & %f:%f",op1,op2,result);
        break;
    defult:
        printf("invalid input,please try again with proper operation!");
        break;
    }
    return 0;
}