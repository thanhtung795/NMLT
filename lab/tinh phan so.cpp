#include <stdio.h>

struct PhanSo{
	int tu;
	int mau;
};
struct PhanSo nhap(){
	struct PhanSo phanso;
	printf ("moi nhap tu so: ");
	scanf("%d",&phanso.tu);
	do{
	printf ("moi nhap mau so: ");
	scanf("%d",&phanso.mau);
	}while (phanso.mau == 0);
}
struct PhanSo cong(struct PhanSo so1,struct PhanSo so2){
	struct PhanSo tong;
	if(so1.mau == so2.mau)
	{
		tong.tu = so1.tu + so2.tu;
		tong.mau= so1.mau;
	}
	else 
	{
		tong.tu = so1.tu * so2.mau + so2.tu * so1.mau;
		tong.mau = so1.mau * so2.mau;
	}
}
struct PhanSo tru(struct PhanSo so1,struct PhanSo so2 ){
	struct PhanSo hieu;
	if(so1.mau == so2.mau)
	{
		hieu.tu = so1.tu - so2.tu;
		hieu.mau= so1.mau;
	}
	else 
	{
		hieu.tu = so1.tu * so2.mau + so2.tu * so1.mau;
		hieu.mau = so1.mau * so2.mau;
	}
}
struct PhanSo nhan(struct PhanSo so1,struct PhanSo so2 ){
	struct PhanSo tich;
	tich.tu = so1.tu * so2.tu;
	tich.mau = so1.mau * so2.mau;
}
struct PhanSo chia(struct PhanSo so1,struct PhanSo so2){
	struct PhanSo thuong;
	thuong.tu = so1.tu * so2.mau;
	thuong.mau = so1.mau * so2.tu;
}
void chucnang10(){
	struct PhanSo so1 = nhap();
	struct PhanSo so2 = nhap();
	struct PhanSo tong = cong(so1, so2);
	
	struct PhanSo hieu = tru(so1, so2);
	
	struct PhanSo tich = nhan(so1, so2);
	
	struct PhanSo thuong =chia(so1, so2);
	printf ("\nTong 2 phan so la: %d/%d + %d/%d = %d/%d ", so1.tu, so1.mau, so2.tu, so2.mau, tong.tu, tong.mau);
	
	printf ("\nHieu 2 phan so la: %d/%d - %d/%d = %d/%d ", so1.tu, so1.mau, so2.tu, so2.mau, hieu.tu, hieu.mau);
	
	printf ("\nTich 2 phan so la: %d/%d * %d/%d = %d/%d ", so1.tu, so1.mau, so2.tu, so2.mau, tich.tu, tich.mau);
	
	printf ("\nThuong 2 phan so la: %d/%d : %d/%d = %d/%d \n", so1.tu, so1.mau, so2.tu,so2.mau, thuong.tu, thuong.mau);

}
int main(){
	chucnang10();
}
