# include <stdio.h>

int main() {
	int decks;
	printf("Enter a number of decks: ");
	scanf("%i", &decks);
	if (decks < 1) {
		puts("Not a valid number of decks");
		return 1;
	}
	printf("There are %i cards\n", (decks * 52));

	return 0;
}