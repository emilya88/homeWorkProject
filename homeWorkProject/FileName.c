#include <stdio.h>
int main() {
	int myarray[] = { 18,23,98,17,34 };

	int i;
	int length = sizeof(myarray) / sizeof(myarray[0]);
	int lowestage = myarray[0];
	for (i =0 ; i < length; i++) {
		if (lowestage > myarray[i]) {
			lowestage = myarray[i];
		}
	}

	printf("the lowst age %d", lowestage);

	return 0;
}

