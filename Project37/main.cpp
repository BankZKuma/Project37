#include<stdio.h>
#include<string.h>
void parinDrome(char text[]);
int main() {
	char text[50];
	scanf_s("%s", text, 49);
	parinDrome(text);
	return 0;
}
void parinDrome(char text[]) {
	char* p = text;
	int i = 0, check = 0, len = strlen(text);
	while (*p != '\0') {
		while (*(p + i) == *(p + len - i - 1)) {
			i++;
			check++;
			if (check == len / 2) {
				printf("Parindrome");
			}
		}
		break;
	}
}