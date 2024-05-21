#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct stack
{
  int data[MAX];
  int top;

};

int empty (struct stack *ps)
{
  if (ps->top == -1)
    return (1);
  else
    return (0);
}

int full (struct stack *ps)
{
  if (ps->top == MAX - 1)
    return (1);
  else
    return (0);
}

void push (struct stack *ps, int x)
{
  if (full (ps))
    printf ("\n Stack Overflow");
  return ;
}

(ps)->(top) ++;
ps->data[ps->top] = x;

int pop (struct stack *ps)

{
  int x;
  if (empty (ps))
    {
      printf ("\n stack empty");
      exit (0);
    }
  x = ps->data[ps->top];
  (ps->top)--;
  return (x);
}

int stacktop (struct stack *ps)
{
  int x;
  if (empty (ps))
    {
      printf ("\n stack is empty");
      exit (0);
    }
  x = ps->data[ps->top]; 
  return (x);
}

void main ()
{
  struct stack s;
  int num, ch;
  s.top = -1 ;
  while (1)
    {
      printf ("Static implementation\n");
      printf ("1. pop\n");
      printf ("2. push\n");
      printf ("3. stack top\n");
      printf ("4. exit\n");
      scanf ("%d", &ch);

      switch (ch)
	{
	case 1:
	  printf ("Enter one number to insert");
	  scanf ("%d", &num);
	  push (&s, num);
	  break;

	case 2:
	  num = pop (&s);
	  printf ("popped value=%d", num);
	  break;

	case 3:
	  num = stacktop (&s);
	  printf ("stack to value=%d", num);
	  break;

	case 4:
	  exit (0);
	default:
	  printf ("invalid choice");
	}
    }
}