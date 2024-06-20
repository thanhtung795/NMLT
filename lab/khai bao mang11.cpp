#include <stdio.h>

void nhap(int a[],int &n){
	printf ("nhap so gia tri phan tu: ");
	scanf ("%d",&n);
	for (int i = 0;i<n;i++){
	printf ("\na[%d] = ",i);
	scanf ("%d",&a[i]);
	}
	printf ("cac mang da nhap: ");
	for (int i = 0;i<n;i++){
		printf ("%d ",a[i]);
	}
	printf ("\ncac phan tu chua duoc sap xep\n");
}
void xepTD(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for (j = n-1; j>i ; j--){
			if (a[j] < a[j-1])
			{
				int tmp = a[j];
				a[j] = a[j-1];
				a[j-1]= tmp;
				
			}
		}
	}printf ("\ncac phan tu da duoc xep tang dan: \n");
}
void xuat (int a[],int n){
	int i;
	
	for(i=0;i<n;i++){
		
	printf ("%d ",a[i]);
	}
}
int main (){
	int a[30];
	int n;
	nhap(a,n);
	xuat(a,n);
	xepTD(a,n);
	xuat(a,n);
}
