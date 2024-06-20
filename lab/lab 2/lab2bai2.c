#include<stdio.h>

int main(){
	//tinh dien tich va chu vi cua HCN
 float chieuDai,chieuRong;
 
 printf("chieu dai la: ");scanf("%f",&chieuDai);
 printf("chieu rong la: ");scanf("%f",&chieuRong);
 //dien tich HCN
 printf("dien tich HCN: %0.2f * %0.2f = %0.2f\n",chieuDai,chieuRong,chieuDai*chieuRong);
 //chu vi HCN
 printf("chu vi HCN: (%0.2f + %0.2f)*2 = %0.2f",chieuDai,chieuRong,(chieuDai+chieuRong)*2);
return 0;
}
