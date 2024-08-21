#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=52;
    if (a%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    
    printf("Marker");
    return 0;
}



#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
 
    return 0;
}