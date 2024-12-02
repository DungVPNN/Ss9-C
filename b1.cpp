#include <stdio.h>

int main() {
    int arr[100];
    int currentLength = 0;
    int value, position;

    printf("Nhap so luong phan tu ban dau: ");
    scanf("%d", &currentLength);

    for (int i = 0; i < currentLength; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them vao: ", currentLength);
    scanf("%d", &position);

    if (position >= 0 && position <= currentLength) {
        for (int i = currentLength; i > position; --i) {
            arr[i] = arr[i - 1];
        }
        arr[position] = value;
        currentLength++;
    }

    printf("Mang sau khi them: ");
    for (int i = 0; i < currentLength; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

