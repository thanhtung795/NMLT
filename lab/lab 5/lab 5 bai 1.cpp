#include <stdio.h>

void timSoLonNhat(){//ham goi
	int so1,so2,so3,so4,so5,so6;// cac bien so  tu 1 - 6  
	int max;//bien bac 
	printf ("tim cac so lon nhat\n");	
	printf ("nhap so thu nhat 1: ");
	scanf ("%d",&so1);
	printf ("nhap so thu nhat 2: ");
	scanf ("%d",&so2);
	printf ("nhap so thu nhat 3: ");
	scanf ("%d",&so3);
	printf ("nhap so thu nhat 4: ");
	scanf ("%d",&so4);
	printf ("nhap so thu nhat 5: ");
	scanf ("%d",&so5);
	printf ("nhap so thu nhat 6: ");
	scanf ("%d",&so6);
	max = so1;//so thu naht = max 
	if (so2 > max){//so thu 2 ma = max thi so 2 la max 
		 max = so2;
	} if (so3 > max){//so thu 3 ma = max thi so 3 la max 
		 max = so3;
	} if (so4 >max){//so thu 4 ma = max thi so 4 la max 
		max = so4;
	}if (so5 >max){//so thu 5 ma = max thi so 5 la max 
		max = so5;
	}if (so6 >max){//so thu 6 ma = max thi so 6 la max 
		max = so6;
	}
	printf ("cac so lan luot la: %d, %d ,%d, %d, %d, %d  so lon nhat la %d \n",so1,so2,so3,so4,so5,so6,max);//se xuat lan luot tu be den lon
}

int main (){//ham chay chinh
	timSoLonNhat();//hma goi
}
