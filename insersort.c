#include<stdio.h>
#define MAX 20
void insertionsort(int A[MAX], int n)
{
int i , j , key;
for (i = 1 ; i < n ; i++)
{
key = A[i];
for ( j = i-1 ; (j >= 0) && (key < A[j]); j--)
A[j+1]	 =  A[j];
A[j+1] = key ;
}
}

void main()
{
int A[MAX] , i, n ;
printf("how many elements  you want to sort?\n");
scanf("%d" , &n);
printf("\nenter the elements into an array:\n");
for (i = 0 ; i < n; i++)
scanf ("%d" , &A[i]);
insertionsort (A, n); /*function call*/
printf("\nelements after sorting: \n");
for (i = 0 ; i < n  ; i++)
printf("%d\t" , A[i] );	









}
