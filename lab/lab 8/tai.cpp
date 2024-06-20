#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct NhanVien{
	int maNV;
	char hoTenNV[50];
	float luong;
};
void nhapNV(){
   struct NhanVien nhanvien[30];
   for (int i = 0;i < 3; i++){
   printf("Nhap ma nhan vien la: ");
   scanf("%d",&nhanvien[i].maNV);
   printf("Nhap ten nhan vien la: ");
   fflush(stdin);
   gets(nhanvien[i].hoTenNV);
   printf("Nhap tien luong la: ");
   scanf("%f",&nhanvien[i].luong);	
}
}
void xuatNV(){
	struct NhanVien nhanvien[30];
	for (int i = 0;i < 3; i++){
	printf("Ma nhan vien la: %d \n ",nhanvien[i].maNV);
	printf("Ten nhan vien la: %s \n ",nhanvien[i].hoTenNV);
	printf("Tien luong la: %g \n ",nhanvien[i].luong);
}
}
void tinh(){
	struct NhanVien nhanvien[30];
	for (int i = 0;i < 3; i++){
			if (nhanvien[i].luong < 5000000){
				printf("%d\n%s\n%g",nhanvien[i].maNV,nhanvien[i].hoTenNV,nhanvien[i].luong);
					}
					
			}
}

int main(){
	nhapNV();
	xuatNV();
	tinh();
}
