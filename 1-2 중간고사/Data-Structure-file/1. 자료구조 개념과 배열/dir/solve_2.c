// solve_1을 응용하여 정수를 입력 받다 0이 입력 되면
// 지금까지 입력된 정수를 역순으로 출력하는 프로그램을 작성하시오.
// 단, 입력되는 정수의 수는 최대 100개이다.

#include <stdio.h>
int main() {
	int a[100]={0}, num, i, size=0;
	for(i=0; i<100; i++) {
		scanf("%d", &a[i]);
		if(a[i] == 0) {
			size = i-1;
			break;
		}
	}
	for(i=size; i>=0; i--)
		printf("%d ", a[i]);
	return 0;
}