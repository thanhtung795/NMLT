#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void gioiThieu(){
	printf ("thong tin sinh vien\n");
	printf ("Ho ten: Vo Thanh Tung\n");
	printf ("MSSV: PS27852\n");
	printf ("nganh: Ung dung phan mem\n");
	printf ("Lop: SA18302\n");
}
void chucnang1(){
    float so;  
   printf ("\nMoi nhap so: ");
   scanf ("%f", &so);
   
   if (so==(int)so){
       printf ("\n%g la so nguyen\n", so);
   } else 
         { printf ("\n%g khong phai la so nguyen\n", so);
   }
      
    if(so > 1 && so==(int)so) {
    	int sont = so;
		int i;
		int kiemtra = 1;
		for(i = 2; i <= sqrt(sont); i++)  {
			if(sont % i == 0) {
				kiemtra = 0;
				break;
			}
	}	
		if(kiemtra == 1) {
			printf("%d la so nguyen to \n", sont);
		} else {
			printf("%d khong phai la so nguyen to \n", sont);
	}	}		
	   else {
		printf ("%g khong phai la so nguyen to \n", so);
	} 
	

    if (so>0 && (sqrt(so)==(int)sqrt(so))){
    	printf ("%g la so chinh phuong\n", so);
	} else {
		printf ("%g khong phai la so chinh phuong\n", so);
	}
}

