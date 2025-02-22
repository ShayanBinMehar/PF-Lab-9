#include <stdio.h>
#include <string.h>
const int x = 5;
const int y = 20;

void palindrome(char array[x][y]);
void palindrome(char array[x][y])
{

	for (int x = 0; x < 5; x++)
	{

		int len = strlen(array[x]);

		int ispalindrome = 1;

		for (int y = 0; y < len / 2; y++)
		{

			if (array[x][y] != array[x][len - y - 1])
			{
				ispalindrome = 0;
				break;
			}
		}
		if (ispalindrome == 1)
		{
			printf("Row %d is a palindrome\n", x + 1);
		}
		else
		{
			printf("Row %d is not a palindrome \n", x + 1);
		}
	}
}

int main()
{

	char names[x][y];
	for (int x = 0; x < 5; x++)
	{
		printf("Enter the name to enter in the array name : ");
		fgets(names[x], sizeof(names), stdin);
		names[x][strcspn(names[x], "\n")] = '\0';
	}
	palindrome(names);
}
