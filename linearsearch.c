#include<stdio.h>
int linear_search(int[], int, int);
int main()
{
int a[10], key ,c,n, position,i;
printf("input number of elements of array\n");
scanf("%d" , &n);
printf("Enter %d number\n", n );
for(i = 0 ; i<n; i++)
  scanf("%d", &a[i]);
printf("Enter number to search\n");
scanf("%d", &key );
position = linear_search(a, n, key);
 if (position ==  -1)
  printf("%d is not present in array.\n" , key);
else
 printf ("%d is present at location %d.\n", key , position+1);
  return 0;
}
int linear_search(int a[], int n , int key )
{
int i ;
for (i = 0 ; i < n; i++)
{
if (a[i]  ==  key)
  return i ;
}
  return -1 ;
  }

