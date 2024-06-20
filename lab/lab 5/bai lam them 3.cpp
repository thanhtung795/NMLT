#include <stdio.h>

void nhap(int *n,int *mang){
	while (*n<0){
		printf ("xin nhap n > 0");
		scanf("%d",n);
	}
	
	int i;
	for (i=0; i < *n ;i++){
		printf ("[%d] = ",i);
		scanf ("%d",&mang[i]);
	}
}
void sapXeptang(int *arr ,int n){
	int i;
	for (i=0;i<n;i++){
		for (int j=i;j>i;j++){
			if (j<i){
				int tmp = j;
				j = i;
				i = tmp;
			}
			
			 
		}
	}
}
void xuat(int *mang, int n){
	int i;
	for (i=0;i<n;i++){
		printf ("%d",&mang[i]);
	}printf ("\n");
}
int main(){
	int n = 0;
	int mang[10];
	nhap(*mang,n);
	printf ("truoc khi sap xep:\n");
	xuat(mang, n);
	sapXeptang(mang,n);
	xuat(mang,n);
}
