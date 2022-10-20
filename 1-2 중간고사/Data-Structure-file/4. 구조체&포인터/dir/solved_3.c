// 문제                                       
// 희소행렬을   행,열,값으로 저장하고, 전치행렬로 바꾸는 문제를 구조체와 배열을 이용하여 작성하여 제출하시오.

// 입력                                       
// 첫번째 줄에 희소행열의 정보인 항의개수(n), 행의 개수, 열의 개수 가 입력된다.
// 다음 줄부터  n 줄의 행, 열, 값이 입력된다.
// 4 5 5
// 0 1 5
// 1 2 8
// 2 0 3
// 4 2 9

// 출력                                       
// 입력된 희소행렬의 행과열을 바꾼 전치행렬이 출력된다.
// (0, 1, 5)
// (1, 2, 8) 
// (2, 0, 3) 
// (4, 2, 9) 
// ---------------------
// (0, 2, 3)
// (1, 0, 5) 
// (2, 1, 8) 
// (2, 4, 9) 
// ---------------------

// 중간고사 출제 **** 중요 ****
// 희소행렬의 값의 위치(행, 열, 값)를 입력받고, 그걸 전치행렬로 바꾼 후(행과 열의 인덱스를 바꿈)
// 행의 순서대로 정렬(행이 같으면 열, 열이 같으면 값 순서대로) 
#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100
//1. 각항의 원소 구조체 정의
typedef struct {
   int row; 
   int col; 
   int value; 
} element;
//2. 행렬정보의 구조체 정의
typedef struct {
   element data[MAX_TERMS];
   int row; // 행 개수
   int col; // 열 개수
   int term; // 항 개수 
} Smatrix;

Smatrix matrixTrans2(Smatrix a){
  int i,j,bi;//(새로 태어날 배열의 인덱스) //행렬 b에서 현재 저장위치 
  Smatrix b;
  if(a.term<=0) return b;
   b.term = a.term;
   b.col = a.col;
   b.row = a.row;
   bi = 0;
   for(j=0; j<a.term; j++) {
      for(i=0; i<a.term; i++) {
         if(j==a.data[i].col) {
            b.data[bi].col = a.data[i].row;
            b.data[bi].row = a.data[i].col;
            b.data[bi].value = a.data[i].value;
            bi++;
         }
      }
   }
   //희소행렬 (행,열,값)을 전치행렬 (열,행,값) 으로 변경하는 함수 작성
    return b;
}
void matrixPrint(Smatrix a){
    for(int i=0;i<a.term;i++){
        printf("(%d, %d, %d) \n", a.data[i].row,a.data[i].col,a.data[i].value);
    }   
    printf("---------------------\n");
}
int main(void){
    Smatrix m;
    //행렬 정보 항개수,행개수,열개수 입력
    scanf("%d %d %d",&m.term, &m.row,&m.col); // 4,5,5
    for(int i=0;i< m.term;i++) {
       //각 항의 행,열,값 데이터 입력
        scanf("%d %d %d", &m.data[i].row,&m.data[i].col,&m.data[i].value);
    }
    Smatrix r;
    matrixPrint(m);
    r = matrixTrans2(m);
    matrixPrint(r);
    return 0;
}