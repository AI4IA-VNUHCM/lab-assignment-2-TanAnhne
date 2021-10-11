/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	//Your codes here
	float Tongtien;
    float a = 0;
    printf("\n Nhap vao so Km: ");
    scanf("%f", &Tongtien);
    if(Tongtien <= 1)
    {
        a =  15000;
    }
    else if(Tongtien <= 30 && Tongtien > 1)
    {
        a = (Tongtien - 1)*8000 + 1*5000;
    }
    else
    {
        a = 15000 + 28*8000 + (Tongtien - 30)*5000;
    }
    printf("\n So tien phai tra: %0.3f VND", a);

	return 0;
} //gcc .\src\Exercise1.c -o .\bin\Ex1.exe
