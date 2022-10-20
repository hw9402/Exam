// [문제해결 06-02]  큐 구조체 포인터를 사용하여  큐를 구현하는 코드를 완성하시오.

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

#include <stdio.h>
#include <stdlib.h>
typedef int element ;
typedef struct {
	element* data; // data[20]
	int front;
	int rear;
	int size;
}Queue;
Queue *initQueue( int n );
int isFull( Queue *q );
void enQueue( Queue *q, element data );
int isEmpty( Queue *q );
element deQueue( Queue *q );
void destroyQueue( Queue * q );
void printAll( Queue *q );
int main() {
	Queue *q;
	element data;
	q = initQueue( 5 ); 
	enQueue( q, 10 ) ;	printAll( q );
	enQueue( q, 20 ) ;	printAll( q );
	enQueue( q, 30 ) ;	printAll( q );
	enQueue( q, 40 ) ;	printAll( q );
	enQueue( q, 50 ) ;	printAll( q );
	data = deQueue( q );	printAll( q );
	enQueue( q, 60 ) ; 	printAll( q );
	
	destroyQueue( q );
	return 0;
}
Queue* initQueue( int n ){
	Queue *temp = (Queue *) malloc( sizeof(Queue) );
	temp -> size = n; // n을 크기로 하는 큐
	temp -> rear = -1;
	temp -> front = -1;
	temp -> data = (element*)malloc(sizeof(element)*n); // 크기 n 을 가지는 동적 배열 생성
	return temp;
}
int isFull( Queue *q ){
	// 큐가 가득 차 있다면 rear 은 어떤 상태일까?
	return q->rear == q->size-1;
}
void enQueue( Queue *q, element data ){
	 // 가득 차 있다면 "Queue is full"이라고 출력
	if(isFull(q)) printf("Queue is full\n");
	 // 아니면 rear에 data 삽입
	else {
		q->rear++;
		q->data[q->rear] = data;
	}
}
int isEmpty( Queue *q ){
	// 큐가 비어 있따면 rear과 front 는 어떤 상태일까?
	return q->rear == q->front;
}
element deQueue( Queue *q ){
	// 비어 있다면 "Queue is empty" 출력하고 0 리턴
	if(isEmpty(q)) {
		printf("Queue is empty");
		return 0;
	}
  // 아니면 front위치의 데이터 리턴
	else {
		q->front++;
		return q->data[q->front];
	}
}
void printAll( Queue *q ){
	int i;
	// 0 부터 배열크기-1 에서  front+1 ~rear사이의 데이터만 출력
	for(i=0; i<q->size; i++) {
		if(i<=q->front || i>q->rear) {
			printf(" | ");
		}
		else {
			printf("%d | ", q->data[i]);
		}
	}
	printf("\n");
}

void destroyQueue( Queue * q ){
	// data 동적 메모리 해제
	free(q->data);
	// q 동적 메모리 해제
	free(q);
}