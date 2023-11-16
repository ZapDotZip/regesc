#include <stdio.h>

int main() {
	char c = '\0';
	while((c = getchar()) != EOF) {
		switch(c) {
			case '/':
			case '?':
			case '.':
			case '+':
				putchar('\\');
			default:
				putchar(c);
				break;
		}
		
	}
	
}
