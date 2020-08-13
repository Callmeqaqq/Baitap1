//
#include<stdio.h>
#include<math.h>
int main ()
{float a, b, c, delta, x1, x2, x;
	printf("nhap he so phuong trinh bac 2:");
	scanf("%f%f%f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if(a + b + c == 0){
		x1 = 1;
		x2 = c / a;
		printf("PT có nghiem dac biet: x1 = %f", x1);
		printf("\nx2 = %f", x2);	
	exit(0);
	}
	if(a - b + c == 0){
		x1 = -1;
		x2 = -c / a;
		printf("PT có nghiem dac biet: x1 = %f", x1);
		printf("\nx2 = %f", x2);
	exit(0);
	}
	if(delta < 0){
		printf("PT vo nghiem!");
	}
	else if(delta = 0){
		x1 = x2 = -b /(2*a);
		printf("PT co nghiem kep x1 = x2 = %f", x1);
	}
	else{
		x1 = (-b + sqrt(delta))/(2 * a);
		x2 = (-b - sqrt(delta))/(2 * a);
		printf("PT co 2 nghiem phan biet:");
		printf("\nx1 = %f", x1);
		printf("\nx2 = %f", x2);
	}
return 0;
}

