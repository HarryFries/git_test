//
//  ex9_2.c
//  9-2 버블 정렬하기
//
//  Created by 이현우 on 5/23/24.
//

#include <stdio.h>
void bubbleSort(int a[], int size);

int main(void) {
    int i, list[8] = {8, 5, 6, 2, 4};
    int size = sizeof(list) / sizeof(list[0]);
    
    printf("\n정렬할 원소 : ");
    for (i = 0; i < size; i++) printf("%3d ", list[i]);
    printf("\n<<<<<<<<<< 버블 정렬 수행 >>>>>>>>>>");
    bubbleSort(list, size);
    
    getchar(); return 0;
}
