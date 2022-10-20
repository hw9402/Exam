// 우리가 구현할 함수의 프로토타입은 다음과 같다.

// int myStrlen( char str[ ] )  // 문자 전체 길이 
//   1. 공백이 없는 문자열을 입력 받아 문자의 길이를 반환한다.

// int myStrlen( char str[ ] )  // 숫자의 개수 길이
//   2. 문자열 중에서 digit의 개수를 반환한다.

// int myStrlen( char str[ ] )  // 공백제외 문자길이
//   3.중간 공백을 제외한 문자의 길이를 반환한다.

// int myStrlen( char str[ ],  char c )  // 특정문자의 길이
//   4. 특정한 문자의 길이를 반환한다.

// [ 참고 ]

// 1. 문자 '1'을 숫자 1로 변경하려면?  아스키코드를 보고 이해해보자.  문자변수 - '0'    
//  (예  '1' - '0' )

// 2. 문자 변수 a가 digit 임을 판별하려면 ? a >= '0' && a <= '9'

// 3. scanf는 공백(whitespace character)이 있으면 공백 앞까지의 글자만 입력 받을 수 있다.
// 공백이 포함된 문자열을 입력 받는 방법은? 

//  4. 공백이 포함된 문자열에서 공백을 제외한 문자의 길이만 반환하도록 하려면 어떻게 해야할까?   a =='  '

// [ 심화 ]
// 1. 제출코드에 '['가 포함되지 않도록 프로그램을 작성하시오. (포인터 변수 사용)
//  2. 문자열 길이와 관련된 다른 기능을 함수로 구현해 보자. ( ex) 문자중 소문자의 개수 등 . )
//  코드( 함수 )를 추가하여 제출하시오.

#include <stdio.h>
int myStrlen( char str[] );
int myStrlen2( char str[] );

int main() {
	char s[100];
	// fgets(s, 100, stdin);
	scanf("%s", s );
	
	printf("%d\n", myStrlen(s)); // 문자 길이 
	printf("%d\n", myStrlen2(s)); 
	
	return 0;
}
int myStrlen( char str[] ){ // (char* str)
	int i, cnt=0;
	for(i=0; str[i]!='\0'; i++) { // for(i=0; *(str+i)!='\0'; i++) {
		cnt++;
	}
	return cnt;
}
int myStrlen2( char str[] ){
	int i, cnt=0;
	for(i=0;str[i]!='\0'; i++) {
		if(str[i]>='0' && str[i]<='9') {
			cnt++;
		}
	}
	return cnt;
}