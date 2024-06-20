#include <stdio.h>

void nhap(int n, int a[]){
	while ((n)<= 0) {
	printf ("moi nhap so luong mang muon nhap: ");
	scanf ("%d",&n);
}
	for	(int i = 0 ; i < n ; i++ ){
		printf ("nhap gia tri phan tu a[%d]: ",i);
		scanf ("%d",&a[i]);
	}
	float tong = 0,tb =0;
	int count = 0 ;
	for (int i = 0; i < n; i++){
			if (a [i] % 3 == 0){
				tong += a [i];
				count ++;
			}
		}
	tb = tong / count;
	printf ("gia tri tb la: %.2f",tb);	
}
void xuat(int n,int a[]){
	int i;
	for (i = 0; i < n; i++){
		printf ("thu tu phan tu a[%d] la: ", a[i]);
	}
	
}
int main (){
	int a[100];
	int n =0 ;
	nhap(n,a);
	xuat(n,a);
	return 0;
}
