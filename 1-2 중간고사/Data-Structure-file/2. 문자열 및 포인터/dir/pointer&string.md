[back](../2.%20%EB%AC%B8%EC%9E%90%EC%97%B4%20%EB%B0%8F%20%ED%8F%AC%EC%9D%B8%ED%84%B0.md)

# 포인터와 문자열

## 1. 문자열을 저장하는 배열과 포인터의 차이
| 구분 | char 포인터 | char 배열 |
|:---:|:---:|:---:|
| 초기화 | char* pc =“mango”; | char str[80]=“mango”; |
| 대입 | pc = “banana”; | strcpy(str,“banana”); |
| 크기 | sizeof(pc) => 8byte | sizeof(str) => 80byte |
| 수정 | pc[0] = ‘t’; (×)<br>*(pc+0) = ‘t’; (×)<br>문자열 상수이므로 변경X | str[0] = ‘t’; (O)
| 입력 | scanf(“%s”,pc); (×) | scanf(“%s”,str); (O) |

<br>

## 2. 문자열 연산 함수 - #include <string.h>
| 연산기능 | 사용방법 | char 배열 |
|:---:|:---:|:---:|
| 문자열 복사 | strcpy(str1, str2) | str2를 str1에 복사 |
| 문자열 길이계산 | strlen(str) | 문자열 str의 길이(문자수)반환 |
| 문자열 붙이기 | strcat(str1,str2) | str2를 str1뒤에 이어붙임 |
| 문자열 비교 | strcmp(str1,str2) | str1이str2과 같으면 0 반환<br>str1이str2보다 크면 1 반환<br>str1이str2보다 작으면 –1 반환 |