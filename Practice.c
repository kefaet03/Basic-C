#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    printf("What do you want?\n1.Summation\n2.Subtraction\n3.Multiplication\n4.Division\n");
    int choose;
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("The summation is %d",a+b);
    }else if (choose==2)
    {
        printf("The subtraciton is %d",a-b);
    }else if(choose==3){
        printf("The multiplication is %d",a*b);
    }else if(choose == 4)
    {
        printf("The division is %f",a/(b*1.0));
    }
    return 0;
}
