// 상품 구조체 Goods가  정의되어 있다. 다음 소스 코드를 완성하여 "한정판"이 출력되도록 코드를 완성하여 제출하시오.

// Hint) 구조체 포인터 ptr의 멤버 limited에 값을 할당한 뒤 if 조건문에서 값을 확인하므로, 구조체 포인터를 선언해주고, &연산자를 사용하여 주소를 할당한다.

#include <stdio.h>
#include <stdbool.h>
//구조체 선언
typedef struct {
	char name[100];
	int price;
	bool limit;
} Goods;
int main() {
    Goods item1 = { "교향곡 전집", 100000, false };
    Goods* ptr;
    ptr = &item1;
    ptr->limit = true;

    if (ptr->limit == true)
        printf("한정판\n");
    else
        printf("일반판\n");

    return 0;
}