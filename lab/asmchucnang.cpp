#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

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
   int giobatdau, gioketthuc, thoigian, giogiamgia;
   float tien, giamgia, giolonhon4; 
   const int gio = 4;
    
   printf ("\nGio bat dau: ");
   scanf ("%d", &giobatdau);
   printf ("Gio ket thuc: ");
   scanf ("%d", &gioketthuc);
   thoigian = gioketthuc - giobatdau;
   giogiamgia = thoigian - 4;
   tien = thoigian*50000;
   giamgia = giogiamgia*50000;
   
   if (giobatdau >= 12 && gioketthuc <= 23){
       if (thoigian <= 4 && giobatdau < 14 || giobatdau >= 17){
           printf ("\nSo tien can thanh toan la: %g\n", tien);
       } else if (thoigian <= 4 && giobatdau >= 14 && giobatdau <17){
           printf ("\nSo tien can thanh toan la: %g\n", tien-(tien*0.1));
       } else if (thoigian > 4 && giobatdau < 14 || giobatdau >= 17){
    giolonhon4 = (gio*50000)+(giamgia-(giamgia*0.3));       
           printf ("\nSo tien can thanh toan la: %g\n", giolonhon4);
       } else {
    giolonhon4 = (gio*50000)+(giamgia-(giamgia*0.3));       
           printf ("\nSo tien can thanh toan la: %g\n", giolonhon4-(giolonhon4*0.1));
       } }
    else {
		 printf ("\nQuan chi hoat dong trong khoang 12h-23h\n");
	}
}

void chucnang4(){
	int kwh;
	
	do{
	printf ("\nMoi nhap so kWh dien: ");
	scanf ("%d", &kwh);}
	while (kwh < 0);
	if (kwh == 0){
		printf ("\nKhong can tra tien\n");}
	else{
	if (kwh >= 0 && kwh <= 50){
		printf ("So tien phai tra la: %g\n", 50.000*1.687);}
		else if (kwh <= 100){
			printf ("So tien phai tra la: %g\n", 50.000*1.734);}
		else if (kwh <= 200){
			printf ("So tien phai tra la: %g\n", 50.000*2.014);}
		else if (kwh <= 300){
			printf ("So tien phai tra la: %g\n", 50.000*2.536);}
		else if (kwh <= 400){
			printf ("So tien phai tra la: %g\n", 50.000*2.834);}
	else{
		printf ("So tien phai tra la: %g\n", 50.000*2.927);}
    }
}

void chucnang5(){
    int tien, menhgia[9] = {500, 200, 100, 50, 20, 19, 5, 2, 1}, i = 0;
    int soto[9] = {0};
	
	do{
		printf ("\nMoi nhap so tien: ");
		scanf ("%d", &tien);}
	while(tien <= 0);	
	while (i < 9){
		if (tien > menhgia[i]){
			break;}
		else{
			i++;}
	}
	
	while (i<9){
		soto[i] = tien / menhgia[i];
		tien = tien % menhgia[i];
		i++;}
	
	printf ("\nDoi duoc:");
	
	for (i=0; i<9; i++){
		if (soto[i] > 0){
			printf ("\n%d to %d", soto[i], menhgia[i]);}
	}
	printf ("\n");
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
    int i;
	float phanTram;
	do{
	printf ("\nMoi nhap so phan tram tien vay: ");
	scanf ("%f", &phanTram);}
	
	while (phanTram <= 0 || phanTram > 1.0);
	double phanTramTraTruoc = 1.0 - phanTram;
	double tien = 500000000;
	
	double tienTraTruoc = tien * phanTramTraTruoc;
	tien -= tienTraTruoc;
	
	double traHangNam = tien / 24;
	
	printf ("So tien tra truoc la: %.2lf", tienTraTruoc);
	printf ("\nSo tien con lai phai tra\n");
	printf ("\nKy han\tTien lai phai tra\tTien goc phai tra\tTong tien phai tra\t So tien con lai phai tra");
	
	for (i = 1; i <= 24; i++){
		double laiPhaiTra = tien * 7.2;
		double tong = laiPhaiTra + traHangNam;
		tien -= traHangNam;
		
		printf ("\n%d \t%.2lf \t\t%.2lf  \t\t%.2lf  \t\t%.2lf", i, laiPhaiTra, traHangNam, tong, tien);}
		
	printf ("\n");		
}

//Start Asm2.8:

    struct SinhVien{
    char ten[20];
    int tuoi;
    float diem;
    char hocLuc[20];
};

void nhapThongtin(struct SinhVien danhsach [], int *n){
    int i;
    
    printf ("\nMoi nhap so luong sinh vien: ");
    scanf ("%d", n);
    
    for (i = 0; i < *n; i++){
        printf ("\nMoi nhap hoc sinh thu %d: ", (i + 1));
        fflush (stdin);
        gets(danhsach[i].ten);
        
        do{
        printf ("Moi nhap tuoi: ");
        scanf ("%d", &danhsach[i].tuoi);}
        while (danhsach[i].tuoi <= 0);
        
        do{
        printf ("Moi nhap diem: ");
        scanf ("%f", &danhsach[i].diem);}
        while (danhsach[i].diem < 0);}
    }
    
