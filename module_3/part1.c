#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main() {

	char line[1000];
	int maxVal = INT_MIN;
	int minVal = INT_MAX;
	int ival;

	while(gets(line) != NULL) {

		line[strcspn(line, "\n")] = 0;
		if (strcmp(line, "done") == 0) {
			break;
		}

		ival = atoi(line);
	
		if (ival < minVal) {
			minVal = ival;
		} 

		if (ival > maxVal) {
			maxVal = ival;
		}		
	}

	printf("Minimum: %d\n", minVal);
	printf("Maximum: %d\n", maxVal);
}


