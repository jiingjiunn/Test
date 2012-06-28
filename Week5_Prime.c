#include <stdio.h> //Remember the space after include

int isPrime(int n); //Put params inside instead of just type

int main() //Dont use void if u don have params
{
	int number;
	printf("Please insert the number to test");
	scanf("%d", &number);
	//Spacing is used for segmenting codes with different meaning
	if(isPrime(number)){ //With boolean u can use conditional rather than checking with 0 (faster too)
		printf("%d is a prime number.", number);
	}else{ //Stick the curly bracket.. u don need too much spacing.
		printf("%d is not a prime number.", number);
	}

	return 0;
}

int isPrime(int n) //CamelCase for functin..
{
	int i;
	for(i=2; i<=n/2; i++){
		if(n%i == 0){
			return 1;
		}
	}
	return 0;
}
