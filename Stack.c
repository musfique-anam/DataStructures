#include<stdio.h>
#define MAXIMUM 100

int stack[MAXIMUM],top =-1;//stact empty

void push(int value){
    stack[++top]=value;
}

int pop(){
    return stack[top--];
}

int main(){
    push(50);
    push(40);
    push(30);
    push(20);
    push(10);

    printf("Popped %d\n",pop());
    return 0;
}