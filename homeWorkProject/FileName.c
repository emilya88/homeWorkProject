//homework


//3
/*#include <stdio.h>
#include <stdlib.h>

	int main() {
		int num = rand() % 101;
		int guess;


		printf("guess the number 0-100");


		while (1) {
			scanf("%d", &guess);
			if (num > guess) {
				printf("Too low");
			}
			else if (num < guess) {
				printf("Too high");
			}
			else {
				printf("yoohoo, you win");
				break;
			}
		}

		return 0;
	}*/


	//2
	/*#include <stdio.h>
	int main() {
	   int choice;
	   float num1;
	   float num2;
	   float result;
			do {
				printf("1. Addition\n");
				printf("2. Subtraction\n");
				printf("3. Multiplication\n");
				printf("4. Division\n");
				printf("5. Quit\n");
				printf("Enter your choice 1-5: ");
				scanf("%d", &choice);



			if (choice >= 1 && choice <= 4) {
					printf("Enter 2 numbers: ");
					scanf("%f\n", &num1);
					scanf("%f\n", &num2);

			}
			switch (choice) {
				case 1:
					result = num1 + num2;
					printf("%.1f\n", result);
					break;
				case 2:
					result = num1 - num2;
					printf("%.1f\n", result);
					break;
				case 3:
					result = num1 * num2;
					printf("%.1f\n",result);
					break;
				case 4:
					result = num1 / num2;
					printf("%.1f\n", result);
					break;
				case 5:
					printf("Exiting...\n");
					break;
				default:
					printf("Please try again.\n");
				}
			} while (choice != 5);

			return 0;

	}*/
	// 3-2
	/*#include <stdio.h>

	void escape(char s[], const char t[]) {
		int i = 0;
		int j = 0;

		while (t[i] != '\0') {
			switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
			}
			i++;
		}
		s[j] = '\0';
	}

	void unescape(char s[], const char t[]) {
		int i=0;
		int j = 0;

		while (t[i] != '\0') {
			if (t[i] == '\\') {
				switch (t[i + 1]) {
				case 'n':
					s[j++] = '\n';
					i++;
					break;
				case 't':
					s[j++] = '\t';
					i++;
					break;
				default:
					s[j++] = t[i];
					break;
				}
			}
			else {
				s[j++] = t[i];
			}
			i++;
		}
		s[j] = '\0';
	}

	int main() {
		char t[] = "This is a test.\nThis is a new line.\tAnd this is a tab.";
		char s[100];

		printf("Original string:\n%s\n", t);


		escape(s, t);
		printf("Escaped string:\n%s\n", s);


		unescape(t, s);
		printf("Unescaped string:\n%s\n", t);

		return 0;
	}*/


	//3-6
#include <stdio.h>

void itob(int n, char s[], int b) {
	int i = 0, rem;

	if (n == 0) {
		s[i++] = '0';
		s[i] = '\0';
		return;
	}

	while (n > 0) {
		rem = n % b;
		s[i++] = (rem < 10) ? rem + '0' : rem - 10 + 'A';  
		n /= b;
	}

	s[i] = '\0';  

	for (int j = 0, k = i - 1; j < k; j++, k--) {
		char temp = s[j];
		s[j] = s[k];
		s[k] = temp;
	}
}

int main() {
	char s[20];
	int n = 25, base = 16;

	itob(n, s, base);
	printf("%d in base %d is: %s\n", n, base, s);

	return 0;
}
