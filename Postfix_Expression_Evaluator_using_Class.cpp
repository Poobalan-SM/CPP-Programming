#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stack[50];
char postfix[50],infix[50];
int size=-1;
void push(int c)
{
   if(size==49)
   {
      printf("stack overflow!!!\n");
   }
   size++;
   stack[size]=c;
}
int pop()
{
   int c;
      if(size==-1)
      {
         printf("stack underflow!!!\n");
      }
   c=stack[size];
   size=size-1;
   return c;
}
void evaluate()
{
   int a,b,c;
   int i;
   for(i=0;i<strlen(postfix);i++);
   {
      if(postfix[i]>='0' && postfix[i]<='9')
         push(postfix[i]-'0');
      else
      {
         a=pop();
         b=pop();
         switch(postfix[i])
         {
            case '+':
               push(a+b);
               break;
            case '-':
               push(b-a);
               break;
            case '*':
               push(b*a);
               break;
            case '/':
               push(b/a);
               break;
            case '^':
               c=pow(b,a);
            	push(c);
               break;
         }
      }
   }
}
int main()
{
   int a;
   printf("enter the postfix expression: ");
   scanf("%s",&postfix);
   evaluate();
   a=pop();
   printf("\nthe evaluated value is %d",a);
   return 0;
}
