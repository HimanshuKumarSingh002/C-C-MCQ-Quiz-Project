#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

void show_credits();
void contact();
void help();
int check(int q, char c)
{

	switch (q)
	{
	case 1:
		if (c == 'A')
			printf("\ncorrect\n");
		else
			printf("\nincorrect!!\n");
		q++;
		getch();
		break;
	case 2:
		if (c == 'B')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 3:
		if (c == 'D')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 4:
		if (c == 'B')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 5:
		if (c == 'B')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 6:
		if (c == 'A')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 7:
		if (c == 'B')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 8:
		if (c == 'C')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 9:
		if (c == 'B')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	case 10:
		if (c == 'C')
			printf("\ncorrect\n");
		else
			printf("\nincorrect\n");
		q++;
		getch();
		break;
	}
}

int main()
{
	FILE *file;
	char str[10000];
	char c;
	int i, j;
	int q = 0;
	int pass, x = 10;
	printf("\n\n\n\t\t\t\t\t************ Welcome to the Quiz World ************\n\n");
	printf("\n\tFor Security reasons only the people with the passcode are allowed to enter in this program\n\n");
	while (x != 0)
	{
		printf("\nEnter the passcode:\n ");
		scanf("%d", &pass);
		if (pass == 1234)
		{
			printf("\n\n\n\t\t\t\t\t\t\t** Access granted ***");
			printf("\n\n \t\t\t\t\t\t>>You are allowed to play the game");
			printf("\n\n\t\t\t\t\t\t\t>>  Let's Begin");
			printf(" \n\n\t\t\t\t\t******************* Good Luck *******************");
			printf("\n\n\n\n\t\t\t\t\t\t  Press any key to continue:-");
			x = 0;
			break;
		}
		else
		{
			printf("Access deniend, Wrong passcode, Please try again....");
		}
		printf("\n");
	}
	getch();
	char choice;
	char playername[20];
mainhome:
	system("cls");
	printf("\n\n\t\t\t     World of QUIZ\n ");
	printf("\t\t\t    ***************\n ");
	printf("\t\t________________________________________");

	printf("\n\t\t\t        WELCOME ");
	printf("\n\t\t\t          to ");
	printf("\n\t\t\t    THE World of Quiz ");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t > Press S to start the game");
	printf("\n\t\t > press C for credits         ");
	printf("\n\t\t > press D for contact detail and queriers submission");
	printf("\n\t\t > press H for help            ");
	printf("\n\t\t > press Q to quit             ");
	printf("\n\t\t________________________________________\n\n");
	choice = toupper(getch());
	if (choice == 'C')
	{
		show_credits();
		goto mainhome;
	}
	else if (choice == 'D')
	{
		contact();
		getch();
		goto mainhome;
	}
	else if (choice == 'H')
	{
		help();
		getch();
		goto mainhome;
	}
	else if (choice == 'Q')
		exit(1);
	else if (choice == 'S')
	{
		system("cls");

		printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister with us, Enter your name:");
		gets(playername);

		system("cls");
		printf("\n ------------------  Welcome %s to The world of Quiz --------------------------", playername);
		printf("\n\n Here are some tips you might wanna know before playing:");
		printf("\n -------------------------------------------------------------------------");
		printf("\n >> Try to chose only the correct option");
		printf("\n >> It might be two or more options are correct in the same question so be carefull");
		printf("\n**** Correct answer will be shown if you choose the wrong option , just be patience ");
		printf("\n    Their are total of 10 questions. Each right answer will be awarded.");
		printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
		printf("\n    right option.");
		printf("\n >> You will be asked questions continuously, till right answers are given");
		printf("\n >> No negative marking for wrong answers!");
		printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
		printf("\n\n\n Press Y  to start the game!\n");
		printf("\n Press any other key to return to the main menu!\n");
		if (toupper(getch()) == 'Y')
		{
			goto home;
		}
		else
		{
			goto mainhome;

		home:

			system("cls");

			file = fopen("mcq.txt", "r");
			for (j = 0; j < 10; j++)
			{
				for (i = 0; i < 5; i++)
				{
					fgets(str, sizeof str, file);

					printf("%s ", str);
				}
				printf("\n\n ENTER YOUR RESPONSE ::\t");

				c = getch();
				printf("%c", c);
				++q;
				check(q, c);
			}
		}
	}
}

void show_credits()
{
	system("cls");
	printf("\n\n\n******************************* Credits *******************************");
	printf("\n\n\t\t>> Coding of the program - Himanshu and Sushant");
	printf("\n-------------------------------------------------------------------\n");
	printf("\n\t\t>>PPT presentation - Madhav and lakshay");
	printf("\n-------------------------------------------------------------------\n");
	printf("\n\t\t>> Questions serached by - Abhinav");
	printf("\n-------------------------------------------------------------------\n");
	printf("\n\t\t>>Planned and desigened by the team - The BOYS");
	printf("\n-------------------------------------------------------------------\n");
	printf("\n\t\t>>Special Thanks to Gita Donkal(For proper Guidance)");
	printf("\n-------------------------------------------------------------------\n");
	printf("\n-------------------------------------------------------------------\n");
	getch();
}

void contact()
{
	system("cls");
	printf("\n\n\n******************************* Contacts *******************************");
	printf("\n\t>>-For any queries related to program feel free to contact us\n");
	printf("-------------------------------------------------------------------\n");
	printf("\n\t**Any suggestions and Rating will be apperriciated\n");
	printf("\n\n>>-Contacts and Visit us on our website www.theboys.com\n");
	printf("-------------------------------------------------------------------\n");
	printf(">>-You can also message us on 123456789\n");
	printf("-------------------------------------------------------------------\n");
	printf(">>-Whatsapp Number-987654321\n");
	printf("--------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------\n");
	printf("******************* THANKS FOR CHOOSING US *******************\n");
	printf("--------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------\n");
	getch();
}
void help()
{
	system("cls");
	printf("\n\n                              HELP");
	printf("\n -------------------------------------------------------------------------");
	printf("\n ......................... The world of Quiz.................");
	printf("\n >> There are 10 questions in the game, 5 are easy and another 5 are hard");
	printf("\n >> First 5 questions are very easy atleast try to answer that");
	printf("\n    All questions are from General knowledge.");
	printf("\n    Try to choose only right answers............");
	printf("\n >> Because only right answer will be awarded");
	printf("\n    By this way you can score more better...............");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option");
	printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
	printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t********************* BEST OF LUCK *********************************");
	printf("\n\n\t*****The QUIZ World is developed by The team THE BOYS********");
	getch();
}
