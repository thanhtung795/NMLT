#include<stdio.h>
#include <stdlib.h>
#include <string.h>
void chucnang1(){
		float min, max;//khai boa bien mim, max
	int i = min;//khai bao i = min
	int tong,n; //bien, n
	printf ("nhap so min max co chia het cho 2 la\n");
	printf ("nhap min = ");//nhap min
	scanf ("%f",&min);
	printf ("nhap max = "); //nhap max
	scanf ("%f",&max);
	//vong lap chay tu max den i 
	while (i <= max){
	if (i%2==0){
		tong+=i; //tong =  tong + i
		n++;//n la dong vai tro  1 bien diem
	}i++; //i + them 1 s
	}
	float trungBinh =  tong/n;// xu li du lieu  trung binh
	printf ("TRUNG BINH TONG CHIA HET CHO 2 LA %.2f",trungBinh);
}
void chucnang2(){
	int x;// bien x
	int count;//bien count nhu la 1 bien dem
	printf ("tim so nguyen to la so chia het cho chinh no\n");
	printf ("nhap vao x = ");
	scanf ("%d",&x);
	int i;
	for (i=2;i<x;i++){// nghia la x se chay den i 
		if (x%i==0){//neu x chia co du ma = 0 thi count se tang len 1
		count++;
		}
	}
	if (count == 0){
		printf("x la so nguyen to ");//neu count = 0 thi se la so nguyen to
	}
	else 
	{
		printf ("x khong phai la so nguyen to");// nguoc lai e ko phai la so nguyen to
	}
}
void chucnang3(){
	int x;					
	int count;// la bien dem 
	printf ("tim so tim so chinh phuong\n");
	printf ("nhap vao x = ");
	scanf ("%d",&x);
	int i;
	for (i=2;i<x;i++){//neu x chay den i ma nhan voi 1 so chinh no ma = x
		if (i*i==x){
		count++;//count se tang len 1 
		break;// khi da thoa man dieu kien break se thoat chuong trinh
		}
	}
	if (count == 0){//neu count  0 thi khong chinh phuong
		printf("x khong phai la so chinh phuong ");
	}
	else 
	{
		printf ("x la so chinh phuong");
	}
}void chucnang4 (){		
	float  x;//bien x 
	printf ("chuong trinh tim so nguyen\n");
	printf ("moi nhap vao x = ");
	scanf ("%f",&x);
	if (x == (int)x){//neu = so ep kieu du lieu ve int thi se la so nguyen con ko thu nguoc lai
		
	printf("%.2f la so nguyen\n\n",x);
	}	
	else {
	printf ("%.2f khong la so nguyen\n\n",x);
	}
	
	}

void menu(){
	printf ("\n+=====================MENU==================+\n");
	printf ("| 1-> tim min max va chia trung binh        |\n");
	printf ("| 2-> tim so nguyen to                      | \n");
	printf ("| 3-> tim so chinh phuong                   |\n");
	printf ("| 4-> bai tap lam them tim so nguyen        |\n");
	printf ("| 0-> de ket thuc chuong trinh              | \n");
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
