//
//  main.c
//  9-2 버블 정렬하기
//
//  Created by 이현우 on 5/23/24.
//

#include <stdio.h>

void bubbleSort(int a[], int size) {
    int i, j, t, temp;
    
    for (i = size - 1; i > 0; i--) {
        printf("\n %d단계>>", size - i);
        for (j = 0; j < i; j++) {
            
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j +1] = temp;
            }
            
            printf("\n\t");
            for (t = 0; t < size; t++) 
                printf("%3d ", a[t]);
        }
    }
}
