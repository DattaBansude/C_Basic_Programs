#include <stdio.h>
int main(){

    int a[10], key, n, position;
    printf("Input no. of element in Array\n");
    scanf("%d",&n);
    printf("Enter %d number\n",n);
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("Enter no. to search");
    scanf("%d",&key);
    int linear_search(int a[],int n,int key){

    int i=0;
    a[n]=key;
    while (a[i]!=key)
    {
        i++;
    }
    return i;
    }
    position = linear_search(a,n,key);
    printf("result is %d at index %d\n ",key,position);
    
    /*printf("%d",position);
    if(position == -1)
    printf("%d is present at location %d\n",key,position);
    else
    printf("%d is not present at array\n",key);*/

    return 0;
}



