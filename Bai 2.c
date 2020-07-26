//
#include<stdio.h>

int main ()
{
int firstNumber = 101;

if(firstNumber < 0){
	printf("So nguyen %d la so am\n", firstNumber); 
}
else{ 
printf ("So nguyen %d la so duong\n", firstNumber);
}
if (firstNumber %2 == 0){
	printf("%d la so chan\n", firstNumber);
}	
else {
	printf("%d la so le\n", firstNumber);
}
return 0;
}

