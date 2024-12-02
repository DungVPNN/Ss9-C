#include <stdio.h>

int main() {
    int arr[100];
    int size, position;

    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Nhap gia tri cho phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa: ");
    scanf("%d", &position);

    if (position >= 0 && position < size) {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

