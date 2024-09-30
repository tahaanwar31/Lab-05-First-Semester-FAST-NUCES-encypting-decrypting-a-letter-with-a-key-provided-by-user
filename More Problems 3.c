#include <stdio.h>
#include <limits.h>
#include <conio.h>
int main ()
{
	char choice,letter,result;
	int key;
	printf("Enter e if you want to encrypt a letter and d if you want to decrypt a letter: \n");
	scanf("%c",&choice);
	printf("Enter the key: \n");
	scanf("%d",&key);
	if (choice=='e')
	{
		printf("Enter the letter you want to encrypt: \n");
		scanf(" %c",&letter);
		result = letter ^ key;
		printf("The encrypted letter is %c \n",result);
		
	}
	else if (choice=='d')
	{
		printf("Enter the letter you want to decrypt: \n");
		scanf(" %c",&letter);
		result = letter ^ key;
		printf("The decrypted letter is %c \n",result);
	}
	else
	{
		printf("Invalid input \n");
	}
	return 0;
}