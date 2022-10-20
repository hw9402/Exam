// 평균을 구할 때 극단값( 최고점/최저점 )을 빼고 계산한 산술 평균을 
// "절사평균"이라 부른다.

// 피겨 스케이팅, 싱크로나이즈드 스위밍, 리듬체조 등 예술적 가치가 높은
// 스포츠 종목에서 판정단이 점수를 내릴 때 최상위, 최하위 판정자 1명의 점수를
// 삭제하고 나머지 판정단의 점수로 평균을 내는데 활용된다. 

// 예를 들어 A 선수에 대해 5명의 심판이 점수를 내렸다면
// 10 7 5 4 6 ==>  (7 + 5 + 6) / 3  = 6 점 으로 계산하는 방식이다.

// 4명 선수에 대해서 5명의 심판이 점수를 주었을 때,
// 각 선수에 대해 점수를 계산하여 출력하는 프로그램을 작성하라.

// 단, 점수 데이터는 난수 함수를 이용하여 생성해하라.( 10~1 ) 

// 난수 생성 방법

// - stdlib.h 필요

// - rand() 함수 : rand 함수의 값은 0 ~ 32767

// - 질문 ? rand 함수를 이용히 1~10 값을 만들려면 어떤 연산이 필요할까?

#include <stdio.h>
#include <stdlib.h>

void genRandom( int a[][5], int r );
void outputArray( int a[][5], int r);
float averageScore( int *row, int size );
int main() {
   int score[4][5], i ;
   genRandom( score, 4 );
   outputArray( score, 4 );
   
   for( i = 0 ; i < 4 ; i ++ )
      printf("선수 %d : %.2f\n", i+1, averageScore( score[i], 5) );
   
   return 0;
} 
void genRandom( int a[][5], int r ){
   int i, j;
   for( i = 0 ; i < r ; i ++ )
      for( j = 0 ; j < 5 ; j ++ )
         a[i][j] = rand() % 10 + 1;  // 이 부분에 rand 함수를 이용해 1~10 정수 생성
}
void outputArray( int a[][5], int r){
   int i, j;
   for( i = 0 ; i < r ; i ++ ,puts("")) // a배열의 r행 5열의 데이터 출력
      for( j = 0 ; j < 5 ; j ++ )
         printf("%d",a[i][j]);
}
float averageScore( int *row, int size ){
   // 선수 한명의 점수를 입력 받아 절사 평균을 구하여 출력
   int max = 0, min = 0;
   float sum = 0;
   for(int i=0;i<size;i++){
      sum +=*(row+i);
      if(row[max] < row[i]) min = i;
      else if(row[min] > row[i])min = i;
   }
   return (sum - row[max] -row[min]) / size - 2;
}