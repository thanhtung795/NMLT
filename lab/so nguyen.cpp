#include <stdio.h>
void soNguyen(int x){
		printf ("nhap so n de kiem tra so nguyen: ");
		scanf ("%d",&x);
		if(x%2== 0){
			printf ("%d la so nguyen",x);
		}else {
			printf ("%d khong phai la so nguyen",x);
		}
}
int main (){
	int x;
	soNguyen(x);
}
