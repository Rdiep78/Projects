/******************************************
*
* Official Name:  Ricky Diep
*
* E-mail:  rdiep@syr.edu
*
* Final Project:  Monopoly 
*
* Compiler:  Visual Studio 2013
*
* Date:  May 5, 2015
*
*******************************************/
/*****************************************************************
*
* 1. Problem:
*    Create a version of monopoly able to support 2 players fucntionality
*
* 2. Analysis:
*    Input properties, chance, community chest, player info
*    Output properties, player info
*    Formulas List relevant formulas
*    Dialogue Give an example of the complete dialogue
Examples Work out one or more examples in detail.

**********Welcome to Monopoly!**********
Player 1 enter your name : Ricky
Player 2 enter your name : Computer
Would You Like To View The Instructions?(Y/N): n
-----------------------------------------------------------------------
|         |         |         |         |         |         |         |
|    CH   |   Y1    |    Y2   |   RR3   |    Z1   |   Z2    |    CC   |
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|---------------------------------------------------------------------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    O2   |                                                 |    G1   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    O1   |                                                 |    G2   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                    MONOPOLY!                    |         |
|    RR2  |                                                 |    RR4  |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    P2   |                                                 |    B1   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    P1   |                                                 |    B2   |
|---------------------------------------------------------------------|
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|    CC   |   V2    |    V1   |   RR1   |    M2   |   M1    |    GO!  |
|         |         |         |         |         |         |   <---  |
-----------------------------------------------------------------------



Roll to see who goes first!
Ricky rolls: 4
Computer rolls: 2
Ricky goes first!
-------------------------------
Ricky money : 1500.00
Computer money : 1500.00
-------------------------------
Enter a key to roll!
* 3. Algorithm:
*    1. Draw the screen
			a. Use the horline and vertline fucntions to display the screen
	 2. Determine who goes first
	 3. Play the Game
		a. When they land on a peice call a function
		b. take the action upon the landed square
	4. Loop  back and start for next player
	5. COninue until player reaches <=0 dollars 
		a. print the output file of the reults using a sort and search
*
* 5. Testing:
*    Sample runs from the program.

Enter a key to continue!
e
-------------------------------
Ricky money : 1360.00
COmputer money : 1450.00
-------------------------------
Enter a key to roll!r
Ricky rolls: 6.
Ricky advances to sqaure 14.
Would you like to buy Y2  for $ 260.00 (Rent: $ 22.00)? (Y/N): y
-----------------------------------------------------------------------
|         |         |         |         |         |         |         |
|    CH   |   Y1    |    Y2   |   RR3   |    Z1   |   Z2    |    CC   |
|         |         |    ?    |         |         |         |         |
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|---------------------------------------------------------------------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    O2   |                                                 |    G1   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    O1   |                                                 |    G2   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                    MONOPOLY!                    |         |
|    RR2  |                                                 |    RR4  |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    P2   |                                                 |    B1   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    P1   |                                                 |    B2   |
|---------------------------------------------------------------------|
|    #    |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|    CC   |   V2    |    V1   |   RR1   |    M2   |   M1    |    GO!  |
|         |         |         |         |         |         |   <---  |
-----------------------------------------------------------------------




Enter a key to continue!
y
-------------------------------
Ricky money : 1100.00
COmputer money : 1450.00
-------------------------------
Enter a key to roll!d
COmputer rolls: 6.
COmputer advances to sqaure 12.
You just lost $-300!
-----------------------------------------------------------------------
|         |         |         |         |         |         |         |
|    CH   |   Y1    |    Y2   |   RR3   |    Z1   |   Z2    |    CC   |
|    #    |         |    ?    |         |         |         |         |
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|---------------------------------------------------------------------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    O2   |                                                 |    G1   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    O1   |                                                 |    G2   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                    MONOPOLY!                    |         |
|    RR2  |                                                 |    RR4  |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    P2   |                                                 |    B1   |
|---------|                                                 |---------|
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|         |                                                 |         |
|    P1   |                                                 |    B2   |
|---------------------------------------------------------------------|
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|         |         |         |         |         |         |         |
|    CC   |   V2    |    V1   |   RR1   |    M2   |   M1    |    GO!  |
|         |         |         |         |         |         |   <---  |
-----------------------------------------------------------------------



Enter a key to continue!
f
-------------------------------
Ricky money : 1100.00
COmputer money : 1150.00
-------------------------------
Enter a key to roll!d
Ie. copies of the console screen after running the program.
******************************************************************/