void chucnang2(){
	    int a, b;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	
	if(a == 0 && b == 0){
			printf("\nKhong ton tai UCLN, BCNN\n");
		} else if(a == 0 || b == 0) {
			printf("\nKhong co BCNN, UCLN = %d\n", (a == 0) ? b : a);
		} else if(a >0 && b>0){ 
			int bc = a * b;			
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
		
	else if(a < 0 && b >0){
		int bc = a * b;
		a = -a;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else if(a > 0 && b < 0){
		int bc = a * b;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else{
    	int bc = a * b;
		a = -a;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}

}
void chucnang3(){
	int gioDau, gioCuoi, thoiGian, gioGiamGia;//cac bien tinh thoi gian
   float tien, giamgia, km4 ; //cac bien tinh gia tien
   const int gio = 4;// bien gio 
   
   printf ("\n\tthoi gian hoat dong cua quan karaoke an roi bao 24/24\n\n");
   printf ("\t\t+===============================+\n");
   printf ("\t\t|   xin dang ky gio muon hat\t|\n");
   printf ("\t\t+===============================+\n");
   printf ("\nGio bat dau va gio ket thuc la  " );
   scanf ("%d", &gioDau);
   scanf ("%d", &gioCuoi);
   printf ("gio bat dau la %dh\n",gioDau);
   printf ("gio ket thuc la %dh\n",gioCuoi);
   thoiGian = gioCuoi - gioDau;//thoi gian su dung duoco tinh gio cuoi se tru cho gio cuoi
   gioGiamGia = thoiGian - 4;//thoi giam giam  se la lay thoi gian tru di 4 
   tien = thoiGian*90000;
   giamgia = gioGiamGia*90000;
 	  if (gioDau < 0 || gioCuoi > 24 ){

 	  		printf ("ban da nhap sai vui long nhap lai dung thoi gian\n");
 	  		while (true){
 	  			chucnang3();
 	  			break;
			   }
			}      
   		else {
   	   if (thoiGian <= 4 && gioDau < 14 || gioDau >= 17){//neu thoi gina nho hoac  bang 4 va < 14 gio hoac >= 17 se duoc tinh nhu binh thuong
       		printf ("tong thoi gian da sung dung  la:%dh",thoiGian);
           printf ("\nSo tien can thanh toan la: %.2f VND\n", tien);
       } else if (thoiGian <= 4 && gioDau >= 14 && gioDau <17){//neu thoi gina nho hoac  bang 4 va < 14 gio va < 17 thi se duoc giam 10% 
       	   		printf ("tong thoi gian da sung dung la:%dh",thoiGian);
            printf ("\nSo tien can thanh toan la: %.2f VND\n", tien-(tien*0.1));
       } else if (thoiGian > 4 && gioDau < 14 || gioDau >= 17){//neu thoi gian > 4 va < 14 hoac  >= 17 se duoc tinh giam 40%
    	km4 = (gio*90000)+(giamgia-(giamgia*0.4));       
    	   		printf ("tong thoi gian da sung dung la:%dh",thoiGian);
           printf ("\nSo tien can thanh toan la: %.2f VND\n", km4);
       } else {//dieu kien con lai  neu co 1 trong nhung dieu kien sau se duoc giam 40% va giam them 10% cho tong s tien 
    	km4 = (gio*90000)+(giamgia-(giamgia*0.4));       
    	   		printf ("tong thoi gian da sung dung la  la:%dh",thoiGian);
           printf ("\nSo tien can thanh toan la: %.2f VND\n", km4-(km4*0.1));
       } 
   }
    
    			
}
void chucnang4(){
	float soTien;
	printf ("Nhap so dien: ");
		scanf ("%f",&soTien);
	if (soTien < 0){
		printf ("so tien khong the nhap so am vui long nhap lai\n");
		while (true)
		{
			chucnang4();
			break;
		}
	}else{
	if (soTien<=0){
		printf ("Nhap lai so dien"); 
	}else if (soTien<50){//neu nho hon 50 la bac 1 
		printf ("Gia dien bac 1 la: 1.678d \n");
		printf ("So tien phai tra la: %0.2fVND\n",soTien*1678);
	}else if (soTien<100){//nho hon 100 la bac 2
		printf ("Gia dien bac 2 la: 1.734d \n");
		printf ("So tien phai tra la: %0.2fVND",soTien*1734);
	}else if (soTien<200){// nho hon 200 la bac 3 
		printf ("Gia dien bac 3 la: 2.014d \n");
		printf ("So tien phai tra la: %0.2fVND\n ",soTien*2014);
	}else if (soTien<300){//neu hon 300 la bac 4 
		printf ("Gia dien bac 4 la: 2.536d \n");
		printf ("So dien phai tra la: %0.2fVND\n ",soTien*2536); 
	}else if (soTien<400){//neu nho hon 400 la bac 5
		printf ("Gia dien bac 5 la: 2.834d \n");
		printf ("So tien phai tra la: %0.2fVND\n ",soTien*2834); 
	}else{//con lai la bac 6
		printf ("Gia dien bac 6 la: 2.927d \n");
		printf ("So tien phai tra la: %0.2fVND\n ",soTien*2927);}	
	} 
			 
}

void chucnang5(){

		
}
void chucnang6(){
	float tien, vay, lai, trahangthang, tong;
	int i;
	
	printf ("\nMoi nhap so tien can vay: ");
	scanf ("%f", &vay);
	printf ("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai");
	
	trahangthang = vay / 12;
		
	for (i = 1; i <= 12; i++){
		lai = vay * 0.05;
		tong = lai + trahangthang;
		vay -= trahangthang;
		printf ("\n%d\t%2.f\t\t%2.f\t\t%2.f\t\t\t%2.f", i, lai, trahangthang, tong, vay);}
		
	printf ("\n");

		
}
void chucnang7(){

		
}
	struct sinhVien{
	char MSSV[50];
	char tenSV[50];
	char nganhHoc[50];
	int tuoi;
	float diemTB;
	};

void sinhVien(int n, struct sinhVien nhomFPT[]){	
				for (int i = 0; i < n; i++){
					printf ("Nhap ma so sinh vien: ");
					fflush (stdin);	
					gets (nhomFPT[i].MSSV);
					printf ("Nhap ten sinh vien: ");
					fflush (stdin);
					gets (nhomFPT[i].tenSV);
					do{
					printf("nhap tuoi sinh vien: ");
					scanf("%d",&nhomFPT[i].tuoi);						
					}while(nhomFPT[i].tuoi<0);
					printf ("Nhap nganh hoc sinh vien: ");
					fflush (stdin);
					gets (nhomFPT[i].nganhHoc);
					do{
					printf ("diem trung binh cua sinh vien: ");
					scanf ("%f",&nhomFPT[i].diemTB);	
					}while(nhomFPT[i].diemTB<0 || nhomFPT[i].diemTB>10); 
					
				}
				
	
}
void sapXep(int n, struct sinhVien nhomFPT[]){
	  for (int i = 0; i < n; i++){
        for (int j = n; j > i; j--){
            if(nhomFPT[j].diemTB > nhomFPT[j - 1].diemTB){
                struct sinhVien dstamthoi = nhomFPT[j];
                nhomFPT[j] = nhomFPT[j - 1];
                nhomFPT[j - 1] = dstamthoi;}             
            }
        }

}
void xuat(int n, struct sinhVien nhomFPT[]){   
		for (int i = 0; i < n; i++){
		printf ("STT:%d\nMSSV: %s\nten sinh vien: %s\ntuoi sinh vien: %d\nnganh hoc: %s\ndiem trung binh: %g\n\n", (i + 1), nhomFPT[i].MSSV, nhomFPT[i].tenSV,nhomFPT[i].tuoi,nhomFPT[i].nganhHoc,nhomFPT[i].diemTB);
		}            
}
void timSV(int n, struct sinhVien nhomFPT[]){
	char MSSV[10];
	printf ("\nchuc nang tim sinh vien muon\n");
	printf ("\n");
	printf ("nhap MSSV muon tim: ");
	fflush (stdin);	
	gets(MSSV);

	for (int i = 0; i < n; i++){
		if (strcmp (nhomFPT[i].MSSV,MSSV)== 0){
			printf ("STT:%d\nMSSV: %s\nten sinh vien: %s\ntuoi sinh vien: %d\nnganh hoc: %s\ndiem trung binh: %g\n\n", (i + 1), nhomFPT[i].MSSV, nhomFPT[i].tenSV,nhomFPT[i].tuoi,nhomFPT[i].nganhHoc,nhomFPT[i].diemTB);
		}
	}

}

	
void chucnang8(){
	int n;
	struct sinhVien nhomFPT[40];
		printf ("nhap so luong sinh vien muon thong ke: ");
	scanf ("%d",&n);
	sinhVien(n,nhomFPT);
 	sapXep(n,nhomFPT);
	xuat(n,nhomFPT);
	timSV(n, nhomFPT);
}
void chucnang9(){
		
}
    struct PhanSo{
	int tu;
	int mau;
}; 

struct PhanSo nhap(){
	struct PhanSo phanso;
	
	printf ("\nMoi nhap tu so: ");
	scanf ("%d", &phanso.tu);
	do{
	printf ("Moi nhap mau so: ");
	scanf ("%d", &phanso.mau);}
	while (phanso.mau == 0);
	
	return phanso;
}

struct PhanSo cong(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo tong;
	if (so1.mau == so2.mau){
	tong.tu = so1.tu + so2.tu;
	tong.mau = so1.mau;}
	else {
	tong.tu = so1.tu * so2.mau + so2.tu * so1.mau;
	tong.mau = so1.mau * so2.mau;
	}
	return tong;
}

struct PhanSo tru(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo hieu;
	if (so1.mau == so2.mau){
	hieu.tu = so1.tu - so2.tu;
	hieu.mau = so1.mau;}
	else {
	hieu.tu = so1.tu * so2.mau - so2.tu * so1.mau;
	hieu.mau = so1.mau * so2.mau;
	}
	return hieu;
}

struct PhanSo nhan(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo tich;
	tich.tu = so1.tu * so2.tu;
	tich.mau = so1.mau * so2.mau;
	return tich;
}
	
struct PhanSo chia(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo thuong;
	thuong.tu = so1.tu * so2.mau;
	thuong.mau = so1.mau * so2.tu;
	return thuong;
}

void chucnang10(){
	struct PhanSo phanso1 = nhap();
	
	struct PhanSo phanso2 = nhap();
	
	struct PhanSo tong = cong(phanso1, phanso2);
	
	struct PhanSo hieu = tru(phanso1, phanso2);
	
	struct PhanSo tich = nhan(phanso1, phanso2);
	
	struct PhanSo thuong = chia(phanso1, phanso2);
	
	printf ("\nTong 2 phan so la: %d/%d + %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, tong.tu, tong.mau);
	
	printf ("\nHieu 2 phan so la: %d/%d - %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, hieu.tu, hieu.mau);
	
	printf ("\nTich 2 phan so la: %d/%d * %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, tich.tu, tich.mau);
	
	printf ("\nThuong 2 phan so la: %d/%d : %d/%d = %d/%d \n", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, thuong.tu, thuong.mau);
}


void menu (){
	printf ("\n+=====================MENU=====================+\n");
	printf ("|1.kiem tra so nguyen,nguyen to va chi phuong  |\n");
	printf ("|2.tim cac so boi uoc chung cua 2 so	       |\n");
	printf ("|3.chuong trinh tinh tien cho quan karaoke     |\n");
	printf ("|4.chuong trinh tien tien dien hang thang      |\n");
	printf ("|5.chuong trinh doi tien	 	       |\n");
	printf ("|6.chuong trinh lai xuat ngan hang tra gop     |\n");
	printf ("|7.chuong trinh vay tien mua xe 	       |\n");
	printf ("|8.chuong trinh sap xep thong tin sinh vien    |\n");
	printf ("|9.chuong trinh xay dung game fpoly - lott     |\n");
	printf ("|10.chuong trinh tinh toan phan so             |\n");
	printf ("|0, thoat chuong trinh			       |\n");	
	printf ("+=====================END======================+\n");
	printf ("xin moi nhap vao (1,2,3,4,5,6,7,8,9,10,0)\n");
}
void chucNang(){
	int chon;
	 scanf ("%d",&chon);
	 switch(chon){
	 		case 1:
	 		chucnang1();
	 		system("pause");
	 		break;
	 		case 2:
	 		chucnang2();
	 		system("pause");
			 break;
	 		case 3: 
	 		chucnang3();
	 		system("pause");
	 		break;
	 		case 4:
	 		chucnang4();
	 		system("pause");
	 		break;
	 		case 5:
	 		chucnang5();
	 		system("pause");
	 		break;
	 		case 6:
	 		chucnang6();
	 		system("pause");
	 		break;
	 		case 7:
	 		chucnang7();
	 		system("pause");
	 		break;
	 		case 8:
	 		chucnang8();
	 		system("pause");
	 		break;
	 		case 9:
	 		chucnang9();
	 		system("pause");
	 		break;
	 		case 10:
	 		chucnang10();
	 		system("pause");
	 		break;
			case 0: exit(0);
			system("pause");
	    default:
			printf ("xin moi nhap lai vi ban da chon khong  trong menu \n");
			system("pause");		
	 }
}
int main(){
	while (true){
		system ("cls");
		gioiThieu();
		menu();
		chucNang();
	}
	return 0;

}
