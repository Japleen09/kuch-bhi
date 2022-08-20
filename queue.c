#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int arr[SIZE];
void enqueue();
void dequeue();
void display();
void peek();
int rear=-1;
int front=-1;
int main(){
int ch;
while(1){
printf("\n 1.Enqueue\n");
printf("\n 2.Dequeue\n");
printf("\n 3.Display\n");
printf("\n 4.Peek\n");
printf("\n 5.Exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch){
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
case 5:
peek();
break;
case 6:
exit(0);
default:
printf("Invalid Choice");}
}
}
void enqueue(){
int new;
if(rear==-SIZE-1){
printf("queue overflow");
}
else{
if(front==-1)
front=0;
printf("Enter the Element:");
scanf("%d",&new);
rear=rear+1;
arr[front]=new;}
}
void dequeue(){
if(front==-1 || front>rear)
{
printf("queue underflow");
return;}
else
printf("Element deleted:%d\n",arr[front]);
front=front+1;}
void display(){
int i;
if(front==-1)
   printf("queue underflow");
   else
    printf("queue:\n");
   for(i=front;i<=rear;i++){
    printf("%d",arr[i]);}
    printf("\n");
   }
void peek(){
if(front==-1){
printf("queue underflow");
return;}
printf("%d",arr[front]);}
