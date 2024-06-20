#include <stdio.h>
#include<time.h> 
int main (){
	int giobatdau, gioketthuc, thoigian, giogiamgia;
   float tien, giamgia, giolonhon4; 
   const int gio = 4;
	printf ("\nGio bat dau: ");
   scanf ("%d", &giobatdau);
   printf ("Gio ket thuc: ");
   scanf ("%d", &gioketthuc);
   thoigian = gioketthuc - giobatdau;
   giogiamgia = thoigian - 4;
   tien = thoigian*90000;
   giamgia = giogiamgia*70000;
   
   if (giobatdau >= 12 && gioketthuc <= 23){
       if (thoigian <= 4 && giobatdau < 14 || giobatdau >= 17){
           printf ("\nSo tien can thanh toan la: %g\n", tien);
       } else if (thoigian <= 4 && giobatdau >= 14 && giobatdau <17){
           printf ("\nSo tien can thanh toan la: %g\n", tien-(tien*0.1));
       } else if (thoigian > 4 && giobatdau < 14 || giobatdau >= 17){
    giolonhon4 = (gio*90000)+(giamgia-(giamgia*0.3));       
           printf ("\nSo tien can thanh toan la: %g\n", giolonhon4);
       } else {
    giolonhon4 = (gio*90000)+(giamgia-(giamgia*0.3));       
           printf ("\nSo tien can thanh toan la: %g\n", giolonhon4-(giolonhon4*0.1));
       } }
    else {

			printf ("\nQuan chi hoat dong trong khoang 12h-23h\n");
			
		}
		 
			
}
