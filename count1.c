#include<stdio.h>

void counting_sort(int[],int,int);
void main()
{
int n,i,k=0,A[15];
clrscr();
printf("\n\n
\t\t\t--------counting sort-------\n\n\n");
printf("enter the number of input:");
scanf("%d",&n);
printf("\n enter the elements to be sorted :\n");
for(i=1;i<=n;i++)
{
scanf("%d",&A[i]);
if(A[i]>k)
{ 
k=A[i];
}
}
counting_sort(A,K,n);
getch();
}
void counting_sort(int A[],int k, int n)
{
int i,j;
int B[15],C[100];
for(i=0;i<=k; i++)
c[i] = 0;
for (j=1; i <= n ; j++)
C[A[j]] = C[A[j]] + 1 ;
for (i = 1 ;  i <= k ; i++)
C[i] = C[i] + C[i-1];
for (j= n ; j>=1; j--)
{
  B[C[A[j]]] = A[j];
  C[A[j]] = C[A[j]] - 1;
}
printf("\t\t\t----sorted array using counting  sort----\n\n\n");
printf ("\nthe sorted array is : ");
for (i=1; i<=n; i++)
{
printf ("\t");
printf ("%d", B[i]);
}}
