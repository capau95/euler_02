#include <stdio.h>

int main () {

	int x = 0;
	int y = 0;
	int z = 1;
	int sum = 0;

	while (z <= 4000000) {

		x = y;
		y = z;
		z = x + y;

		if (z % 2 == 0) {
				
			sum +=  z;

		}

	}
	
	printf("%d\n", sum);
	
	return 0;

}	
