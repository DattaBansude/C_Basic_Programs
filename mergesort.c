#include<stdio.h>
void dip();
void mergesort( int , int , int );
void msortdiv(int , int );
int a[50], n ;
void main()
{
    int i ;
    printf("\nEnter the n value :");
    scanf("%d ", &n);
    printf("\nEnter elements for an array :");
    for ( i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("\nBefore sorting the elements are:\n");

    for(i=0; i<n ; i++)
          printf("%d\t", a[i]);
    msortdi(0,n-1);
    printf("\nAfter sorting the elements are :\n");
    for(i=0; i<n; i++)
          printf("%d\t", a[i]);
    }
    void mergesort(int low , int mid , int high)
    {
        int t[50], i, j, k;
        i=low;
        j=mid+1;
        k=low;

        while((i<=mid) && (j<=high))
        {
            if(a[i]>=a[j])
              t[k++]=a[j++];

              else t[k++]=a[i++];
        }
    }
    
