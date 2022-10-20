// 문제해결[01-02] 예제를 응용하여 5개의 문자형 원소를 배열로 입력 받아 역순으로 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main() {
    char arr[5];
    int i;
    for(i=0; i<5; i++)
        scanf("%s", &arr[i]);
    for(i=4; i>=0; i--)
        printf("%c", arr[i]);
    return 0;
}