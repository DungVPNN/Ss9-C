#include <stdio.h>

int main() {
    int size;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Nhap gia tri cho phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int position, newValue;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &position);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[position] = newValue;

    printf("Mang sau khi sua: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

