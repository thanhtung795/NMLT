#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void chucnang1(){
 printf ("Tim cac so nguyen to, chinh phuong, so nguyen\n");
 	int x;
 	
	int count = 0 ;//bien demn
	printf ("nhap vao x = ");
	scanf ("%d",&x);
	int i;
	if (x < 0){
		printf ("vui long nhap lai so lon hon 0\n\n");
		while (true){
			chucnang1();
			break;
		}
	} else {
	for (i=2;i<x;i++){//x se chay den i 
		if (x%i==0){//neu x chia lay du ma = 0 
		count++;//  thi bien count se tang len 1
		break;
		}
	}
	if (count == 0){//neu count = 0 ma chay tu x den i thi se laa so nguyen to
		printf("%d la so nguyen to\n\n",x);
	}
	else 
	{
		printf ("%d khong phai la so nguyen to\n\n",x); //neu tang len 1 thi se khac 0 neu khac 0 ti se ko phai la so nguyen to
	}
for (i=2;i<x;i++){//neu x chay den i ma nhan voi 1 so chinh no ma = x
		if (i*i==x){
		count++;//count se tang len 1 
		break;// khi da thoa man dieu kien break se thoat chuong trinh
		}
	}
	if (count == 0){//neu count  0 thi khong chinh phuong
		printf("%d khong phai la so chinh phuong \n\n",x);
	}
	else 
	{
		printf ("%d la so chinh phuong\n\n",x);
	}	
	if (x == (int)x){
		
	printf("%d la so nguyen\n",x);
	}	
	else {
	printf ("%d khong la so nguyen\n",x);
	}
	
	}
	}
void chucnang2(){
	
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

		
}
void chucnang7(){

		
}
void chucnang8(){

		
}
void chucnang9(){
		
}
void chucnang10(){

		
}

void menu (){
	system ("cls");
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
		menu();
	}
	return 0;

}
