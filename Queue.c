#include<stdio.h>
#define MAX 100

int queue[MAX],front = 0, rear =0;

void enqueue(int value){
    queue[rear++]=value;
}

int dequeue(){
    return queue[front++];
}

int main(){
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);

    printf("Dequeued number : %d", dequeue());

    return 0;
}