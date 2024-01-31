#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,item,s[size];
void push(){
if(top==s[size]-1)
{
printf("stack overflow");
}
else{
printf("element to be inserted");
scanf("%d",&item);
top++;
s[top]=item;
}
}


