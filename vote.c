#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("A voter");
    }
    else
    {
        printf("Not a voter");
    }
    
    
    return 0;
}
