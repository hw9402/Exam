#include <stdio.h>

void inputArray(int a[], int size);
void outputArray(int a[], int size);
int insertArray(int a[], int num, int index, int size);
int deleteArray(int a[], int index, int size);

int main() {
    int a[10]={0};
    int size = 3;

    inputArray(a, size);
    outputArray(a, size);

    size = insertArray(a, 50, 1, size);
    outputArray(a, size);

    size = deleteArray(a, 0, size);
    outputArray(a, size);

    return 0;
}

void inputArray(int a[], int size) {
    int i;
    for(i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
}

void outputArray(int a[], int size) {
    int i;
    for(i=0; i<size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertArray(int a[], int num, int index, int size) {
    int i;
    
    if(index == size) {
        a[index] = num;
        size++;
    }
    else {
        for(i=size; i>index; i--) {
            a[i] = a[i-1];
        }
        a[index] = num;
        size++;
    }

    return size;
}

int deleteArray(int a[], int index, int size) {
    int i;

    if(index == size-1) {
        a[index] = 0;
        size--;
    }
    else {
        for(i=index; i<size; i++) {
            a[i] = a[i+1];
        }
        size--;
    }
    
    return size;
}