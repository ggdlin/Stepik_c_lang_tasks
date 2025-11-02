#include <stdio.h>

#define TOTAL     10

void ins_elem(int index, int arr[TOTAL], int length, int value);

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    // здесь продолжайте программу
    int value = -1;
    for (int i = 0; i < (int)count; ++i) {
        if (digs[i] == 5) {
            ++i;
            if (count < TOTAL) ++count;
            ins_elem(i, digs, (int)count, value--);
        }
    }





    for (int i = 0; i < (int)count; ++i) {
        printf("%d ", digs[i]);
    }

        return 0;
}

void ins_elem(int index, int arr[TOTAL], int length, int value) {
    for (int i = length - 1; i > index; --i) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
}
