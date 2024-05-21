#define MAX 10
struct stack
{
    int a[MAX];
    int top;

};
void inits(struct stack*);
void pushs(struct stack*, int);
int pops(struct stack* );
int isfulls(struct stack*);
int isemptys(struct stack*);
int peeks(struct stack*);
/*program*/
#include<stdio.h>
//#include "ststack.h"//
int main(void)
{
    struct stack s;
    int opt , x, n , e ;
    inits (&s);
    do
    {printf("1.push\n2.pop\n3.peek\n4.is Empty\n5.isfull\n6.Exit\n");
    scanf("%d",&opt );
    switch (opt)

    {
    case 1:
        printf("enter element to push\n");
        scanf("%d",&x);
        pushs(&s,x);

        break;
    
    case 2 :
        e = pops(&s);
        if (e!=0)
        {
            printf("deleted element is %d\n", e);

        }
        else 
        printf("stack is underflow\n");
        break;
    case 3 :
          e=peeks(&s);
          printf("element on top is %d\n",e);
          break;
    case 4 :
        e=isempty(&s);
        if (e==1)
        printf("list is empty\n");
        else 
        printf("list is not empty\n");
        break;
    case 5:
        e = isfulls(&s);
        if(e==1)
        printf("list is full\n");
        else 
        printf("list is not full\n");
        break;

    } 
         
  
   while(opt!=6);
     return 0;
}
  void inits(struct stack *ps)
{
    ps->top=-1;

}
void pushs(struct stack *ps,int x  )
{
    if((isfulls(ps))==1)
    {
        printf("stack overflow\n");
        return ;
    }
    else
    {
        ps->a[++ps->top]=x;
    }
}
int pops(struct stack *ps)
{
    if((isempty(ps))==1)
    return 0 ;
    else
    {
        return ps->a[ps->top--];
    }
}
int peeks(struct stack *ps )
{
    return ps->a[ps->top];
}
int isemptys(struct stack *ps)
{
    if(ps->top==-1)
     return 1;
     else 
       return 0;
}
int isfulls(struct stack *ps )
{
    if(ps->top==MAX-1)
       return 1;
        else 
           return 0;

}
}
