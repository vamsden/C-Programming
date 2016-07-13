# include <stdio.h>

int main()
{
	/* if statement */
	puts("-------------------------------------------------------");
	int card_count = 11;
	if (card_count > 10) {
		puts("The deck is hot, Increase the bet...");
	}

	/* while statement */
	puts("-------------------------------------------------------");
	int c = 10;
	while (c > 0) {
		puts("I must not write code int the class..");
		c = c - 1;
	}

	/* Assume name shorter than 20 chars. */
	puts("-------------------------------------------------------");
	char ex[20];
	puts("Enter girlfriend's name: ");
	scanf("%19s", ex);
	printf("Dear %s.\n\n\tYou're history.\n", ex);

	/* Switch statement */
	puts("-------------------------------------------------------");
	char suit = 'H';
	switch(suit) {
		case 'C':
			puts("Clubs");
			break;
		case 'D':
			puts("Diamonds");
			break;
		case 'H':
			puts("Hearts");
			break;
		default:
			puts("Spades");
	}

	return 0;
}