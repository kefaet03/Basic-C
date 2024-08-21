#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swapping a=%d, b=%d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d, b=%d",a,b); 
    clearerr(temp);
    return 0;
}


#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swapping a=%d, b=%d\n",a,b);
    int c,d;
    c=b;
    d=a;
    printf("After swapping a=%d, b=%d",c,d); 
    return 0;
}