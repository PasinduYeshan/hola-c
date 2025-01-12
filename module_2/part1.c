#include <stdio.h>
int main() {
	int usf = 0;
	int euf = 0;
	char name[100];
    	printf("Enter US Floor\n");
  	scanf("%d", &usf);
  	euf = usf - 1;
  	printf("EU Floor %d\n", euf);
}

