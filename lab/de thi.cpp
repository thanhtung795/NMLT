#include<stdio.h>
#include <string.h>
#include <stdlib.h>
void GT(){
	printf ("Thong tin SV\n");
	printf ("MSSV: PS27852\n");
	printf ("Ho ten: Vo Thanh Tung\n");
	printf ("Nganh: Ung dung phan mem\n");
	printf ("Lop: SA18302\n");
}
void minMax(){
	int a,b;
	printf ("moi nhap vao a: ");
	scanf("%d",&a);
	printf ("moi nhap vao b: ");
	scanf("%d",&b);
	if (a>b){
	printf ("min = %d\n",b);
	printf ("max = %d",a);	
	}else {
	printf ("min = %d\n",a);
	printf ("max = %d\n",b);
	}
	
}
void timSoChan(){
	int n,tong = 0;
	printf ("moi nhap n vao de cac so chan: ");
	scanf ("%d",&n);
	for (int i = 0;i < n; i++){
		if (i%2==0){
			printf ("%d\n",i);
			tong+=i;
		}
	}printf ("tong cac so chan la: %d\n",tong);
} 
struct nhanVien{
	char MSNV[20];
	char tenNV[50];
	int tuoi;
	int ngay,thang,nam;
};
void nhapTTNV(struct nhanVien NhanVien[], int n){
	for (int i = 0; i < n; i++){
		printf ("moi nhap MSNV: ");
		fflush (stdin);
		gets(NhanVien[i].MSNV);
		printf ("moi nhap ten nhan vien: ");
		fflush (stdin);
		gets(NhanVien[i].tenNV);
		printf ("moi nhap tuoi nhan vien: ");
		scanf ("%d",&NhanVien[i].tuoi);
		printf ("moi nhap ngay thang nam sinh\n");
		printf ("moi nhap ngay: ");
		scanf("%d",&NhanVien[i].ngay);
		printf ("moi nhap thang: ");
		scanf ("%d",&NhanVien[i].thang);
		printf ("moi nhap nam: ");
		scanf ("%d",&NhanVien[i].nam);
	}
}
void xuatTTNV(struct nhanVien NhanVien[], int n){
		for (int i = 0; i < n; i++){
			printf ("\nSTT: %d\nMSNV:%s\nten ho:%s\ntuoi:%d\nngay thang nam: %d/%d/%d",i+1,NhanVien[i].MSNV,NhanVien[i].tenNV,NhanVien[i].tuoi,NhanVien[i].ngay,NhanVien[i].thang,NhanVien[i].nam);
		}
}
void timKiem(struct nhanVien NhanVien[],int n){
	char MSNV[20];
	printf ("\n\nmoi nhap MSNV de tim thong tin nhan vien\n");
	printf ("moi nhap MSNV: ");
	fflush (stdin);
	gets(MSNV);
	for (int i = 0;i<n;i++){
		if (strcmp(NhanVien[i].MSNV,MSNV)==0){
			printf ("\nSTT: %d\nMSNV:%s\nten ho:%s\ntuoi:%d\nngay thang nam: %d/%d/%d\n",i+1,NhanVien[i].MSNV,NhanVien[i].tenNV,NhanVien[i].tuoi,NhanVien[i].ngay,NhanVien[i].thang,NhanVien[i].nam);
		}
	}
}
void cau1(){
	minMax();
}
void cau2(){
	timSoChan();
}
void cau3(){
	int n;
	struct nhanVien NhanVien[40];
	printf ("moi nhap so luong nhan vien: ");
	scanf("%d",&n);
	nhapTTNV(NhanVien,n);
	xuatTTNV(NhanVien,n);
	timKiem (NhanVien,n);
} 
void menu(){
	printf ("\n+-----------------menu------------------+\n");
	printf ("|1.tim so min va max\t\t	|\n");
	printf ("|2.tinh tong cac so chan tu 1 den n\t|\n");
	printf ("|3.thong tin nhan vien cong ty\t\t|\n");
	printf ("|0.de thoat chuong trinh\t\t|\n");
	printf ("+-----------------end-------------------+\n");
	printf ("moi nhap chuong trinh muon thuc thi tu (1,2,3,0): ");
}
void chon(){
	int chon;
	scanf ("%d",&chon);
	switch(chon){
		case 1:
			cau1();
			system("pause");
			break;
		case 2:
			cau2();
			system("pause");
			break;
		case 3:
			cau3();
			system("pause");
			break;
		case 0: exit(0);
		default:
			printf ("xin moi nhap lai vi ban da chon khong co trong menu \n");
			system("pause");
	}
}
int main(){
	while (true){
	system("cls");
	GT();
	menu();
	chon();
	}
return 0;
}
