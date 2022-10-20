// 문제
// 문자열을 복사하는 함수 2개를 작성하시오.
// 1. mystrcpy()는 배열형 매개 변수를 사용하며 인덱스를 이용하여 문자열 복사
// 2. mystrcpy2()는 포인터형 매개 변수를 사용하는 함수 지역 변수를 추가하지 않고
// 동일한 결과를 얻을수 있도록 함수를 완성(인덱스 사용X)

// 입력                                                                                             
// 1개의 문자열이 입력된다. 문자열의 최대 길이는 255미만이다.
// 출력                                                                                                   
// 입력받은 각 함수를 호출하여 문자열을 복사하여 출력한다

// 예제입력                                                                                             
// abcdefg

// 예제 출력                                                                                            
// abcdefg
// abcdefg

#include <stdio.h>
void mystrcpy(char str2[], char str1[]) {
    int i = 0 ;
    while(*(str1+i) != '\0') {
        *(str2+i) = *(str1+i);
    	i++;
    }
    *(str2+i) = '\0'; // 마지막 문자에 '\0' 입력
}

void mystrcpy2(int* str3, int* str1) {
int i = 0 ;
	while(*(str1+i)) {
        *str3 = *str1;
		str1++;
		str3++;
    }
    *(str3+1) = '\0'; // 마지막 문자에 '\0' 입력
}

int main() {
	char str1[257],	str2[257], str3[257];
	fgets(str1,257,stdin);
	mystrcpy(str2, str1);
	puts(str2);
	mystrcpy2(str3, str1);
	puts(str3);
	return 0;
}