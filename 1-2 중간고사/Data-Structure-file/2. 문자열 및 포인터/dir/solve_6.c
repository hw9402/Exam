// 재귀함수를 이용하여 서식 지정자를 이용하여 패턴을 반복하면서 원하는 모양을 만들 수 있다. 

// 재귀함수와  문자열 배열을 이용하여 n이 입력되면 1~n줄의 *삼각형 모양을
// 출력예시와 같이 출력해보자. 

// 금지키워드: for, while

// [생각해보기] 사각형의 문자열 출력 부분을 로 수정해도 결과는 같다.

#include <stdio.h>
char star[20];
void f(int n) {
	if(n<1) return;
	f(n-1);
	star[n] = '*';
	printf("%s\n", star+1);
}
int main() {
	int n;
	scanf("%d", &n);
	f(n);
}