#include <stdio.h> 
#include <string.h>
char tK[100];
char mK[100];
void nhap(){
	printf ("moi nhap ten dang nhap vao: ");
	gets (tK);
	printf ("moi nhap mat khau vao: ");
	gets (mK);
}
void  kiemTra(){
		if 	(strcmp(strlwr(tK),"tung123") ==0 && strcmp(mK,"vothanhtung")==0)
		{
			printf ("dang nhap thanh cong");
	
		}
		else {
			printf ("dang nhap that bai\n");
				 
		}	

} 
		
	
int main (){
	printf ("chuong trinh tao tai khoan va mat khau \n");
	nhap();
	kiemTra();
	return 0;	
}
