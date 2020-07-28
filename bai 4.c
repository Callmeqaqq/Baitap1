//
#include<stdio.h>

int main (){
int firstNumber, secondNumber;
printf("Nhap vao so nguyen thu nhat:");
scanf("%d", &firstNumber);
printf("\nNhap vao so nguyen thu hai:");
scanf("%d", &secondNumber);

if (firstNumber == secondNumber){
	printf("%d = %d", firstNumber , secondNumber);
	exit(0);
	}
if ( firstNumber > secondNumber){
	printf("%d lon hon %d", firstNumber, secondNumber);
	}
else{
	printf("%d nho hon %d", firstNumber, secondNumber);
	}
return 0;
}
