#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 5 //Maximum number of elements that can be stored
int top= -1 , stack[MAX];
void push ();
void pop();
void display();
int main()
{
    int ch ;
    setbuf(stdout, NULL); // turn off buffering of stdout
    printf("\n*** stack Menu ***");
    printf("\n1.push\n2.pop\n3.Display\n4.Exit");

    while(1)  //infinite loop

    {
        printf("\nEnter your choice(1-4):");
        scanf ("%d" , &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
             pop();
             break;
        case 3 :
             display();
             break;
        case 4 :
              exit(0);


        default:
               printf ("\nWrong Choice! !");
            
        }
}
return 0 ;
}
void push()
{
     int val;

     if (top==MAX-1)
        printf("\nstack is full!!");        
     
     else
     {
         printf("\nEnter element to push :");
         scanf("%d", &val);
         top=top+1;
         stack[top]=val;  //element inserted in stack at top position
     }
     
}
void pop()
{
    if (top==-1)
    printf("\nstack is Empty!!");
    else
    {
        printf("\nDeleted element is %d", stack[top]); //delete top element
        top=top-1;
    }
    
}
void display()
{
     int i ;
     if (top==-1)
       printf("\nstack is Empty !!");
       else
     {
         printf("\n**** Elements in stack*****,\n");
         for(i=top ; i>=0 ; i--)
          printf("%d\n", stack[i]);
     }
     
}