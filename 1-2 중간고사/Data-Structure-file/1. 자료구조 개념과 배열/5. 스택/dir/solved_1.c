// 1. 스택을  스택을 구조체 변수로 정의하여 구현하는 프로그램을 작성하시오.
// 1) 변수 및 구조체 정의
//  typedef int element;    // int를 element자료형으로 재정의

// typedef struct{
//      int  top;
//     element  data[MAX_STACK_SIZE];
// } Stack;

// 2) 구조체 변수 선언 : Stack  s;

// 3) 구현함수
// void initStack(); //스택 top 변수 초기화
// init isEmpty(); //스택이 비어있는지 true,false로 return
// init  isFull(); //스택이 가득찼는지 true,false로 return
// void push(element item); //스택에 데이터 삽입
// element pop(); // //스택 데이터 반환후 삭제
// element peek();  //스택 데이터 반환

// 3) 스택의 공백 조건 :   top == -1
// 4) 스택의 오버플로 조건: top == stack_size-1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100
typedef int element; //int를 element로 재정의
typedef struct {
	int data[MAX_STACK_SIZE];
	int top;
}Stack;
//전역변수로 스택 선언
Stack a;

bool isEmpty(){
	if(a.top == -1) return 1;
	else return 0;
}
bool isFull(){
	if(a.top == MAX_STACK_SIZE - 1) return 1;
	else return 0;
}	 
void push(element item){
	a.top += 1;
	a.data[a.top] = item;
}
element pop(){ //반환후 제거
	element temp = a.data[a.top];
	a.top--;
	return temp;
}
element peek(){//반환만
	element temp = a.data[a.top];
	return temp;
}
int main(){
	a.top = -1;
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n",peek());
	printf("%d\n",pop());
	return 0;

}