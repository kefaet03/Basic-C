#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year = 2002;
    if ((year%100!=0 && year%4==0) || year%400==0)
    {
        printf("%d is a Leap year",year);
    }else
    {
        printf("NOT leap yaer");
    }
    return 0;
}
