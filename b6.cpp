#include <stdio.h>

int main() {
    int m, n;
    int arr[100][100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In cac phan tu le va tinh tong\n");
        printf("4. In cac phan tu tren duong bien va tinh tich\n");
        printf("5. In cac phan tu tren duong cheo chinh\n");
        printf("6. In cac phan tu tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so dong (m): ");
                scanf("%d", &m);
                printf("Nhap so cot (n): ");
                scanf("%d", &n);

                printf("Nhap gia tri cac phan tu cua mang:\n");
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("arr[%d][%d] = ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                printf("Gia tri cac phan tu trong ma tran:\n");
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                {
                    int sum = 0;
                    printf("Cac phan tu le: ");
                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            if (arr[i][j] % 2 != 0) {
                                printf("%d ", arr[i][j]);
                                sum += arr[i][j];
                            }
                        }
                    }
                    printf("\nTong cac phan tu le: %d\n", sum);
                }
                break;

            case 4:
                {
                    int product = 1;
                    printf("Cac phan tu tren duong bien: ");
                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                                printf("%d ", arr[i][j]);
                                product *= arr[i][j];
                            }
                        }
                    }
                    printf("\nTich cac phan tu duong bien: %d\n", product);
                }
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 8);

    return 0;
}

