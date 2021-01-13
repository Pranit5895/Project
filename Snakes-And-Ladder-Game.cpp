#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void draw_line(int n, char ch);
void board();
void gamescore(char name1[], char name2[], int p1, int p2);
void play_dice(int & score);

void main()
{
    int player1 = 0, player2 = 0, lastposition;
    char player1name[80], player2name[80];
    clrscr();
    randomize();
    draw_line(50, '=');
    cout << "\n\n\n\n\t\tSNAKE LADDER GAME\n\n\n\n";
    draw_line(50, '=');
    cout << "\n\n\nEnter Name of player 1 :";
    gets(player1name);
    cout << "\n\n\Enter Name of player 2 :";
    gets(player2name);
    while (player1 <= 100 && player2 <= 100)
	{
        board();
        gamescore(player1name, player2name, player1, player2);
        cout << "\n\n--->" << player1name << " Now your Turn >> Press any key to play ";
        getch();
        lastposition = player1;
        play_dice(player1);
	if (player1 < lastposition)
            cout << "\n\aOops!! Snake found !! You are at postion " << player1 << "\n";
        else if (player1 > lastposition + 6)
            cout << "\nGreat!! you got a ladder !! You are at position " << player1;#
        include < iostream.h >
            cout << "\n\n--->" << player2name << " Now your Turn >> Press any key to play ";
        getch();
        lastposition = player2;
        play_dice(player2);
	if (player2 < lastposition)
            cout << "\n\n\aOops!! Snake found !! You are at position " << player2 << "\n";
        else if (player2 > lastposition + 6)
            cout << "\n\nGreat!! you got a ladder !! You are at position " << player2 << "\n";
        getch();
    }
    clrscr();
    cout << "\n\n\n";
    draw_line(50, '+');
    cout << "\n\n\t\tRESULT\n\n";
    draw_line(50, '+');
    cout << endl;
