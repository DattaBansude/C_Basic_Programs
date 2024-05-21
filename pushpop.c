/* "ststack.h "*/  /*header file*/
#define MAX 10
struct stack 

{
 int a[MAX];
int top ;
};

void inits(struct stack*);
void pushs(struct stack*, int );
int pops (struct stack*);
int isfulls(struct stack*);
int isemptys(struct stack*);
peeks(struct stack*);
//program//
#include <stdio.h>
#include "ststack.h"
int main(void)
{
  struct stack s ;
int opt , x , n, e;
inits (&s);
{

printf 

