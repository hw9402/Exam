[back](../3.%20%EB%8B%A4%EC%B0%A8%EC%9B%90%EB%B0%B0%EC%97%B4.md)

# Index

## 개념
> 2차원 배열을 가리키는 배열 포인터 지정

## 선언
<span style="color:#FF7272">

- 자료형 (*포인터이름)[열의 크기];
- int (*arr)[4];
- int형 포인터 값 4개를 저장하는 배열

## 부분배열
</span>

> 2차원 배열의 각 행의 1차원의 배열

```c
// 예시
#include <stdio.h>
int main() {
	int a[3][4] = {0};
	for( int i ; i < 3 ; i ++ )
		printf( "%8X\n", a[i] ) ;
	return 0;
}
```