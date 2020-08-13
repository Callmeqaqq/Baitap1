//
#include<stdio.h>
#include<math.h>// thu vien de dung abs, sqrt,... cac thuat toan trong toan hoc

int main ()
{float a, b, c;
printf(" nhap lan luot chieu dai cac canh:");
scanf("%f%f%f", &a, &b, &c);

	if((abs(a - b)) < b < (a + c)){//dung hang dang thuc tam giac
	printf("3 so hop le de tao thanh 1 tam giac");
}
		else{
			printf(" 3 so khong hop le de tao thanh 1 tam giac");
			}	
return 0;
}

