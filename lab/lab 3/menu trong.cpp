#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
void chucnang1(){
	float diem;
	printf ("nhap so diem sinh vien: ");
	scanf("%f",&diem);
	if (diem<0 || diem>10){
		printf (" da nhap sai so diem , xin  hay nhap lai"); //nhap thap hon 0 hoac cao hon 10
	}
	else if (diem>=9){
		printf ("hoc luc xuat sac ");
	}
	else if (diem>=8){
		printf ("hoc luc gioi ");
	}
	else if (diem>=6.5){
		printf ("hoc luc kha ");
	}
	else if (diem>=5){
		printf ("hoc luc trung binh ");
	}
	else if (diem>=3.5){
		printf ("hoc luc yeu ");
	}
	else{
		printf ("hoc luc kem ");
	}

}
void chucnang2(){
float a,b,x; //pt bac 1
	printf ("nhap he so cua phuong trinh ax + b = c\n");
	printf ("nhap he so a = ");
	scanf("%f",&a);
	printf ("nhap he so b = ");
	scanf("%f",&b);
	if (a==0 &&b==0){
		printf("phuong trinh co vo so nghiem");
	}
	else if (a==0 && b!=0){
		printf ("phuong trinh vo nghiem");
	}
	else {
		x = -b/a; 
		printf ("phuong trinh co nghiem la %0.2f" ,x );
	}	
}
void chucnang3(){
		float a,b,c,x1,x2,delta;
	printf ("phuong trinh bac hai la  ax^2 +bx + c = 0  \n");
	printf ("nhap vao so a = ");
	scanf ("%f",&a);
	printf ("nhap vao so b = ");
	scanf ("%f",&b);
	printf ("nhap vao so c = ");
	scanf ("%f",&c);
	if (a==0){
		float x = -c/b;
		printf ("phuong trinh thanh bx + c = 0: x = %0.2f",x);

	}else {
		delta = b*b - (4*a*c);
		if (delta < 0){
			printf("phuong trinh vo nghiem");
		} else if (delta==0){
			printf ("phuong trinh co hai nghiem kep x = %f",-b/2*a);
		}else if (delta >0){
			x1 = (-b-sqrt(delta)/2*a);
			x2 = (-b+sqrt(delta)/2*a);
			printf ("phuong trinh co hai nghiem phan biet\n");
			printf ("x1 = %0.2f\n",x1);
			printf ("x2 = %0.2f",x2);
		}
	}
}
void chucnang4(){
	const float bac1 = 1678;//tu bac 1 - bac 6 la gia tri co dinh cua bien tinh tien dien
	const float bac2 = 1734;
	const float bac3 = 2014;
	const float bac4 = 2556;
	const float bac5 = 2834;
	const float bac6 = 2927;
	int kwh; //bien gia tri cua kwh 
	float tienDien = 0;// bien tien dien
	printf("so kwh tieu thu hang thang: ");
	scanf("%d",&kwh);
	if (tienDien <50){
		tienDien = kwh*bac1; // so tien bang so kwh nhan voi bac 1  
	}else if (tienDien<100){
		tienDien = 50*bac1 + (kwh - 50)*bac2;// so tien se bang bac 1 nhan voi 50 + so kwh tru cho -50 roi nhan voi bac 2
	}else if (tienDien<200){
		tienDien = 50*bac1 + 50*bac2 + (kwh - 100)*bac3; //so tien se bang nhan voi 50  cua bac 1 + bac 2 + cho so kwh va - 100 nhan voi bac 3
	}else if (tienDien<300){
		tienDien = 50*bac1 + 50*bac2 +100*bac3+(kwh - 200)*bac4; //tuong tu nhan voi 50 bac 1,2 va + 100 cua bac 3 + cho kwh - cho 200 nhan voi bac 4
	}else if (tienDien<400){
		tienDien = 50*bac1 + 50*bac2 +100*bac3+100*bac4+(kwh - 300)*bac5; // tuong tu nhu tren  nhan voi cac bac o tren va - cho khoang tu 300 - 400
	}else {
		tienDien = 50*bac1 + 50*bac2 +100*bac3+100*bac4+ 100*bac5+(kwh - 400)*bac6;// tuong tu nhu tren
	}
	printf ("tong tien dien tieu thu trong thang la %d\t -> %.2fVND\t",kwh,tienDien);
}
void chucnang5(){
	float diemChuyen,diemGiua,diemCuoi,diemTong;//bien cua trung binh cua 3 dau diem
		printf ("\ndiem mon hoc tren co so 3 dau diem\n");
	printf ("nhap diem chuyen can = ");
	scanf("%f",&diemChuyen);
	printf ("nhap diem giua ki = ");
	scanf("%f",&diemGiua);
	printf ("nhap diem cuoi ki = ");
	scanf("%f",&diemCuoi);
 	if (diemChuyen <0 || diemChuyen >10){ //3 3 dieu kien nay co nghia la chi dc nhap tu 0 - 10 neu nhap hon hay thap hon se khong duoc
 		printf ("so diem ban nhap khong dung nen se tro ve menu chinh ");
	}else if (diemGiua<0 || diemGiua >10){
		printf ("so diem ban nhap khong dung nen se tro ve menu chinh ");
	}else if (diemCuoi<0||diemCuoi >10){
		printf ("so diem ban nhap khong dung nen se tro ve menu chinh ");
	}else {//nguoc lai neu thoa man 3 dieu kien tren se tinh so dieu cua 3 dau diem
		diemChuyen*10/100;
		diemGiua*30/100;
		diemCuoi*60/100;
		diemTong = (diemChuyen+diemGiua+diemCuoi)/3;// cong 3 dau diem va chia cho tong he so
		printf ("diem tong cua mon hoc: %.2f",diemTong);
		
}
}
void menu (){
		printf ("\n+=====================MENU==================+\n");
	printf ("+++++ 1-> kiem tra hoc luc cua sinh vien\n");
	printf ("+++++ 2-> giai phuong trinh bac 1\n");
	printf ("+++++ 3-> giai phuong trinh bac 2\n");
	printf ("+++++ 4-> tinh tien dien hang thang\n");
	printf ("+++++ 5-> bai lam them tinh diem trung binh cua mon  \n");
	printf ("+++++ 0-> de ket thuc chuong trinh \n");
	printf ("+===========================================+\n\n");
	printf ("xin moi nhap vao (1,2,3,4,0)\n");
	 int chon;
	 scanf ("%d",&chon);
	 switch(chon){
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
			case 0: exit(0);
	    default:
			printf ("xin moi nhap lai vi ban da chon khong  trong menu \n");

			 
	 		
	 }
	 
}
int main(){
	while (true){
		menu();
	}
	return 0;

}
