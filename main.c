#include <stdio.h>
#include <stdlib.h>
#define LEN 50

void print_array(int *, int);
int remove_elements(int *, int);

int main() {
    system("chcp 65001");
    int numbers[] = { 1, 3, 5, 8, 9, 11, 12, 17, 19, 23, 24, 30, 32, 34, 35, 37, 38, 39, 41, 42, 43, 44, 45, 47, 48, 49,
                      50, 51, 52, 55, 60, 67, 68, 71, 74, 78, 79, 82, 83, 84, 85, 86, 87, 89, 90, 91, 95, 97, 98, 99 };
    print_array(numbers, LEN);
    for (int i = 0; i < LEN; ++i)
        if (numbers[i] % 2 == 0)
            printf_s("  ↑");
        else
            printf_s("   ");
    int removed_cnt = remove_elements(numbers, LEN);
    puts("\narray after removing even elements:");
    print_array(numbers, LEN - removed_cnt);
    return 0;
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; ++i)
        printf_s("%3d", arr[i]);
    puts("");
}

int remove_elements(int *arr, int size) {
    int gap = 0;
    for (int i = 0; i < size; ++i)
        if (arr[i] % 2 == 0) //condition for removing
            gap++;
        else
            arr[i - gap] = arr[i];
    return gap;
}
