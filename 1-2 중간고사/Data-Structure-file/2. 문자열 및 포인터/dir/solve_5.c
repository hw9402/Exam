// 문제
// 알파벳을 문자배열로 입력받아 알파벳의 아스키코드값을 인덱스로 사용하면 어떤 알파벳이
// 몇 번 사용되었는지 알아낼 수 있지 않을까?
// 알파벳 대문자로 된 단어가 주어지면, 
// 어떤 알파벳이 몇번 나왔는지 알파벳 순으로 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다.
// 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

// 출력
// 사용된 알파벳과 빈도수를  줄을 바꾸어 출력한다.

#include <stdio.h>
int main() {
    char s[1000001];
    int a[100] = {0,};
    int i, t=0;
    scanf("%s", s);
    for(i=0; s[i] != '\0'; i++) {
        // printf("%c", s[i]);
        t = s[i]-0; // t=65
        a[t]++;
    }
    for(i=65; i<=90; i++) { // 'A', 'z'
        if(a[i] > 0)
            printf("%c : %d\n", i, a[i]);
    }
    return 0;
}