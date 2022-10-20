// 사람의 수를 입력 받고 해당하는 사람수 만큼 키를 입력 받아서 최대값을 구하시오.
// (1<=사람의 수<=100) 

// 금지어: [

// 배열을 사용하지 않고 어떻게 한 변수에 입력받을 수 있을까요?

#include <stdio.h>
#include <stdlib.h>
int maxh(int* h, int n) {
    int i ;
    int max = *(h+0);
    for(i=1; i<n; i++){
        if(max<*(h+i)) max=*(h+i);
    }
    return max;
}
int main(){
    int n ;
    int i ;
    scanf("%d", &n);
    //int h[100];
    int* h=(int*)malloc(sizeof(int)*100);
    for(i=0; i<n; i++){
        scanf("%d", h+i);
    }
    printf("%d\n", maxh(h, n)) ;
    free(h);
    return 0; 
}