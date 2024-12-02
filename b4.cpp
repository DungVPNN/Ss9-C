#include <stdio.h>

int main() {
    int arr[100];
    int size = 0, choice, position, value;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
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
                printf("Mang hien tai: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                arr[size] = value;
                size++;
                break;
            case 4:
                printf("Nhap vi tri can sua: ");
                scanf("%d", &position);
                if (position >= 0 && position < size) {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[position] = value;
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &position);
                if (position >= 0 && position < size) {
                    for (int i = position; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6);

    return 0;
}

