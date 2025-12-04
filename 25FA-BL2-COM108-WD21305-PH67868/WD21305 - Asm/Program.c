#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void KiemTraSoNguyen()
{
	int n, So = 1;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);
	double can = sqrt(n);
	if (n > 0) {
		printf("Day la so nguyen duong\n");
	}
	else if (n < 0) {
		printf("Day  la so nguyen am\n");
	}
	else  {
		printf("Day la so 0\n");
	}
	if (n <= 1){
		printf("Day khong phai la so nguyen to \n");
	}
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				So = 0;
			}
		}
	}
	if (So) {
		printf("Day la so nguyen to \n", n);
	}
	else {
		printf("Day khong phai la so nguyen to \n", n);
	}
	if (n < 0) {
		printf("Day khong phai la so chinh phuong\n", n);
	}
	else if (pow(can, 2) == n) {
		printf("Day  la so chinh phuong\n", n);
	}
		else {
		printf("Day khong phai la so chinh phuong\n", n);
	}
}
void TimUocchungVaBoiChung() {
	int a, b, ucln, bcnn, x, y;	
	printf("Moi nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Moi nhap so thu hai: ");
	scanf("%d", &b);
	x = a;
	y = b;	
	while ( y != 0) {
		int temp = y;
		y = x % y;
		x = temp;
	}
	ucln = x;
	bcnn = (a * b) / ucln;
	printf("Uoc chung lon nhat la: %d\n", ucln);
	printf("Boi chung nho nhat la: %d\n", bcnn);
}
void TinhTienQuanKaraoke() {
	int GioBD, GioKT, SoGio;
	float TongTien;
	printf("Moi nhap gio bat dau: ");
	scanf("%d", &GioBD);
	printf("Moi nhap gio ket thuc: ");
	scanf("%d", &GioKT);
	SoGio = GioKT - GioBD;
	if (GioBD < 12 || GioKT > 23) {
		printf("Gio khong hop le. Quan chui hoat dong tu 12h den 23h.\n");
		return 0;
	}
	if (SoGio <= 3) {
		TongTien = SoGio * 150000;
	}
	else if (SoGio > 3) {
		TongTien = 3 * 150000 + (SoGio - 3) * 105000;
	}
	else {
		printf("So gio phai lon hon 0.\n");
		return 0;
	}
	  if (GioBD >= 14 && GioBD <= 17) {
		TongTien = TongTien * 0.9;
	}


	printf("So tien phai tra la: %.0f VND\n", TongTien);
}
void TinhTienDien()
{
	int kwh;
	float SoTien;

	printf("Nhap so kWh dien su dung: ");
	scanf("%d", &kwh);
	if (kwh < 0) {
		printf("So kWh phai lon hon 0.\n");
		return 0;
	}
	if (kwh <= 50) {
		SoTien = kwh * 1678;
	}
	else if (kwh <= 100) {
		SoTien = 50 * 1678 + (kwh - 50) * 1734;
	}
	else if (kwh <= 200) {
		SoTien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
	}
	else if (kwh <= 300) {
		SoTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
	}
	else if (kwh <= 400) {
		SoTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
	}
	else {
		SoTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
	}

	printf("So tien dien phai tra: %.0f VND\n", SoTien);
}
void DoiTien() {
	int Tien;
	int MenhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int SoTo;
	
	printf("Nhap so tien can doi: ");	
	scanf("%d", &Tien);
	
	if (Tien <= 0) {
		printf("So tien khong hop le!\n");
		return 0;
	}
	printf("Ket qua doi tien:\n");
	
	if (Tien == 500) {
		printf("2 to menh gia 200\n");
		printf("1 to menh gia 100\n");
		return 0;
	}
	else if (Tien == 200) {
		printf("2 to menh gia 100\n");
		return 0;
	}
	else if (Tien == 100) {
		
		printf("2 to menh gia 50\n");
		return 0;
	}
	else if (Tien == 50) {
		printf("2 to menh gia 20\n");
		printf("1 to menh gia 10\n");
		return 0;
	}
	for (int i = 0; i < 9; i++) {
		SoTo = Tien / MenhGia[i];
		if (SoTo > 0) {
			printf("%d to menh gia %d\n", SoTo, MenhGia[i]);
		}
		Tien = Tien % MenhGia[i];
	}
}
void TinhLaiVay()
{
	int tienVay;
	float laiSuat = 0.05;
	int kyHan = 12;

	printf("Nhap so tien muon vay: ");
	scanf("%d", &tienVay);

	float gocPhaiTra = tienVay / 12.0;
	float tienConLai = tienVay;

	printf("\n%-10s %-15s %-15s %-18s %-15s\n",
		"Ky han", "Lai phai tra", "Goc phai tra",
		"So tien phai tra", "So tien con lai");

	for (int i = 1; i <= kyHan; i++)
	{
		float laiPhaiTra = tienConLai * laiSuat;
		float soTienPhaiTra = gocPhaiTra + laiPhaiTra;
		tienConLai -= gocPhaiTra;

		printf("%-10d %-15.0f %-15.0f %-18.0f %-15.0f\n",
			i, laiPhaiTra, gocPhaiTra, soTienPhaiTra, tienConLai);
	}
}
void VayTienMuaXe()
{
	float giaXe = 500000000;
	float laiNam = 0.072;
	float laiThang = laiNam / 12;
	int soThang = 24 * 12;

	int phanTramVay;
	printf("Nhap vao so phan tram muon vay : ");
	scanf("%d", &phanTramVay);

	float soTienVay = giaXe * phanTramVay / 100.0;
	float traTruoc = giaXe - soTienVay;
	float gocHangThang = soTienVay / soThang;

	printf("\nTIEN TRA TRUOC: %.0f VND\n", traTruoc);
	printf("TRA GOP TRONG %d THANG (24 nam):\n", soThang);
	printf("----------------------------------------------------------\n");
	printf("%-10s %-15s %-15s %-15s\n",
		"Thang", "Lai", "Goc", "Thanh toan");

	float tienConLai = soTienVay;

	for (int i = 1; i <= soThang; i++)
	{
		float laiPhaiTra = tienConLai * laiThang;
		float tienTra = laiPhaiTra + gocHangThang;
		tienConLai -= gocHangThang;

		printf("%-10d %-15.0f %-15.0f %-15.0f\n",
			i, laiPhaiTra, gocHangThang, tienTra);
	}

}
void XayDungGameFPL() {
	int a, b;
	int x, y;
	int count = 0;

	printf("Nhap so may man  cua ban thu nhat (1-15): ");
	scanf("%d", &a);
	printf("Nhap so may man cua ban thu hai (1-15): ");
	scanf("%d", &b);

	srand(time(NULL));
	x = rand() % 15 + 1;
	y = rand() % 15 + 1;

	printf("\nHe thong cua chuong trinh quay ra: %d - %d\n", x, y);

	if (a == x || a == y) count++;
	if (b == x || b == y) count++;

	if (count == 0)
	{
		printf("Chuc ban may man lan sau!\n");
	}
	else if (count == 1)
	{
		printf("Chuc mung ban trung giai nhi!\n");
	}
	else
	{
		printf("Chuc mung ban dat giai nhat!!!\n");
	}

}
void TinhPhanSo() {
	int tu1, mau1, tu2, mau2;

	printf("Nhap tu so phan so 1: ");
	scanf("%d", &tu1);
	printf("Nhap mau so phan so 1: ");
	scanf("%d", &mau1);

	printf("Nhap tu so phan so 2: ");
	scanf("%d", &tu2);
	printf("Nhap mau so phan so 2: ");
	scanf("%d", &mau2);

	if (mau1 == 0 || mau2 == 0) {
		printf("Mau so khong hop le!\n");
		return;
	}

	int tong_tu = tu1 * mau2 + tu2 * mau1;
	int tong_mau = mau1 * mau2;

	int hieu_tu = tu1 * mau2 - tu2 * mau1;
	int hieu_mau = mau1 * mau2;

	int tich_tu = tu1 * tu2;
	int tich_mau = mau1 * mau2;

	int thuong_tu = tu1 * mau2;
	int thuong_mau = mau1 * tu2;

	printf("\n=== KET QUA ===\n");
	printf("Tong:   %d/%d\n", tong_tu, tong_mau);
	printf("Hieu:   %d/%d\n", hieu_tu, hieu_mau);
	printf("Tich:   %d/%d\n", tich_tu, tich_mau);

	if (tu2 == 0) {
		printf("Thuong: Khong xac dinh (phan so 2 = 0)\n");
	}
	else {
		printf("Thuong: %d/%d\n", thuong_tu, thuong_mau);
	}
}
void SapXepTTSV() {
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	getchar();

	char hoTen[100][50];
	float diem[100];
	char hocLuc[100][20];

	for (int i = 0; i < n; i++) {
		printf("\nNhap ten sinh vien %d: ", i + 1);
		fgets(hoTen[i], sizeof(hoTen[i]), stdin);

		hoTen[i][strcspn(hoTen[i], "\n")] = '\0';

		printf("Nhap diem sinh vien %d: ", i + 1);
		scanf("%f", &diem[i]);
		getchar();

		if (diem[i] >= 9) strcpy(hocLuc[i], "Xuat sac");
		else if (diem[i] >= 8) strcpy(hocLuc[i], "Gioi");
		else if (diem[i] >= 6.5) strcpy(hocLuc[i], "Kha");
		else if (diem[i] >= 5) strcpy(hocLuc[i], "Trung binh");
		else strcpy(hocLuc[i], "Yeu");
	}

	// Sắp xếp giảm dần theo điểm
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (diem[i] < diem[j]) {
				// Hoán đổi điểm
				float tmpD = diem[i];
				diem[i] = diem[j];
				diem[j] = tmpD;

				// Hoán đổi tên
				char tmpName[50];
				strcpy(tmpName, hoTen[i]);
				strcpy(hoTen[i], hoTen[j]);
				strcpy(hoTen[j], tmpName);

				// Hoán đổi học lực
				char tmpHL[20];
				strcpy(tmpHL, hocLuc[i]);
				strcpy(hocLuc[i], hocLuc[j]);
				strcpy(hocLuc[j], tmpHL);
			}
		}
	}

	printf("\n===== DANH SACH SINH VIEN =====\n");
	for (int i = 0; i < n; i++) {
		printf("%d. %s | Diem: %.2f | Hoc luc: %s\n",
			i + 1, hoTen[i], diem[i], hocLuc[i]);
	}
}
void lapChucNang(int ChonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (ChonChucNang)
		{
		case 1:
			KiemTraSoNguyen();
			break;
		case 2:
			TimUocchungVaBoiChung();
			break;
		case 3:
			TinhTienQuanKaraoke();
			break;
        case 4:
			 TinhTienDien();
			break;
		case 5:	
			DoiTien();
			break;	
		case 6:
			TinhLaiVay();
			break;
		case 7:
			VayTienMuaXe();
			break;
		case 8:	
			SapXepTTSV();
			break;	
		case 9:	
			XayDungGameFPL();
			break;
		case 10:	
			TinhPhanSo();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-10]");
			break;
		}
		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}
int main()
{
	int ChonChucNang;
	do {
		printf("-----MENU CHUC NANG-----\n");
		printf("1. Kiem tra so nguyen\n");
		printf("2. Tim uoc chung va boi chung\n");
		printf("3. Tinh tien quan karaoke\n");
		printf("4. Tinh tien dien\n");
		printf("5. Chuc nang doi tien\n");
		printf("6. Tinh lai vay\n");
		printf("7. Vay tien mua xe\n");
		printf("8. Sap xep thong tin sinh vien\n");
		printf("9. Xay dung game FPL\n");
		printf("10. Tinh phan so\n");
		printf("0. Thoat\n");
		scanf("%d", &ChonChucNang);
		lapChucNang(ChonChucNang);
	} while (ChonChucNang != 0);
}