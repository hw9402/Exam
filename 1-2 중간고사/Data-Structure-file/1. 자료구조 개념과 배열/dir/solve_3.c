// [예제]의 insertArray,  deleteArray에 코드에 배열 인덱스 위치에
// 원소를  삽입, 삭제하는 기능을 포함하여 프로그램을 완성하시오.

// < 원소 인덱스 위치 삽입 알고리즘 >

// 1. 배열의 원소를 오른쪽으로 이동( 반복문 )
// 2. 원하는 위치에 원소 삽입
// 3. 배열의 크기 증가

// < 원소 인덱스 위치 삭제 알고리즘 >

// 1. 배열의 원소를 왼쪽으로 이동( 반복문 )
// 2. 배열의 크기 감소

#include <stdio.h>
void inputArray( int a[], int size);
void outputArray( int a[], int size);
int insertArray( int a[], int num, int index, int size);
int deleteArray( int a[], int index, int size);

int main(){
    int a[10], size=0 ;
    size = insertArray( a, 10, 0, size);
    size = insertArray( a, 20, 1, size);
    size = insertArray( a, 30, 2, size);
    size = insertArray( a, 50, 2, size);
    outputArray(a,size);
    size = deleteArray(a, 1, size);
    outputArray(a, size);
    return 0;
}
void inputArray( int a[], int size){
	int i;
 	//배열에 크기 만큼 데이터 입력
	for(i=0; i<size; i++)
		scanf("%d", &a[i]);
}
void outputArray( int a[], int size){
	int i;
	for(i=0; i<size; i++)
		printf("%d ", a[i]);
	printf("\n");
}
int insertArray( int a[], int num, int index, int size){
    //여기에 배열 끝부분에 원소 삽입코드 작성 
		int i;
		if(index == size) {
			a[index] = num;
			size++;
		}
	  // 여기에 배열 중간에 원소 삽입 코드
		else{
			for(i=size; i>index; i--) {
				a[i] = a[i-1];
			}
			a[i] = num;
			size++;
		}
  return size;
}
int deleteArray( int a[], int index, int size){
	int i = 0;
	//여기에 배열 끝부분 원소 삭제 코드
  if(index == size-1) {
    a[index] = 0;
		size--;
	}
	//여기에 배열 중간의 원소 삭제 코드
	else{
		size--;
		for(i=index; i<size; i++) {
			a[i] = a[i+1];
		}
	}
  return size;
}