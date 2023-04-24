#include <stdio.h>
#include <string.h>

typedef enum {FALSE=0,TRUE=!FALSE} boolean;

int main(int argc, char* argv[]) {
	int x;
	int y;
	char z[2];

	boolean running = TRUE;
	for (;;) {
		if (!running) {
			break;
		}

		printf("First number: ");
		scanf("%i", &x);

		printf("\nSecond number: ");
		scanf("%i", &y);

		printf("%i + %i = %i\n", x, y, x+y);

		LOOP:
		printf("\n\t\tWould you like to continue? (y, n): ");

		scanf("%1s", z);

		if (strcmp(z, "n") == 0)
			running = FALSE;

		else if (strcmp(z, "y") == 0)
			continue;

		else
			goto LOOP;
	}
}
