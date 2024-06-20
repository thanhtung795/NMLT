#include<stdio.h>
int main(){
	int a,b;//khai bao bien tong hieu
	float chieuDai,chieuRong;//bien hcn
	const float Pi = 3.14;// bien hinh tron
	float R; //bien hinh tron
	float diemToan,diemLy,diemHoa,diemTrungBinh;//bien diem trung binh
	while (true){
	printf ("\n\n--------MENU-------\n"); //menu bai tap lab 2
	printf ("\n1 => bai tinh tong hieu a va b\n"); // tinh tong hieu a va b
	printf ("2 => bai tinh dien tich va chu vi hcn\n"); //tinh dien tich va chu vi hcn
	printf ("3 => bai tap tinh dien tich  va chu vi hinh tron\n"); //tinh dien tich va chu vi hinh tron
	printf ("4 => bai tap tinh diem trung binh cua sinh vien\n"); //tinh diem trung binh
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
			printf ("nhap vao so thu nhat = "); scanf("%d",&a);//nhap so a
			printf ("nhap vao so thu hai = "); scanf("%d",&b); //nhap so b
			//tong cua hai so
			printf ("tong cua hai so a va b la :%d + %d = %d \n",a,b,a+b);
			//hieu cua hai so
			printf ("hieu cua hai so a va b la :%d - %d = %d \n",a,b,a-b);
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
			case 0:
				printf("chuong trinh ket thuc");
			return 0;	
			}		
		   }default: printf ("\nlua chon ban khong co trong menu vui long nhap lai\n");
	
	} 
	
			}	
	
	return 0;
}
