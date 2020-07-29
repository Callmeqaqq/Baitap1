//
#include<stdio.h>
#include<math.h>
#define Pi 3.14159

int main (){
float banKinh, pi;

printf("nhap ban kinh hinh tron:");
scanf("%f", &banKinh);
printf("dien tich hinh tron la: (%f^2)*%f=%f", banKinh, Pi, pow(banKinh, 2) * Pi);
printf("\nchu vi hinh tron la: %f*2*%f=%f", banKinh, Pi, banKinh * 2 * Pi);
return 0;
}
