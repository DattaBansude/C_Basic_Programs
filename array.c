#include<stdio.h>
void main()
{
    int a[10], i ;
    for ( i = 0; i <= 9; i++)
    {
printf (" enter the 10 integer ");
scanf("%d\n" , &a[i]);

}
printf("\n list");
for ( i = 0; i <= 9; i++)
{
    printf("%d\n" , a[i]);

}

    

}