#include <stdio.h>
#include <math.h> 
#include <time.h>
#include <string.h>
#define WIDTH 80 /*WIDTH*/
#define HEIGHT 50 /*HEIGHT*/
/*structure of the property card*/
/*(STRUCT) somewhere that you use a struct in code. (At least one occurence.)*/
typedef struct {
	char name[5];
	double price;
	double rent;
	int ownedBy;
} property;
/*structure of the player piece*/
typedef struct{
	char name[50];
	double money;
	int location;
	int number; 
	char piece;
}player;
void instructions(); /*Displays the instructions*/
void vertline(int col, int startrow, int endrow, char sb[][WIDTH]); /*Vertical Line*/
void horline(int row, int startcol, int endcol, char sb[][WIDTH]); /*Horizontal line*/
void display(char sb[][WIDTH], int labeled); /*Displays*/
void clearbuffer(char sb[][WIDTH]); /*Clears the buffer*/
void drawScreen(char sb[][WIDTH]); /*Draws the board */
int  goesFirst(player * play1, player * play2); /*see who goes first*/
void getPlayerName(player * play1, player * play2);  /*get player names */
void roll(int turn, player * play1, player * play2); /*calculates roll of dice*/
void readProperties(property * props, FILE* myin); /*reads in the property cards */
void readChance(int chance[], FILE * myin); /*Reads in the chance cards */
void readCommunity(int community[], FILE * myin);/*reads in the community chest cards */
void propertyCards(player * play, player * otherplayer, property prop[]); /*plays the property cards*/
void gameStartToTweleve(player * play, player * otherplayer, int community, int chance, char sb[][WIDTH], property prop[]); /*plays the game fucntion*/
void gameThirteenToEnd(player * play, player * otherplayer, int community, int chance, char sb[][WIDTH], property prop[]);
void chanceCards(player * play, int chance[]); /*plays the chance cards*/
void GoSqaure(player * play);/*go sqaure fucntion*/
void communityChest(player * play, int communtiy[]); /*Plays the community chest piece*/ 
void clearOldMarkerZeroToTweleve(player * play, char sb[][WIDTH]); /*deltes old peice*/
void clearOldMarkerThirteenToTwentyThree(player * play, char sb[][WIDTH]);
int searchOwner(property * list[], player * play, property * playerProperty[]); /*search function to look for owner*/
int assignOwners(property list[], property playerprop[], player * play); /*lists the owners of properties */
void swap(property* x, property* y); /*Swaps the pointers*/
void bubblesort(property list[], int n); /*Sorting the proeprties*/
void drawOutput(player * playerOne, player * playerTwo, property OneProperty[], property TwoProperty[], int OneSize, int TwoSize); /*Draws the results*/
/*draws the board*/
void printTitle(char sb[][WIDTH]);
void pointerSort(int n, property list[]);
void PrintTop(char sb[][WIDTH]);
void printLeftSide(char sb[][WIDTH]);
void printBottom(char sb[][WIDTH]);
void printTitle(char sb[][WIDTH]);
void printRightSide(char sb[][WIDTH]);
void drawBorder(char sb[][WIDTH]); 

