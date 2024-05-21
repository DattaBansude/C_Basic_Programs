#include<stdio.h>
#define MAX 20
void Bubblesort(int A[MAX], int n);
void display(int A[MAX], int n );
void main()
{
    int A[MAX], n , i ;
    printf("enter the number of elements in the array:");
    scanf("%d", &n);
    printf("\nenter the elements:\n\n");
    for(int i=0 ; i<n ; i++)
    {
        printf(" array[%d] = ", i );
        scanf("%d", & A[i]);

    }
    Bubblesort(A, n);
    display(A, n);
}
/*bubble sort function */
void Bubblesort(int A[MAX], int n )
{
    int i , j , temp;
    for(i=0 ; i<n ; i++)
 {
     for(j=0 ; j<n-i-1 ; j++)
     {
         if(A[j] > A[j + 1])
         {
             temp = A[j];
             A[j] = A[j+1];
             A[j+1] = temp; /* swap */
         }
     }
 }   
}
/*display the sorted list */
void display(int A[MAX], int n )
{
    for(int i = 0 ; i<n ; i++)
    printf ("%d\n", A[i]);
}