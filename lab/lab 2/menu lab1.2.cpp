#include<stdio.h>
int main(){
	float a,b,c;//khai bao bien tong hieu
	float chieuDai,chieuRong;//bien hcn
	const float Pi = 3.14;// bien hinh tron
	float R; //bien hinh tron
	a=5;b=6,c=7;// gia tri cua tam giac
	float dai,cao;
	float diemToan,diemLy,diemHoa,diemTrungBinh;//bien diem trung binh
	while (true){
	printf ("\n\n--------MENU-------\n"); //menu bai tap lab 2
	printf ("\n1 => bai tinh tong hieu a va b\n"); // tinh tong hieu a va b
	printf ("2 => bai tinh dien tich va chu vi hcn\n"); //tinh dien tich va chu vi hcn
	printf ("3 => bai tap tinh dien tich  va chu vi hinh tron\n"); //tinh dien tich va chu vi hinh tron
	printf ("4 => bai tap tinh diem trung binh cua sinh vien\n"); //tinh diem trung binh
	printf ("5 => bai tap lam them tinh chu vi va dien tinh hinh  tam giac thuong\n");
	printf ("6 => bai lam theo tinh tich va thuong cua a va b\n");
	printf ("0 => ket thuc chuong trinh\n");
	printf ("-----------------------\n");
	printf ("xin moi chon bai tap: ");
	int chon = 1;
	scanf("%d",&chon);
	switch (chon){
		case 1: 
			// chuong trinh tong hieu 2 so nguyem
			//tinh tong, hieu hai so a va b 
			printf ("bai tap tinh tong hieu a va b\n");
			printf ("nhap vao so thu nhat = "); 
			scanf("%f",&a);//nhap so a
			printf ("nhap vao so thu hai = "); 
			scanf("%f",&b); //nhap so b
			//tong cua hai so
			printf ("tong cua hai so a va b la:  %.2f \n",a+b);
			//hieu cua hai so
			printf ("hieu cua hai so a va b la : %.2f \n",a-b);
			break;
			case 2: 
			printf ("tinh dien tich hinh hcn\n");
 			printf("chieu dai la: ");scanf("%f",&chieuDai);
			printf("chieu rong la: ");scanf("%f",&chieuRong);
 			//dien tich HCN
 			printf("dien tich HCN: %0.2f * %0.2f = %0.2f\n",chieuDai,chieuRong,chieuDai*chieuRong);
 			//chu vi HCN
 			printf("chu vi HCN: (%0.2f + %0.2f)*2 = %0.2f",chieuDai,chieuRong,(chieuDai+chieuRong)*2);
			break;
			case 3:
				//dien tich va chu vi hinh tron
			printf ("dien tich va chu vi hinh tron\n");
			printf("nhap ban kinh duong tron: ");
			scanf("%f",&R);
			// dien tich
			printf ("dien tich hinh tron la %0.2f\n",R*R*Pi);
			//chu vi
			printf ("chu vi hinh tron la %0.2f\n",R*2*Pi);	
			break;
			case 4: //tim diem trung binh  toan ly hoa
			while(true){
			printf ("nhap diem toan: ");scanf("%f",&diemToan);
			printf ("nhap diem ly: ");scanf("%f",&diemLy);
			printf ("nhap diem hoa: ");scanf("%f",&diemHoa);
			if (diemToan<0 ||diemToan>10){
				printf ("xin vui long chon lai va nhap so diem\n");
			}else if (diemLy<0 || diemLy>10){
				printf ("xin vui long nhap lai va nhap so diem\n");
			}else if (diemHoa<0 ||diemHoa>10){
				printf ("xin vui long nhap lai va nhap so diem\n");
		   }else {
		   	   diemTrungBinh = ((diemToan)*3+(diemLy)*2+diemHoa)/6;
			printf("diem trung binh cua toan ly hoa: %0.1f\n ",diemTrungBinh);				
			break;
			case 5:
			printf ("chuong trinh tinh chu vi va dien tich tam giac\n");
				printf (" nhap vao so a = ");
				scanf ("%f",&dai);
				printf (" nhap vao so b = ");
				scanf ("%f",&cao);
				printf ("chu vi hinh tam giac la %.2f\n",(dai*cao)/2);
				printf ("dien tich hin tam giac la %.2f",a+b+c);
				break;
			case 6:
			printf ("chuong trinh tich va thuong cua a va b\n");//xuat ra man hinh dong chu chuong trinh
			printf ("nhap vao so a = "); //xuat ra  nhap vao so a
			scanf ("%f",&a);//nhap so a
			printf ("nhap vao so b = ");// xuat ra nhap vao so b
			scanf ("%f",&b);//nhap vao so b
			printf ("tich cua a va b la %.2f\n",a*b);// xu  li du lieu a * b 
			printf ("thuong cua a va b la %.2f\n",a/b); // xu li du lieu a / b
			break;
			case 0:
				printf("chuong trinh ket thuc");
			return 0;	
			default: printf ("\nlua chon ban khong co trong menu vui long nhap lai\n");	
			}
		   }		
	
	} 
	
			}	
	
	return 0;
}
