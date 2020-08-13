//
#include<stdio.h>
#include<math.h>// thu vien de dung abs, sqrt,... cac thuat toan trong toan hoc

int main ()
{float a, b, c;
printf(" nhap lan luot chieu dai cac canh:");
scanf("%f%f%f", &a, &b, &c);

 if ( a > 0 && b > 0 && c > 0){// cho nay ban dau em thu la cho cac so < 0 roi in ket qua vui long nhap so duong luon nhung ma no khong chay, li do tai sao v a?
		if((abs(a - b)) < b < (a + c)){//dung hang dang thuc tam giac
			printf("3 so hop le de tao thanh 1 tam giac");
		}
		else{
			printf(" 3 so khong hop le de tao thanh 1 tam giac");
			}
	}
	else{ 
		 printf("Chu y: vui long nhap so duong!");
	}
return 0;
}
