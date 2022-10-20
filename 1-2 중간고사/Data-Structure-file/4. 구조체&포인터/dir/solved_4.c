// 5개의 좌표(x,y)를 입력 받아 원점과의 거리가 가장 가까운 좌표를 출력하는 프로그램을 작성하시오.

// 단, 거리가 같은 좌표가 여러 개일 경우 x,y 좌표의 합이 작은 것을 출력하시오.

// 정의해야 할 함수의 프로토 타입은 다음과 같다.

// void inputPoint( POINT *p );         // 한 점의 x, y 좌표 입력

// void outputPoint( POINT *p );      // 한 점의 x, y 좌표 출력

// double distance( POINT *p, POINT *q);     // 두 점의 거리 리턴

#include <stdio.h>
#include <math.h>
#define N 5
typedef struct point{
	int x,  y;
}POINT;
int main() {
	int i,min=10000,mindex;
	double dt;
	POINT p[5];
	POINT origin = { 0, 0};
	// 여기에 코드 추가
	for(i=0;i<5;i++)
		scanf("%d %d",&p[i].x,&p[i].y);
	
	// for(i=0;i<5;i++)
	// 	printf("(%d, %d)\n",p[i].x,p[i].y);
	
	for(i=0;i<5;i++){
		dt = sqrt(pow(p[i].x-0, 2) + pow(p[i].y-0, 2));
		dt = dt + p[i].x + p[i].y;
		if(dt<=min){
			min = dt;
			mindex = i;
		}
		// printf("(%d , %d) = %.2lf \n",p[i].x, p[i].y,dt);
	}
	
	printf("원점에서 가장 가까운 좌표 : (%4d,%5d)",p[mindex].x,p[mindex].y);
	return 0;
}