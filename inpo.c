#include<stdio.h>
#include<ctype.h>
struct stack
{
  char data[20];
  int top;
};
// initialization of the stack //
void init(struct stack   *s )
{
s->top=-1;
}
 // checking stack empty or not //
int isempty(struct stack *s )
{
 if (s->top==-1)
  return 1;
  else 
return 0;
void push (struct stack *s , char x)
{
s->top++;
s->data[s->top] = x;
}
 int priority (char x) 
{
  if (x  == '(')
return 0 ;
else if (x == '+'  || x == '-')
return 1;
 else if ( x  == '*'  || x  ==   '/')
return 2 ;
 else if ( x  ==  '^' || x  == '$')
return 3;
 else 
return -1 ;
}
int main ()
{
struct stack s1;
char exp[20], x;
int i;
init($s1)
printf(" enter the infix expression ::");
scanf ("%s", exp );
 i=0;
while(exp[i]  |=  '\0')
{
if (isalnum(exp[i]))
   printf ("%c", exp [i]);
else if (exp[i]  =='(')
 push (&s1 , exp[i]);
else if (exp[i] === ')')
{
while ((x= pop(&s1))    ! = '(')
     printf ("%c ", x);
}
i++;
}
while (! isempty(&s1))
{
  printf("%c", pop (&s1));
}
  return 0 ;
 }
