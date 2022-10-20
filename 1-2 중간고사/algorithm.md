# 알고리즘의 조건 (1)
> ## 유한성
> 반드시 유한한 횟수의 단계를 거친 후에 종료되어야 한다.

> ## 명확성
> 각 단계는 반드시 명확하게 정의되어야 한다.

> ## 입력
> 0개 이상의 입력이 있어야 한다.

> ## 출력
> 하나 또는 그 이상의 출력이 있어야 한다.

> ## 효과성
> 각 단계들은 효과적이어야 한다.

# 알고리즘의 표현 방법 (1)
> ## 자연어
> 일상생활에서 사용하는 우리의 자연어로 알고리즘을 표현하는 방법

> ## 의사코드
> 특정 프로그래밍 언어는 아니지만 프로그래밍 언어와 비슷하게 ㄴㄴ표현한 방법

> ## 순서도
> 다이어그램의 종류 중 하나로 여러 종류의 도형과 순서를 알려 주는 화살표를 이용하여 명령이 실행되는 순서를 표현하는 방법

> ## N-S 다이어그램
> 구조적이고 모듈화된 알고리즘을 표현하기에 효과적이고 쉽게 작성할 수 있으며, 가독성이 좋은 표현 방법

# 알고리즘 수행시간 표 (1)
<img src="https://grm-project-template-bucket.s3.ap-northeast-2.amazonaws.com/lesson/les_AOvvL_1629701194488/bdff5780c4fccd828e00d8d4d205529795bdeebc0a14d07d9c1fddad4094a448.png">

|시간복잡도|n=1|n=2|n=4|n=8|n=16|n=32|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|1|1|1|1|1|1|1|
|n|0|1|2|3|4|5|
|n<sup>2</sup>|1|4|16|64|256|1024|
|n<sup>3</sup>|1|8|64|512|4096|32768|
|2<sup>n</sup>|2|4|16|256|65536|4294967296|
|n!|1|2|24|40326|20922789888000|26313 * 10<sup>33</sup>

# 알고리즘 수행시간 2 (1)
```c
#include <stdio.h>
int main() {
    int n = 0;
    int a = 1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            printf("%d", j);
        }
        printf("%d ", j);
    }
    return 0;
}
```
### 빅오표기법
> O(n<sup>2</sup>)

# 순환 알고리즘 (1)
```c
// 순환 알고리즘 1
// (팩토리얼 구현)
#include <stdio.h>
int f(int a) {
    if(a==1) return 1;
    else return a*f(a-1);
}
int main() {
    int a = 5;
    printf("%d", f(a));
    return 0;
}
```
> 실행 결과 : 120
```c
// 순환 알고리즘 2
// (피보나치 수열 구현)
#include <stdio.h>
int f(int a) {
    if(a==1) return 1;
    if(a==0) return 1;
    return f(a-1) + f(a-2)
}
int main() {
    int a = 5;
    printf("%d", f(a));
    return 0;
}
```
> 실행 결과 : 8

# 하노이탑 심화문제 코드 (1)
```c
#include <stdio.h>
int count, count1;
void hanoi(int n, char a, char b, char c) {
    if(n<=1) printf("%d : %c -> %c\n", n, a, c);
    else {
        hanoi(n-1, a, c, b);
        count1++;
        printf("%d : %c -> %c\n", n, a, c);
        hanoi(n-3, b, a, c);
    }
    count++;
}
int main() {
    int n = 4;
    hanoi(n, 'A', 'B', 'C');
    printf("%d %d", count, count1);
    return 0;
}
```
> #### 실행결과
> 1 : A -> B <br>
> 2 : A -> C <br>
> -1 : B -> C <br>
> 3 : A -> B <br>
> 0 : C -> B <br>
> 4 : A -> C <br>
> 1 : B -> C <br>
> 7 3

# 순환 알고리즘 문제풀이 7 (1)
```c
// 다음 함수에서 asterisk(5)를 호출할 때 출력되는 *의 개수는?
void asterisk(int i) {
    if(i>1) {
        asterisk(i/2);
        asterisk(i/2);
    }
    printf("*");
}
```
> 답 : 7

# 선택정렬 (1)
- 현재 자료 중 가장 작은 값을 찾아 첫 번째 위치로 가져다 놓은 후 그 다음 자료 중 가장 작은 값을 찾아 두 번째 위치로 가져다 놓는 형태를 반복해가는 정렬 방법
- 비교횟수 공식
    - $n(n-1)\over 2$
- 이 코드의 수행시간
    - $n^2 + 7n + 2$
- 빅오표기법
    - $O(n^2)$
```c
#include <stdio.h>
int main() {
    int i,j,n=4,k,temp;
    int list[4]={4,5,1,2};
    for(i=0; i<n-1; i++) {
        k=i;
        for(j=i+1; j<n; j++) {
            if(list[j]<list[k]) {
                k=j;
            }
        }
        temp=list[i];
        list[i]=list[k];
        list[k]=temp;
    }
    for(i=0; i<n; i++) {
        printf("%d ",list[i]);
    }
    return 0;
}
```

# 버블정렬 (1)
- 인접한 두 개의 값을 비교하여 값의 크기에 따라 위치 교환을 반복해 가면서 정렬하는 방법
- 비교횟수 공식
    - $n(n-1)\over 2$
- 이 코드의 수행시간
    - $n^2 + 3n + 15$
- 빅오표기법
    - $O(n^2)$
```c
#include <stdio.h>
int main() {
    int i,j,n=4,temp;
    int list[4]={4,5,1,2};
    for(i=n-1; i>0; i--) {
        for(j=0; j<i; j++) {
            if(list[j]>list[j+1]) {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++) {
        printf("%d ",list[i]);
    }
    return 0;
}
```

# 삽입정렬 (1)
- 값의 적절한 위치를 찾아 삽압하는 동작을 반복해 가면서 정렬하는 방법
- 비교횟수 공식
    - $n(n-1)\over 2$
- 이 코드의 수행시간
    - $5n + 13$
- 빅오표기법
    - $O(n)$
```c
#include <stdio.h>
int main() {
    int i,j,n=4,temp,key;
    int list[4]={4,5,1,2};
    for(i=1; i<n; i++) {
        key=list[i];
        for(j=i-1; j>=0 && list[j]>key; j--) {
            list[j+1]=list[j];
        }
        list[j+1]=key;
    }
    for(i=0; i<n; i++) {
        printf("%d ",list[i]);
    }
    return 0;
}
```

# 총 10문제