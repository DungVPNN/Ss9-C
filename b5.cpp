#include <stdio.h>

int main() {
    int arr[100], size = 0, choice, value, position, count, sum, max, min;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu\n");
        printf("3. In ra phan tu chan\n");
        printf("4. In ra gia tri lon nhat va nho nhat\n");
        printf("5. In ra so nguyen to\n");
        printf("6. Thong ke so xuat hien\n");
        printf("7. Them phan tu\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Nhap gia tri cho phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Phan tu chan: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 4:
                max = arr[0];
                min = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Max: %d, Min: %d\n", max, min);
                break;
            case 5:
                printf("So nguyen to: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i] <= 1) continue;
                    int isPrime = 1;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 6:
                printf("Nhap so can thong ke: ");
                scanf("%d", &value);
                count = 0;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == value) count++;
                }
                printf("So %d xuat hien %d lan\n", value, count);
                break;
            case 7:
                printf("Nhap vi tri can them: ");
                scanf("%d", &position);
                if (position >= 0 && position <= size) {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    for (int i = size; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    size++;
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}

