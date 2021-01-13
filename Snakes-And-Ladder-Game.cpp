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
    gamescore(player1name, player2name, player1, player2);
    cout << "\n\n\n";
    if (player1 >= player2)
        cout << player1name << " !! You are the winner of the game\n\n";
    else
        cout << player2name << " !! You are the winner of the game\n\n";
    draw_line(50, '+');
    getch();
}
void draw_line(int n, char ch)
{
    for (int i = 0; i < n; i++)
        cout << ch;
}

void board()
{
    clrscr();
    cout << "\n\n";
    draw_line(50, '-');
    cout << "\n\t\tSNAKE AT POSITION\n";
    draw_line(50, '-');
    cout << "\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
    draw_line(50, '-');
    cout << "\n\t\t LADDER AT POSITION\n";
    draw_line(50, '-');
    cout << "\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
    draw_line(50, '-');
    cout << endl;
}