int main()
{
	char sb[HEIGHT][WIDTH]; /*array*/
	/*(I / O) somewhere that you read from and write to a file. (You do not have to mark all occurences, but at least one input and one output.)*/
	FILE *myprop, *myChance, *myCommunity; /*infiles*/
	myprop = fopen("properties.txt", "r"); myChance = fopen("Chance.txt", "r"); myCommunity = fopen("communityChest.txt", "r");	/*opening files*/
	if (myprop == 0 || myChance == 0 || myCommunity == 0)
	{
		printf("trouble opening file.\n");		
		return(0);
	}
	property props[30], player1Properties[24], player2Properties [24]; 	
	player player1, player2;
	player1.piece = '?'; player2.piece = '#';  player1.location = 0; player2.location = 0;
	srand(time(NULL)); /*(SRAND) where you seed the random number generator.*/
	int chanceCards[30]; int communityChest[30];/*array of community chest cards*/
	player1.number = 1; player2.number = 2; player1.money = 1500; player2.money = 1500;/*Sets the inital money*/
	int i = 0;  int turn; char blank;  /*sets the turn*/
	clearbuffer(sb);/*clears the screen*/ 
	for (i = 0; i <=23; i++)
	{
		readProperties(&props[i], myprop);
	} 
	printf("\n");
	readChance(chanceCards, myChance);	/*scans in the chance cards*/
	readCommunity(communityChest, myCommunity);/*scans in the community chest cards*/
	getPlayerName(&player1, &player2); /*gets the players names*/
	instructions();
	/*1. Draw board*/
	drawScreen(sb);
	turn = goesFirst(&player1, &player2); //2. Determines who goes first
    while (!(player1.money <= 0 || player2.money <= 0)) //While loop to start the game
	{
		/*Displays the money*/
		printf("-------------------------------\n");
		printf("%s money : %0.2lf\n", player1.name, player1.money);
		printf("%s money : %0.2lf\n", player2.name, player2.money);
		printf("-------------------------------\n");
		printf("Enter a key to roll!");
		scanf(" %c", &blank); 
		if (turn == 1)
		{
			if (player1.location <=12)
				clearOldMarkerZeroToTweleve(&player1, sb); /*clears the old piece*/
			else
				clearOldMarkerThirteenToTwentyThree(&player1, sb); 
		}
		else
		{
			if (player2.location <= 12)
				clearOldMarkerZeroToTweleve(&player2, sb);
			else
				clearOldMarkerThirteenToTwentyThree(&player2, sb);
		}
		roll(turn, &player1, &player2); /*rolls the dice*/
		if (turn == 1)
		{
			/*(*PARAM) where you define a function with output(pointer) parameters and one place where you call that function.*/
			/* 3. Play the Game
					a. When they land on a peice call a function
					b. take the action upon the landed square*/
			if (player1.location <= 12)
			{
				gameStartToTweleve(&player1, &player2, communityChest, chanceCards, sb, props);
				drawScreen(sb);
			}
			else 
			{
				gameThirteenToEnd(&player1, &player2, communityChest, chanceCards, sb, props);
				drawScreen(sb);
			}
			turn = 2;//4. loop back for nextplayer
		} 
		else
		{
			if (player2.location <= 12)
			{
				gameStartToTweleve(&player2, &player1, communityChest, chanceCards, sb, props);
				drawScreen(sb);
			}
			else
			{
				gameThirteenToEnd(&player2, &player1, communityChest, chanceCards, sb, props);
				drawScreen(sb);
			}
			turn = 1;
			printf("Enter a key to continue!\n");
			scanf(" %c", &blank);
		}
	}
	int playOneSize, playTwoSize;
	/*5.continue until game reaches $0.00*/
	if (player1.money <= 0)/*determines the winner*/ 
		printf("%s is bankrupt. %s wins!\n\n", player1.name, player2.name);
	else
		printf("%s is bankrupt. %s wins!\n\n", player2.name, player1.name); 

	/*(SORT / SEARCH) DRAWS THE OUTPUT*/
	playOneSize = assignOwners(props, player1Properties, &player1);
	playTwoSize = assignOwners(props, player2Properties, &player2);
	drawOutput(&player1, &player2, player1Properties, player2Properties, playOneSize, playTwoSize);
	
	fclose(myprop); fclose(myCommunity); fclose(myChance);
	return 0; 
}
void instructions()
{
	char choice;
	printf("Would You Like To View The Instructions?(Y/N): ");
	scanf("%c", &choice);
	char blank; 
	if (choice == 'Y' || choice == 'y')
	{
		printf("\n\nWelcome to Monopoly!.\n The objective of the game is to own as many properties possible\n");
		printf("and get the other player bankrupt! Player 1's piece is a '?' and player 2's piece '#'.\n ");
		printf("To start each player rolls a dice to determines who goes first. The player with the higher number\n");
		printf("goes first. Afterwards they roll and move the corresspoding tiles with Go! starting as tile 0.\n ");
		printf("Landing on the tile the player can either buy the property if not owned or pay the rent if it is owned.\n");
		printf("Good Luck!\nPress Any Key to Start!\n: "); 
		scanf(" %c", &blank);
	}
	else if (choice == 'N' || choice == 'n')
		return 0;
	else
	{
		printf("Would You Like To View The Instructions?(Y/N): ");
		scanf("%c", &choice);

	}
}
/* draws a vertical line in column col
from row startrow to row endrow .
Draws to screenbuffer, not screen.    */
void vertline(int col, int startrow, int endrow, char sb[][WIDTH])
{
	int i;
	int temp;

	/* test if col is in visible screen */
	if (col<0 || col >= WIDTH)
		return;

	/* make startrow less than endrow */
	if (startrow > endrow)
	{
		temp = startrow;
		startrow = endrow;
		endrow = temp;
	}

	/* clip startrow and endrow to screen */
	if (startrow<0)
		startrow = 0;
	if (endrow>HEIGHT - 1)
		endrow = HEIGHT - 1;

	/* draw visible part of line to screen buffer */
	for (i = startrow; i <= endrow; i++)
		sb[i][col] = '|';
}

/*****************< horline >********************/
/* draws a horizontal line in row row
from column startcol to column endcol.
Draws to screenbuffer, not screen.    */

void horline(int row, int startcol, int endcol,
	char sb[][WIDTH])
{
	int i;
	int temp;

	/* test if row is in the screen */
	if (row < 0 || row >= HEIGHT)
		/* make startcol less than endcol */
		if (startcol > endcol)
		{
		temp = startcol;
		startcol = endcol;
		endcol = temp;
		}
	/* clip startcol and endcol to the screen */
	if (startcol<0)
		startcol = 0;
	if (endcol > WIDTH - 1)
		endcol = WIDTH - 1;
	/* draw visible part of the line to screen buffer */
	for (i = startcol; i <= endcol; i++)
		sb[row][i] = '-';
}
/*****************< clearbuffer >********************/
/*make each item a space */

