#include <stdio.h>
#include <string.h>

void bai1(int n){
 char s[100];
 printf ("xin ban nhap vao chuoi ky tu: ");
 gets (s);
 int i = 0;
 int dem = 0;
 int phu = 0;
 while (s[i]!='\0')	{
 	if (s[i]== 'a' || s[i]=='i' || s[i]=='e' || s[i]=='o'||s[i] =='u' || s[i]== 'A' || s[i]=='I' || s[i]=='E' || s[i]=='O'||s[i] =='U')
{
	dem++;	
 }else {
 	phu++;
 } i++;
  }

printf ("chuoi ky tu '%s'\n co chua: %d nguyen am va %d phu am",s,dem,phu);
}
char tK[100];
char mK[100];
void bai2(){
	printf ("\n\nnmoi nhap ten dang nhap vao: ");
	gets (tK);
	printf ("moi nhap mat khau vao: ");
	gets (mK);
		if 	(strcmp(strlwr(tK),"tung123") ==0 && strcmp(mK,"vothanhtung")==0)
		{
			printf ("dang nhap thanh cong");
	
		}
		else {
			printf ("dang nhap that bai\n");
				 
		}
	}	

void bai3(char s[][20]){
	for (int i = 0; i < 5; i++){
		printf ("\n\nNhap chuoi ky tu %d: ",i+1);
		gets(s[i]);
	}

	for (int i = 0; i < 4; i++ )
	{	
		for (int j = i + 1;j < 5 ; j++)
		{
			if (strcmp(s[i],s[j])>0)
			{
				char tmp[20];
				strcpy(tmp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],tmp);
			}
		}
	}
			printf ("cac ki tu duoc sap xep");
		for (int i = 0; i < 5; i++){
		printf ("\n%s",s[i]);
	}

}
	
int main(){
	char s[5][20];
	int n;	
	bai1(n);
	//bai2();
	//bai3(s);
	
}
