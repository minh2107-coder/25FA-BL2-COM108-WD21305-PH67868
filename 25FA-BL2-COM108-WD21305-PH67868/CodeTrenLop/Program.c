#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void kiemTraSoNguyen()
{
	int n;

	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);

	if (n > 0) {
		printf("Day la so nguyen duong\n");
	}
	else if (n < 0) {
		printf("Day la so nguyen am\n");
	}
	else {
		printf("Day la so 0\n");
	}

	if (n % 2 == 0) {
		printf("Day la so chan\n");
	}
	else {
		printf("Day la so le\n");

	}
}
void sapXepPhanTuMang()
{
	int intergerAgrray[100];
	int tmp;	
	int length = sizeof(intergerAgrray) / sizeof(int);
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &length);
	printf("Nhap du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = ", i);
		scanf("%d", &intergerAgrray[i]);

	}
		printf("Sap xep du lieu tang dan mang %d phan tu\n", length);
		for (int i = 0; i < length - 1; i++)
		{
			if (intergerAgrray[i] > intergerAgrray[i + 1])
			{
				tmp = intergerAgrray[i];
				intergerAgrray[i] = intergerAgrray[i + 1];
				intergerAgrray[i + 1] = tmp;
				
			}

		}
	printf("In lieu cho mang %d phan tu\n", length);	
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d: ", i, intergerAgrray[i]);
		
	}
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			// ham goi chuc nang 2
			sapXepPhanTuMang();
			break;
		case 3:
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Tinh Trung Binh Tong Cac So Chia Het Cho 3 Trong Mang");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184