#include<stdio.h>
int main()
{
    int age ;
    printf("enter your age\n");
    scanf("%d", &age);
    printf("%d you have enterd %d as youir age\n", age);
    if(age>=18)
    {
        printf("you can vote!");

    }
    else{
        printf("you cannot vote!");

    }
    return 0;
}