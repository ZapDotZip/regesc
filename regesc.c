#include <stdio.h>

// This program takes in a string and escapes it such
// that it can be used as a regular expression
int main() {
	char c = '\0';
	while((c = getchar()) != EOF) {
		switch(c) {
			case '/':
			case '?':
			case '.':
			case '+':
			case '^':
			case '$':
			case '*':
			case '\\':
			case '[':
			case ']':
			case '{':
			case '}':
			case '(':
			case ')':
			case '|':
				putchar('\\');
			default:
				putchar(c);
				break;
		}	
	}
}