void sapXep(struct SinhVien danhsach[], int n){
    int i, j;
    
    for (i = 0; i < n; i++){
        for (j = n; j > i; j--){
            if(danhsach[j].diem > danhsach[j - 1].diem){
                struct SinhVien dstamthoi = danhsach[j];
                danhsach[j] = danhsach[j - 1];
                danhsach [j - 1] = dstamthoi;}             
            }
        }
}

void hocLuc(struct SinhVien danhsach[], int n){
    int i;
    
    for (i = 0; i < n; i++){
        if(danhsach[i].diem >= 9){
        strcpy(danhsach[i].hocLuc,"Hoc luc xuat sac");}
        
        else if(danhsach[i].diem >= 8){
        strcpy(danhsach[i].hocLuc,"Hoc luc gioi");}
        
        else if(danhsach[i].diem >= 6.5){
        strcpy(danhsach[i].hocLuc,"Hoc lua kha");}
        
        else if(danhsach[i].diem >= 5){
        strcpy(danhsach[i].hocLuc,"Hoc luc TB");}
        
        else {
        strcpy(danhsach[i].hocLuc,"Hoc luc yeu");}       
    }
}

void hienThi(struct SinhVien danhsach[], int n){
    int i;
    
    printf ("\nSTT\tTen sinh vien\t\tDiem\tHoc luc\n");
    
    for (i = 0; i < n; i++){
        printf ("%d\t%s\t\t%g\t%s\n", (i + 1), danhsach[i].ten, danhsach[i].diem, danhsach[i].hocLuc);}        
}

void chucnang8(){
    struct SinhVien danhsach[40];
    int n;
    
    nhapThongtin(danhsach, &n);
    
    sapXep(danhsach, n);
    
    hocLuc(danhsach, n);
    
    hienThi(danhsach, n);

}

//End Asm2.8.

void chucnang9(){
	int a, b;
	
	do{
	printf ("\nMoi nhap 2 so a, b: ");
	scanf ("%d %d", &a, &b);}
	while (a < 0 || b < 0 || a > 15 || b > 15 || a == b);
	printf ("\nSo ban chon la: %d %d", a, b);
	 
	printf("\nKet qua so xo la: ");
	
		int random1 = 1+rand() % 15;
		int random2 = 1+rand() % 15;
	
	printf ("%d %d\n", random1, random2);	 	
	
	if ((a == random1 && b == random1) || (a == random2 && b == random1) ){
		printf ("\nChuc mung ban da trung giai nhat\n");
	}
	else if (a == random1 || b == random1 || a == random2 || b == random2 ){
		printf ("\nChuc ming ban da trung giai nhi\n");
	}
	else 
	printf ("\nChuc ban may man lan sau\n");
    }


//Start Asm2.10:
   
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

void menu(){
    int luachon;
    printf ("\n+-------------------------Menu-------------------------+\n");
	printf ("\n  1.Kiem tra so nguyen");
	printf ("\n  2.Tim uoc so chung va boi so chung cua 2 so");
	printf ("\n  3.Tinh tien cho quan Karaoke");
	printf ("\n  4.Tinh tien dien");
	printf ("\n  5.Chuong trinh doi tien");
	printf ("\n  6.Tinh lai suat vay ngan hang vay tra gop");
	printf ("\n  7.Chuong trinh vay tien mua xe");
	printf ("\n  8.Sap xep thong tin sinh vien");
	printf ("\n  9.Xay dung game Fpoly-LOTT");
	printf ("\n  10.Chuong trinh tinh toan phan so");	
	printf ("\n  0.Thoat\n");
	printf ("\n+------------------------------------------------------+");
	printf ("\n\nChon chuong trinh: ");	
	scanf ("%d", &luachon);
	
	switch (luachon){
	    case 1:
	    chucnang1();
	    break;
	    
	    case 2: 
	    chucnang2();
	    break;
	    
	    case 3:
	    chucnang3();
	    break;
	    
	    case 4: 
	    chucnang4();
	    break;
	    
	    case 5:
	    chucnang5();
	    break;
	    
	    case 6:
	    chucnang6();
	    break;
	    
	    case 7:
	    chucnang7();
	    break;
	    
	    case 8:
	    chucnang8();
	    break;
	    
	    case 9:
	    chucnang9();
	    break;
	    
	    case 10:
	    chucnang10();
	    break;
		
		
	    case 0: exit(0);
	    default:
			printf ("xin moi nhap lai\n");
	
	}
}

int main(){
    while(true){
        menu();
    }
    
    return 0;
}



