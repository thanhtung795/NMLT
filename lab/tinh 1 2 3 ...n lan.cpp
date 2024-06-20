#include <stdio.h>

void tinh(int n){
	int tong = 0;
	printf ("1 + 2 + 3 +........................... + n\n");
	printf ("nhap n vao: ");
	scanf ("%d",&n);
	for (int i = 0; i<n;i++){
		tong +=i;//tong+= i = tong + i 
	}
	printf ("1 + 2+  3 +.......................+ %d\n",tong);
}
int main (){
	int n;
	int tong = 0;
	tinh(n);
}