void clearbuffer(char sb[][WIDTH])
{
	int row, col;

	for (row = 0; row<HEIGHT; row++)
	{
		for (col = 0; col<WIDTH; col++)
			sb[row][col] = ' ';
	}
}
/*****************< display >********************/
/* Display the screen buffer.
There are two options:
labeled = 1: prints WITH rows and columns numbered
labeled = 0: prints WITHOUT row and column numbers
*/
void display(char sb[][WIDTH], int labeled)
{
	int row, col;

	if (!labeled) /* print the screen buffer */
		for (row = 0; row<HEIGHT; row++)
		{
		for (col = 0; col<WIDTH; col++)
			printf("%c", sb[row][col]);
		printf("\n");
		}
	else /* print the screen buffer with labels */
	{  /* print top row labels */
		printf("  ");
		for (col = 0; col<WIDTH; col++)
			printf("%d", col % 10);
		printf("\n");
		for (row = 0; row<HEIGHT; row++)
		{
			printf("%d ", row % 10); /* print row label */
			for (col = 0; col<WIDTH; col++)
				printf("%c", sb[row][col]);
			printf("\n"); void drawScreen(char sb[][WIDTH]);
		}

	}
}
/******************DRAWS Board**************/

void drawScreen(char sb[][WIDTH])
{
	/*draws the inner borders of the board */
	vertline(20, 1, 5, sb);
	vertline(30, 1, 5, sb);
	vertline(40, 1, 5, sb);
	vertline(50, 1, 5, sb);

	vertline(20, HEIGHT-15, HEIGHT - 11, sb);
	vertline(30, HEIGHT - 15, HEIGHT - 11, sb);
	vertline(40, HEIGHT - 15, HEIGHT - 11, sb);
	vertline(50, HEIGHT - 15, HEIGHT - 11, sb);

	horline(11, 1,HEIGHT-41, sb);
	horline(16, 1, HEIGHT - 41, sb);
	horline(22, 1, HEIGHT - 41, sb);
	horline(28, 1, HEIGHT - 41, sb);

	horline(11, WIDTH-19, WIDTH-11, sb);
	horline(16, WIDTH - 19, WIDTH - 11, sb);
	horline(22, WIDTH - 19, WIDTH - 11, sb);
	horline(28, WIDTH - 19, WIDTH - 11, sb);
	/*calls functions to draw the properties*/
	drawBorder(sb); 
	printBottom(sb);
	PrintTop(sb);
	printLeftSide(sb);
	printRightSide(sb); 
	printTitle(sb);
	display(sb, 0);
	printf("\n");
}
/***********Draws outside border*/
void drawBorder(char sb[][WIDTH])
{
	vertline(0, 0, HEIGHT - 10, sb);
	vertline(WIDTH - 10, 0, HEIGHT - 10, sb);
	horline(0, 0, WIDTH - 10, sb);
	horline(HEIGHT - 10, 0, WIDTH - 10, sb);

	vertline(10, 1, HEIGHT - 11, sb);
	vertline(WIDTH - 20, 1, HEIGHT - 11, sb);
	horline(6, 1, WIDTH - 11, sb);
	horline(HEIGHT - 16, 1, WIDTH - 11, sb);
}
/*draws top properties*/
void PrintTop(char sb[][WIDTH])
{

	/*Z2*/
	sb[2][WIDTH - 26] = 'Z';
	sb[2][WIDTH - 25] = '2';
	/*Z1*/
	sb[2][WIDTH - 35] = 'Z';
	sb[2][WIDTH - 34] = '1';
	/*RR3*/
	sb[2][WIDTH - 46] = 'R';
	sb[2][WIDTH - 45] = 'R';
	sb[2][WIDTH - 44] = '3';
	/*Y2*/
	sb[2][WIDTH - 55] = 'Y';
	sb[2][WIDTH - 54] = '2';
	/*Y1*/
	sb[2][WIDTH - 66] = 'Y';
	sb[2][WIDTH - 65] = '1';
	/*Chance*/
	sb[2][WIDTH - 75] = 'C';
	sb[2][WIDTH - 74] = 'H';

	/*Lose $50*/
	//sb[2][WIDTH - 16] = ' ';
	sb[2][WIDTH - 15] = 'C';
	sb[2][WIDTH - 14] = 'C';
}
/*draws leftside properties*/
void printLeftSide (char sb[][WIDTH])
{
	/*O2*/
	sb[HEIGHT - 40][WIDTH - 75] = 'O';
	sb[HEIGHT - 40][WIDTH - 74] = '2';

	/*O1*/
	sb[HEIGHT - 35][WIDTH - 75] = 'O';
	sb[HEIGHT - 35][WIDTH - 74] = '1';

	/*RR2*/
	sb[HEIGHT - 29][WIDTH - 75] = 'R';
	sb[HEIGHT - 29][WIDTH - 74] = 'R';
	sb[HEIGHT - 29][WIDTH - 73] = '2';

	/*P2*/
	sb[HEIGHT - 23][WIDTH - 75] = 'P';
	sb[HEIGHT - 23][WIDTH - 74] = '2';

	/*P1*/
	sb[HEIGHT - 17][WIDTH - 75] = 'P';
	sb[HEIGHT - 17][WIDTH - 74] = '1';

}
/*draws bottom properties*/
void printBottom(char sb[][WIDTH])
{
	/*PROPERTIES*/
	sb[HEIGHT - 11][WIDTH - 16] = '<';
	sb[HEIGHT - 11][WIDTH - 15] = '-';
	sb[HEIGHT - 11][WIDTH - 14] = '-';
	sb[HEIGHT - 11][WIDTH - 13] = '-';
	sb[HEIGHT - 12][WIDTH - 15] = 'G';
	sb[HEIGHT - 12][WIDTH - 14] = 'O';
	sb[HEIGHT - 12][WIDTH - 13] = '!';

	/*M1*/
	sb[HEIGHT - 12][WIDTH - 26] = 'M';
	sb[HEIGHT - 12][WIDTH - 25] = '1';
	/*M2*/
	sb[HEIGHT - 12][WIDTH - 35] = 'M';
	sb[HEIGHT - 12][WIDTH - 34] = '2';
	/*RR1*/
	sb[HEIGHT - 12][WIDTH - 46] = 'R';
	sb[HEIGHT - 12][WIDTH - 45] = 'R';
	sb[HEIGHT - 12][WIDTH - 44] = '1';
	/*V1*/
	sb[HEIGHT - 12][WIDTH - 55] = 'V';
	sb[HEIGHT - 12][WIDTH - 54] = '1';
	/*V2*/
	sb[HEIGHT - 12][WIDTH - 66] = 'V';
	sb[HEIGHT - 12][WIDTH - 65] = '2';
	/*Community Chest*/
	sb[HEIGHT - 12][WIDTH - 75] = 'C';
	sb[HEIGHT - 12][WIDTH - 74] = 'C';
}
/*draws rightside properties*/
void printRightSide(char sb[][WIDTH])
{
	/*G1*/
	sb[10][WIDTH - 15] = 'G';
	sb[10][WIDTH - 14] = '1';

	/*G2*/
	sb[15][WIDTH - 15] = 'G';
	sb[15][WIDTH - 14] = '2';

	/*RR4*/
	sb[21][WIDTH - 15] = 'R';
	sb[21][WIDTH - 14] = 'R';
	sb[21][WIDTH - 13] = '4';

	/*B1*/
	sb[27][WIDTH - 15] = 'B';
	sb[27][WIDTH - 14] = '1';
	/*B2*/
	sb[33][WIDTH - 15] = 'B';
	sb[33][WIDTH - 14] = '2';
}
/*prints the title*/
void printTitle(char sb[][WIDTH])
{

	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) - 4] = 'M';
	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) - 3] = 'O';
	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) - 2] = 'N';
	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) - 1] = 'O';
	sb[(HEIGHT - 10) / 2][(WIDTH - 10) / 2] = 'P';
	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) + 1] = 'O';
	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) + 2] = 'L';
	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) + 3] = 'Y';
	sb[(HEIGHT - 10) / 2][((WIDTH - 10) / 2) + 4] = '!';

}
/*Roll Function that determines moves. The function takes in the turn whehter it is at 1 or 2 and both players. If it is turn 1 then
player 1 rolls and their location is moved. Vice versa for player 2*/
void roll(int turn, player * play1, player * play2)
{
	int dice, dice2;
	int sumRoll; 
	dice = rand() % 6 + 1 ;
	dice2 = rand() % 6 + 1;
	sumRoll = dice + dice2;
	
	
	if (turn == 1)
	{
		printf("%s rolls: %d.\n", (*play1).name, sumRoll);
		//printf("%s moves %d spaces.\n", (*play1).name, sumRoll);
		(*play1).location = (*play1).location + sumRoll; 
		if ((*play1).location >= 23)
			(*play1).location = (*play1).location - 23;
		printf("%s advances to sqaure %d.\n", (*play1).name, (*play1).location); 

	}
	else
	{
		
		printf("%s rolls: %d.\n", (*play2).name, sumRoll);
		//printf("%s moves %d spaces.\n", (*play2).name, sumRoll);
		(*play2).location = (*play2).location + sumRoll;
		if ((*play2).location >= 23)
			(*play2).location = (*play2).location - 23;
		printf("%s advances to sqaure %d.\n", (*play2).name, (*play2).location);
	}

	//return sumRoll;
}
/*this function determines who goes first depending on the roll the greater number will go first. This wil then return a 1 or 2 
depedning who goes first*/
/*(STRUCT PARAM) where you define a function with struct parameters or return value and one place where you call that function.*/
int goesFirst(player * play1, player * play2)
{
	int play1Roll, play2Roll;
	printf("Roll to see who goes first!\n");
	play1Roll = 1 + rand() % 6; 
	play2Roll = 1 + rand() % 6;
	printf("%s rolls: %d \n", (*play1).name,play1Roll);
	printf("%s rolls: %d \n", (*play2).name, play2Roll);

	if (play1Roll >= play2Roll)
	{
		printf("%s goes first!\n", (*play1).name);
		return 1;
	}
	else
	{
		printf("%s goes first!\n", (*play2).name);
		return 2;
	}
}
/*this function takes in both players and asks for their names and returns the name to the pointer*/
void getPlayerName(player * play1, player * play2)
{
	int nspot; 
	printf("**********Welcome to Monopoly!**********\n");
	printf("Player 1 enter your name : ");
	fgets((*play1).name, 50, stdin);
	printf("Player 2 enter your name : ");
	fgets((*play2).name, 50, stdin);
	nspot = strlen((*play1).name) - 1;
	if ((*play1).name[nspot] == '\n')
		(*play1).name[nspot] = '\0';
	nspot = strlen((*play2).name) - 1;
	if ((*play2).name[nspot] == '\n')
		(*play2).name[nspot] = '\0';
}
/*this fucntion takes in an array of properties and reads in the properties into the array*/
void readProperties(property * props, FILE* myin)
{
	int i = 0; 
	char random[30]; 
	int nspot; 
	
		
		fgets((*props).name, 4, myin); 
		fscanf(myin, "%lf%lf%d%c", &(*props).price, &(*props).rent, &(*props).ownedBy, random);
}
/*this function takes in the chance cards and reads them into the array*/
void readChance(int chance[], FILE * myin)
{
	for (int i = 0; i < 20; i++)
	{
		fscanf(myin, "%d", &chance[i]);
	}
}
/*this function takes in the community Chest and reads them into the array*/
void readCommunity(int community[], FILE * myin)
{
	for (int i = 0; i < 20; i++)
	{
		fscanf(myin, "%d", &community[i]);
	}
}
/*this fucntion takes in all the players and the property cards. This will determine the action taken when the player lands on a square.
First the fucntion checks if property is owned by checking the owned by variable either a (1,0,2). It wil then take the coressponding actions.
if the property id owned by yourself nothing happens. If the property is 0 and owned by the bank you may buy it. Otherwise 
you pay the opppsing player the rent value*/

