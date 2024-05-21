#include<stdio.h>
#include<stdlib.h>
struct node

{
int data;
struct node *next;
};
/* add the elements */
void push (struct node  *top, int item)
{
  struct node *p=NULL;
p = (struct node *)malloc(sizeof(struct node ));

if (p==NULL)
  printf("memory allocation failed \n");
  else

{
  p->data=item;
p->next=top;
top=p;
}
}
/*pop item for the stack */
  int pop(struct node *top)
{

struct node *p=NULL;
int x;
if(top==NULL)
{
printf("stack is empty\n");
return -1;

}
p=top;
x=top->data;
top=top->next;
free(p);
return x;
}

void main()

{
 p = (struct node *)malloc(sizeof(struct node ));

struct node *top=NULL;
push(top,15);
push(top,10);
printf("%d\n", pop(top));
push(top,20);
printf("%d\n", pop(top));
printf("%d\n", pop (top));
pop(top);
}
