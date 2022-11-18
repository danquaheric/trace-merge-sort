#include<iostream>
using namespace std;

char stack[100];
int top = -1;
int s = 0;
 void push(char x)
{
s[++top]=x;
}

char pop()
{
  if(top==-1)
   return -1;
else
 return s[top--];
}

Int priority(char x)
{
  if(x=='(')
  return 0;
 if(x=='+' ||x=='-')
  return 1;
if(x=='*' || x=='/')
  return 2;
}

main()
{
  char exp[100];
char *e ,x;
  read exp;
 e=exp;
while(*e!='\0')
  {
 if(isalnum(*e))
   cout<<*e;
else if(*e=='(')
  push(*e);
else if(*e==')')
{
   while((x=pop()!='(')
     cout<<x;
}
else
{
 while(priority(s[top])>=priority(*e))
{
   cout<<pop();
  push(*e);
}e++;
while(top!=-1)
{
  cout<<pop();
}