/*(MYOWN) where you define a functions of your own design and where you call that function.*/
void propertyCards (player * play, player * otherplayer, property prop[])
{
	char buy;
	int i = (*play).location; 
	if (prop[i].ownedBy == 0)
	{
		printf("Would you like to buy %s for $ %0.2lf (Rent: $ %0.2lf)? (Y/N): ", prop[i].name, prop[i].price, prop[i].rent);
		scanf(" %c", &buy);
		if (buy == 'Y' || buy == 'y')
		{
			prop[i].ownedBy = (*play).number;
			(*play).money = (*play).money - prop[(*play).location].price;
		}
	}
	else if (prop[i].ownedBy == (*play).number)
		printf("You landed on %s owned by yourself.\n", prop[(*play).location].name);
	else
	{
		printf("You landed on another player's property please pay $%0.2lf.\n", prop[(*play).location].rent);
		(*play).money = (*play).money - prop[i].rent;
		(*otherplayer).money = (*otherplayer).money + prop[i].rent;
	}
}
/*This function takes in all the cards and players. This fucntion is used to determine wht happens and whihc functions to call in
each square. It also determines the peice location*/
/*(*PARAM) where you define a function with output (pointer) parameters and one place where you call that function.*/
/*(MYOWN) where you define a functions of your own design and where you call that function.*/
void gameStartToTweleve(player * play, player * otherplayer, int community, int chance, char sb[][WIDTH], property prop[])
{

	switch ((*play).location)
	{
	case 0:
		//print out their peice on the board 
		sb[HEIGHT - 15][WIDTH - 13] = (*play).piece;
		GoSqaure(play);
		break;
	case 1:
		sb[HEIGHT - 15][WIDTH - 26] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 2:
		sb[HEIGHT - 15][WIDTH - 35] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 3:
		sb[HEIGHT - 15][WIDTH - 45] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 4:
		sb[HEIGHT - 15][WIDTH - 55] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 5:
		sb[HEIGHT - 15][WIDTH - 66] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 6:
		sb[HEIGHT - 15][WIDTH - 75] = (*play).piece;
		communityChest(play, community);
		break;
	case 7:
		sb[HEIGHT - 20][WIDTH - 75] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 8:
		sb[HEIGHT - 26][WIDTH - 75] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 9:
		sb[HEIGHT - 32][WIDTH - 74] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 10:
		sb[HEIGHT - 38][WIDTH - 75] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 11:
		sb[HEIGHT - 43][WIDTH - 75] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 12:
		sb[3][WIDTH - 75] = (*play).piece;
		chanceCards(play, chance);
		break;
	}
}
/*This function takes in all the cards and players. This fucntion is used to determine wht happens and whihc functions to call in
each square. It also determines the peice location*/
/*(*PARAM) where you define a function with output (pointer) parameters and one place where you call that function.*/
/*(MYOWN) where you define a functions of your own design and where you call that function.*/
void gameThirteenToEnd(player * play, player * otherplayer, int community, int chance, char sb[][WIDTH], property prop[])
{

	switch ((*play).location)
	{
	
	case 13:
		sb[3][WIDTH - 66] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 14:
		sb[3][WIDTH - 55] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 15:
		sb[3][WIDTH - 45] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 16:
		sb[3][WIDTH - 35] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 17:
		sb[3][WIDTH - 26] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 18:
		sb[3][WIDTH - 15] = (*play).piece;
		communityChest(play, community); 
		break;
	case 19:
		sb[7][WIDTH - 15] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 20:
		sb[12][WIDTH - 15] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 21:
		sb[18][WIDTH - 14] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 22:
		sb[24][WIDTH - 15] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	case 23:
		sb[30][WIDTH - 15] = (*play).piece;
		propertyCards(play, otherplayer, prop);
		break;
	}
	
}
/*This fucnction clears the location of your previous peice alloowing the piece to move properly and be properly tracked*/
void clearOldMarkerZeroToTweleve(player * play, char sb[][WIDTH])
{
	switch ((*play).location)
	{
	case 0:
		sb[HEIGHT - 15][WIDTH - 13] = ' ';
		break;
	case 1:
		sb[HEIGHT - 15][WIDTH - 26] = ' ';
		break;
	case 2:
		sb[HEIGHT - 15][WIDTH - 35] = ' ';
		break;
	case 3:
		sb[HEIGHT - 15][WIDTH - 45] = ' ';
		break;
	case 4:
		sb[HEIGHT - 15][WIDTH - 55] = ' ';
		break;
	case 5:
		sb[HEIGHT - 15][WIDTH - 66] = ' ';
		break;
	case 6:
		sb[HEIGHT - 15][WIDTH - 75] = ' ';
		break;
	case 7:
		sb[HEIGHT - 20][WIDTH - 75] = ' ';
		break;
	case 8:
		sb[HEIGHT - 26][WIDTH - 75] = ' ';
		break;
	case 9:
		sb[HEIGHT - 32][WIDTH - 74] = ' ';
		break;
	case 10:
		sb[HEIGHT - 38][WIDTH - 75] = ' ';
		break;
	case 11:
		sb[HEIGHT - 43][WIDTH - 75] = ' ';
		break;
	case 12:
		sb[3][WIDTH - 75] = ' ';
		break;
	}
}
/*This fucnction clears the location of your previous peice alloowing the piece to move properly and be properly tracked*/
void clearOldMarkerThirteenToTwentyThree(player * play, char sb[][WIDTH])
{
	switch ((*play).location)
{
		case 13:
			sb[3][WIDTH - 66] = ' ';
			break;
		case 14:
			sb[3][WIDTH - 55] = ' ';
			break;
		case 15:
			sb[3][WIDTH - 45] = ' ';
			break;
		case 16:
			sb[3][WIDTH - 35] = ' ';
			break;
		case 17:
			sb[3][WIDTH - 26] = ' ';
			break;
		case 18:
			sb[3][WIDTH - 15] = ' ';
			break;
		case 19:
			sb[7][WIDTH - 15] = ' ';
			break;
		case 20:
			sb[12][WIDTH - 15] = ' ';
			break;
		case 21:
			sb[18][WIDTH - 14] = ' ';
			break;
		case 22:
			sb[24][WIDTH - 15] = ' ';
			break;
		case 23:
			sb[30][WIDTH - 15] = ' ';
			break;
	}
}
/*This fucntion shows what happens when landing on a CC sqaure. A number i is randomized 1-20 and a random amount is determined
The player either loses or gains that amount of money*/
/*(MYOWN) where you define a functions of your own design and where you call that function.*/
void communityChest(player * play, int communtiy[])
{
	/*(RAND) where you use randomness*/
	int i = rand() % 20;
	int amt = communtiy[i];
	if (amt > 0)
	{
		printf("You just won $%d!\n", amt);
		(*play).money = (*play).money + amt;
	}
	else
	{
		printf("You just lost $%d!\n", amt);
		(*play).money = (*play).money + amt;
	}
}
/*This fucntion shows what happens when landing on a CH sqaure. A number i is randomized 1-20 and a random amount is determined
The player either loses or gains that amount of money*/
/*(MYOWN) where you define a functions of your own design and where you call that function.*/
void chanceCards(player * play, int chance[])
{
	int i = rand() % 20;
	int amt = chance[i];
	if (amt > 0)
	{
		printf("You just won $%d!\n", amt);
		(*play).money = (*play).money + amt;
	}
	else
	{
		printf("You just lost $%d!\n", amt);
		(*play).money = (*play).money + amt;
	}
}
/*When a player lands on the Go! Square this fucntion is called. This fucntion adds 200 to their money*/
void GoSqaure(player * play)
{
	printf("You just landed on GO! collect $200!\n"); 
	(*play).money = (*play).money + 200.00; 
} 
/*This fucntion searches the list of properties when the game is ended for the players that own each property and returns the index*/
/*(SEARCH) where you call the search function. (At least one occurence)*/
int searchOwner(property list[], player * play, int start)
{
	int i = start;
	int target = (*play).number; 
	while (i < 24)
	{
		if (list[i].ownedBy == target)
		{
			return i;
		}
		else
			i++; 
	}
	return -1; 
}
/*This fucntion sets the list at which property is owned by which player and calls the search and sort functions*/
/*(STRUCT PARAM) where you define a function with struct parameters or return value and one place where you call that function.*/
int assignOwners(property list[], property playerprop[], player * play)
{
	int PropertyLocation = 0;
	int start = 0;
	int i = 0;
	//printf("%s's Properties\n", (*play).name);
	//printf("NAME\tPRICE\tRENT\n\n");
	int z = 0;
	while (PropertyLocation != -1)
	{
		PropertyLocation = searchOwner(list, play, start);
		strcpy(playerprop[i].name, list[PropertyLocation].name);
		playerprop[i].price = list[PropertyLocation].price;
		playerprop[i].rent = list[PropertyLocation].rent;
		start = PropertyLocation + 1;
		i++;
	}
	bubblesort(playerprop, i);
	return i; 
	/*for (int k = 0; k < i - 1; k++)
	{
		printf("%s\t$%0.2lf\t$%0.2lf\n", playerprop[k].name, playerprop[k].price, playerprop[k].rent);
	} */
}
/*********< swap >************/
/* swap the values pointed to by *x and *y */
void swap(property* x, property* y)
{
	property z;
	z = *x;
	*x = *y;
	*y = z;
}

