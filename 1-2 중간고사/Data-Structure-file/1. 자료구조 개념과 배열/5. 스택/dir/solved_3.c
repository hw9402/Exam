// 스택의 기본함수를 구현하고, 문자열을 입력 받아 거꾸로 출력하도록
// 메인 함수를 작성하여 제출하시오.

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 20
typedef char element;
typedef struct{
   element data[STACK_SIZE];
   int top;
}Stack;
void initStack( Stack *s );
int isFull( Stack *s );
int isEmpty( Stack *s );
void push( Stack *s, element data );
element pop( Stack *s );

int main(){
   int i;
    Stack s;
   char str[20];
   initStack(&s);
   printf("문자열 입력 : ");
   scanf("%s", str);
   for(i=0; str[i]!='\0'; i++) push(&s, str[i]);
   for(i=0; str[i]!='\0'; i++) printf("%c", pop(&s));
   printf("\n");
}

void initStack( Stack *s ){
    s->top=-1;
}
int isFull( Stack *s ){
   return s->top==STACK_SIZE-1;
}
int isEmpty( Stack *s ){
   return s->top==-1;
}
void push( Stack *s, element c ){
   if(isFull(s)){
      printf("Stack is Full\n");
      return;
   }
   //s->top++;
   s->data[++s->top]=c;
}
element pop( Stack *s ){
   element temp;
   if(isEmpty(s)){
      printf("Stack is Empty\n");
      return -1;
   }
   return s->data[s->top--];
}