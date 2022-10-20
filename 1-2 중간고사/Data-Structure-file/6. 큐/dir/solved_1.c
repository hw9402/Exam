// 큐의 기본 연산 코드를 구현하여 제출하시오.
//  큐의 추상 데이터타입(ADT )
// 1)큐의 구조체 정의

// typedef struct {
// 	int front;
// 	int rear;
// 	element data[MAX_Q_SIZE];
// }Queue;

// 2) 큐 기본 구현함수
// void initQueue(Queue* q);
// int isFull(Queue* q);
// int isEmpty(Queue* q);
// void enQueue(Queue* q,element item);
// element deQueue(Queue* q);

// 3) 큐의 포화 및 공백 조건
//    큐의 포화조건 :  rear ==MAX_Q_SIZE-1
//     큐의 공백 조건 : front == rear

// 4)  초기값  및 삽입과 삭제시 포인터 위치
// 초기값: front = rear = -1;
// 삽입 시: rear = rear +1
// 삭제 시 :front = front +1

// 4) 큐의 삽입연산 : rear = rear +1

#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 5
typedef int element;
//Queue 구조체 정의
typedef struct {
	int front;
	int rear;
	element data[MAX_Q_SIZE];
} Queue;
void error(char* message){
	printf("%s\n",message);
	exit(0);//메인함수 종료
}
void initQueue(Queue* q){
	q->front = -1;
	q->rear = -1;
}
int isFull(Queue* q){
	return q->rear == MAX_Q_SIZE-1;
}
int isEmpty(Queue* q){
	return q->rear == q->front;
}
void enQueue(Queue* q,element item){
	if(isFull(q)) {
		error("Queue is Full\n");
	}
	q->rear++;
	q->data[q->rear] = item;
}
element deQueue(Queue* q){
	if(isEmpty(q)) {
		error("Queue is Empty\n");
	}
	q->front++;
	return q->data[q->front];
}
void queuePrint(Queue* q){
	int i;
	for(i=0; i<MAX_Q_SIZE; i++){
		if (i<=q->front || i > q->rear){
			printf(" | ");
		}
		else{
			printf("%d | ",q->data[i]);
		}
	}
	printf("\n");
}
int main() {
	element item = 0;
	Queue q;
	initQueue(&q);
	enQueue(&q,10); queuePrint(&q);
	enQueue(&q,20); queuePrint(&q);
	enQueue(&q,30); queuePrint(&q);
	item = deQueue(&q); queuePrint(&q);
	item = deQueue(&q); queuePrint(&q);
	return 0;
}