#include <stdio.h>

void kiemTraNam(){//ham kiem tra nam 
	int nam;//bien nam
	int kiemTra = 0;// bien kiem tra
	printf ("\nxin moi nhap nam muon kiem tra: ");
	scanf("%d",&nam);
	if (nam <0){//neu nam nho hon 0 thi chuong trinh se lap lai
		
		while (true){
		printf ("\nnam khong the la so am vui long nhap lai");
		kiemTraNam();//neu ko thoa dk vong lap while se goi lai ham kiem tra nam
		break;
		}	
	}
	if (nam%400==0 || nam%4==0 && nam%100!=0){//neu nam chia 400 lay du ma = 0 hoac nam chi lay du 4 va nam % khong = 0
		kiemTra =1;//bien kiem tra se tang len 1
	}
	if (kiemTra == 1){//neu kiem tra tang len 1 se tra ket hoa ve la  nam nhuon
		printf ("nam %d la nam nhuan\n",nam);
	}else {//va nguoc lai = 0 se la kong nhuon
		printf ("nam %d la nam khong nhuan\n",nam);
	}
}

int main (){//ham chay chinh
	kiemTraNam();//ham goi
}

