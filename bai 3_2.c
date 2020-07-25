//
#include<stdio.h>

int main ()
{
int a, b, tong, hieu, tich;
float thuong;// ep kieu phai khai bao kieu du lieu truoc;

printf ("nhap a:");
scanf ("%d", &a);// cu phap: scanf ("%d"(hoac "%i"(vi main la int)), &'i')
printf ("nhap b:");
scanf ("%d",&b);
tong = a+b;
hieu = a-b;
tich = a*b;

thuong = (float) a/b;// Ep kieu: bien = (kieu du lieu) a(phep_tinh)b

printf ("Tong la:%d",tong);
printf ("\nHieu la:%d",hieu);
printf ("\nTich la:%d", tich);

if(b!=0)//dieu kien
{//neu thoa man thi:
printf ("\nthuong la:%f", thuong);
}

else//neu khong thoa man thi:
{
printf ("\nVui long nhap so b khac 0 de thuong co gia tri");
}

return 0; //gtri tra ve
}

