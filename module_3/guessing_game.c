#include <stdio.h>

int main() { 
	int ival; 

	while(1) {
		scanf("%d", &ival);
		if (ival == 42) {
			printf("Nice work\n");
			break;
		} else if (ival < 42) {
			printf("Too low - guess again\n");
		} else if (ival > 42) {
			printf("Too high - guess again\n");
		}
	}
}
