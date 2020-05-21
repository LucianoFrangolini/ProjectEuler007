#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J"); 

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

//Sumo un numero
//Analizo si es divisible por algun numero menor a el
//Si es divisible cuento 1 y salgo
//Si no es divisible no cuento
//Repito hasta contar hasta 10001

int main(){
    int number=2;
    int primeNumber;
    int primeCount = 0;
    int i;
    
    clrscr(); 
    while (primeCount!=10001){
        for (i=2;i<=number;i++)
            if (number%i==0){
                break;
            }
        if (i==number){
            primeNumber=number;
            primeCount+=1;
        }
        number++;
    }

    printf("Prime Count = %d ; Number = %d\n",primeCount,primeNumber);
}