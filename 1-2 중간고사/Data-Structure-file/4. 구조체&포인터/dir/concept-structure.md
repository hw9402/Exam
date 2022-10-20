[back](../4.%20%EA%B5%AC%EC%A1%B0%EC%B2%B4%26%ED%8F%AC%EC%9D%B8%ED%84%B0.md)

# Index

<span style="color:#FF7272"></span>

## 구조체의 개념
- 여러 자료형의 연속된 변수들로 구성된 집합체
    - 주로 전역변수로 선언
- 구조체 구조
    - 구조체는 하나 이상의 멤버(Member)변수로 구성
    - 각 멤버변수들은 서로 다른 자료형을 가질 수 있음
- 구조체 사용
    - 구조체의 정의: <span style="color:#FF7272">struct 키워드</span>를 이용 
    - 구조체 변수를 선언할 때는 구조체 키워드가 형 지정자가 됨.
    
    <span style="color:#FF7272">

    - 구조체 변수의 멤버에 접근할 때는 (.) 연산자 사용
    - 구조체 포인터로 멤버에 접근할 때는 (->) 연산자 사용

    </span>

## typedef으로 struct 키워드 없이 구조체 선언하기
- typedef
    - 기존에 존재하는 자료형에 새로운 이름을 부여하는 것 (예) typedef int size_t)
- typedef로 구조체 자료형에 이름 부여
    - 구조체 변수는 매번 struct 키워드를 사용하여 구조체임을 명시해야 하는 번거로움이 있음.

## 구조체 자료형 정의 및 변수 선언 3가지 방법
1) struct 로 정의: 변수 생성할 때 struct 키워드를 명시해야함
    - struct name {};
2) <span style="color:#FF7272"> typedef struct 구조체 이름 : 구조체 생성할 때 별칭(alias) 를 이용</span>
3) typedef struct : 익명 구조체로 구조체 이름을 생략하고 바로 별칭으로 지정 가능
    - 가독성을 위해 <span style="color:#FF7272">3번째 방식</span>을 많이 사용함

## 구조체 초기화
- 구조체 변수 초기화
    - 배열의 초기화와 유사
    - 멤버/필드 변수의 자료형과 초기화하는 값의 자료형은 일치하여야함
    - ex) 구조체명 구조체변수명 = {값1, 값2, 값3...}
- 구조체 접근
    - 일반 변수로 선언한 구조체의 멤버에 접근할 때는 <span style="color:#FF7272">. (점)과 대입연산자 = 을 사용</span>

```c
// 예시
#include <stdio.h>
#include <string.h>
#define NUM 3
//전역에 구조체 정의
typedef struct {
	char name[10];
	int age;
} PERSON;

int i;

void inputData( PERSON *p );
void outputData( PERSON *p );
int main(){
    //구조체 포인터 배열 선언
    PERSON p[3];
    //구조체포인터 배열로 입력함수 호출
    inputData(p);
    //구조체포인터 배열로 출력함수 호출
    outputData(p);
    return 0;
}
void inputData( PERSON *p ){
    //구조체포인터 변수에 입력
	for(i=0; i<3; i++) {
        scanf("%s %d", p[i].name, &p[i].age);
	}
}
void outputData( PERSON *p ){
    //구조체포인터 변수에 출력
	for(i=0; i<3; i++) {
        printf("%s, %d\n", p[i].name, p[i].age);
	}
}
```

## 구조체 변수에 대한 할당(Assignment )연산
- 실제 값들의 메모리의 내용이  모두 복사
    - 일반적인 경우 비추천하며, 자료형에 대한 대입 연산을 지원하지 않음

## <span style="color:#FF7272">구조체 포인터</span>
- 구조체도 포인터를 선언할 수 있음
- 구조체 포인터에는 <span style="color:#FF7272">malloc 함수를 사용하여 동적 메모리를 할당 가능</span>
- <span>구조체 포인터의 멤버에 접근 -> (화살표 연산자)</span>를 사용

## 구조체 포인터 역참조하기
1) 구조체의 포인터 멤버 변수 역참조하기
    > <span style="color:#FF7272">*구조체포인터.멤버</span>
2) 구조체 포인터 변수를 역참조한 뒤 멤버에 접근: 구조체포인터를 ( )로 묶어서 표현
    > (*구조체포인터).멤버 <br>
    > *(*구조체포인터).멤버 <br> 
    > //구조체변수를 역참조 후 멤버 포인터변수 역참조