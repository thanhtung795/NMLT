#include <stdio.h>

int main (){
	int a,b,min,max;
	printf ("Tim gia tri cua min max\n");
	printf ("nhap vao gia tri cua a: ");
	scanf ("%d",&a);
	printf ("nhap vao gia tri cua b: ");
	scanf ("%d",&b);
	min = a;
	max = b;
	if (a > b){
		max = a;
		min = b;
	}else if (a<b){
	max = b;
	min = a;		
	}
		printf ("gia tri cua min max la\n");
		printf ("min = %d\n",a);
		printf ("max = %d\n",b);
	return 0;
}

