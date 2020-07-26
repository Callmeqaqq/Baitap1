//
#include<stdio.h>

int main ()
{int firstNumber = 51 , secondNumber = 51;
if (firstNumber - secondNumber ==0){
	printf ("%d bang %d", firstNumber, secondNumber);
	exit(0);
}
if(firstNumber - secondNumber < 0){
	printf (" %d nho hon %d", firstNumber, secondNumber);
	 
}
else 
{ printf ("%d lon hon %d", firstNumber, secondNumber);
}

return 0;
}

