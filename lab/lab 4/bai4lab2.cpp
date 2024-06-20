#include <stdio.h>
 
int main (){
	int x;
	int count = 0 ;//bien dem
	printf ("tim so nguyen to la so chia het cho chinh no\n");
	printf ("nhap vao x = ");
	scanf ("%d",&x);
	int i;
	for (i=2;i<x;i++){//x se chay den i 
		if (x%i==0){//neu x chia lay du ma = 0 
		count++;//  thi bien count se tang len 1
		break;
		}
	}
	if (count == 0){//neu count = 0 ma chay tu x den i thi se laa so nguyen to
		printf("%d la so nguyen to ",x);
	}
	else 
	{
		printf ("%d khong phai la so nguyen to",x); //neu tang len 1 thi se khac 0 neu khac 0 ti se ko phai la so nguyen to
	}
}