/*********< bubblesort >************/
/* sort the array list into increasing order
n is the number of items in the array.  */

/*(SORT) where you call the sort function.*/
void bubblesort(property list[], int n)
{
	int last; /* subscript of last
			  element of unsorted array*/

	int i; 	/*  index of first element in
			pair being compared */



	/*for each value of last from n-1(whole array) to 1 (2 element array)*/
	for (last = n - 1; last >= 1; last--)
		/*for each value of i from 0 to last-1*/
		for (i = 0; i <= last - 1; i++)
			/* if list[i]>list[i+1] */
			if (strcmp(list[i].name, list[i+1].name) > 0)
				/*swap these two elements*/
				swap(&list[i], &list[i + 1]);
}
/*This function takes in all the infromation then displays it all in an output file called MonopolyResults.txt*/
void drawOutput(player * playerOne, player * playerTwo, property OneProperty[], property TwoProperty[], int OneSize, int TwoSize)
{   /*(I/O) somewhere that you read from and write to a file. (You do not have to mark all occurences, but at least one input and one output.)*/
	FILE * myout;
	myout = fopen("MonopolyResults.txt", "w");
	printf("\t\tMonopoly Results\n");
	fprintf(myout,"\t\tMonopoly Results\n");
	printf("----------------------------------------------\n");
	fprintf(myout,"----------------------------------------------\n");
	printf("%s's Money: $%0.2lf\n", (*playerOne).name, (*playerOne).money);
	fprintf(myout, "%s's Money: $%0.2lf\n", (*playerOne).name, (*playerOne).money);
	printf("%s's Properties\n", (*playerOne).name);
	fprintf(myout,"%s's Properties\n", (*playerOne).name);
	printf("NAME\tPRICE\tRENT\n\n");
	fprintf(myout, "NAME\tPRICE\tRENT\n\n");
	for (int k = 0; k < OneSize - 1; k++)
	{
		printf("%s\t$%0.2lf\t$%0.2lf\n", OneProperty[k].name, OneProperty[k].price, OneProperty[k].rent);
		fprintf(myout, "%s\t$%0.2lf\t$%0.2lf\n", OneProperty[k].name, OneProperty[k].price, OneProperty[k].rent);
	}
	printf("\n\n%s's Money: $%0.2lf\n", (*playerTwo).name, (*playerTwo).money);
	fprintf(myout, "\n\n%s's Money: $%0.2lf\n", (*playerTwo).name, (*playerTwo).money);
	printf("%s's Properties\n", (*playerTwo).name);
	fprintf(myout,"%s's Properties\n", (*playerTwo).name);
	printf("NAME\tPRICE\tRENT\n\n");
	fprintf(myout, "NAME\tPRICE\tRENT\n\n");
	for (int k = 0; k < TwoSize - 1; k++)
	{
		printf("%s\t$%0.2lf\t$%0.2lf\n", TwoProperty[k].name, TwoProperty[k].price, TwoProperty[k].rent);
		fprintf(myout, "%s\t$%0.2lf\t$%0.2lf\n", TwoProperty[k].name, TwoProperty[k].price, TwoProperty[k].rent);
	}
	fclose(myout);
}

