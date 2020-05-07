#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include<conio.h>
#include<time.h>
#define WIDTH 50
#define HEIGHT 24
#define LEFT 75
#define RIGHT 77
#define STAR_NUM 30
typedef struct _Star
{
   int x;
   int y;
   int speed;
}Star;

void gotoxy(int x, int y) {
   COORD pos = { x, y };
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void resizeConsole() {
   char chTemp[50];
   sprintf(chTemp, "Mode con cols=%d lines=%d", WIDTH, HEIGHT);
   system(chTemp);
}

void clearCursor() {
   CONSOLE_CURSOR_INFO c = { 0 };
   c.dwSize = 1;
   c.bVisible = FALSE;
   SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &c);
}
void displayStartScreen() {
   while (!kbhit()) {
      gotoxy(11, HEIGHT / 2);
      printf("시작하려면 아무키나 누르세요");
      Sleep(400);
      gotoxy(11, HEIGHT / 2);
      printf("                            ");
      Sleep(600);
   }
   while (_kbhit()) {
      _getch();
   }
}
void printBound() {
	int x,y = 0;
   for (y=0; y < HEIGHT; y++) {
      for (x = 0; x < WIDTH; x += 2) {
         if (y < 2) printf("\n");
         else if (x == 0 || y == 2 || x == WIDTH - 2 || y == HEIGHT - 1) printf("■");
         else printf("  ");
      }
   }
}
void initstar(Star *s)
{
	int i=0;
   for(i=0;i<STAR_NUM;i++)
   {
      s[i].x=rand()%46+2;
      s[i].y=3;
      s[i].speed=rand()%10 +10;
   }
}
void displaystar(Star *s,int count)
{
	int i=0;
   for(i=0;i<STAR_NUM;i++)
   {
   	if(s[i].y>3&&s[i].y<HEIGHT-1&& (count)%s[i].speed==0){
    	  gotoxy(s[i].x,s[i].y-1);	
    		printf(" ");
    	}
    if(s[i].y>HEIGHT-2&& (count)%s[i].speed==0){	
    	gotoxy(s[i].x,s[i].y-1);
		printf(" ");
		s[i].x=rand()%46+2;
    	s[i].y=3;
    	s[i].speed=rand()%10 +10;
	}
	if(count%s[i].speed == 0){
		gotoxy(s[i].x, s[i].y);
    	printf("*");
    	s[i].y++;
	}	
	}
}
void displayScore(int s) {
   gotoxy(WIDTH / 2, 1);
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
   printf("Score : %2d", s);
}
void move(int x, int dir)
{
   if(dir==LEFT)
   {
      gotoxy(x+1,HEIGHT-2);
      printf(" ");
   }
   else if(dir == RIGHT)
   {
      gotoxy(x-1,HEIGHT-2);
      printf(" ");
   }
   gotoxy(x,HEIGHT-2);
   printf("▲"); 
}
int checkCrush(Star *s,int x){
	int i;
	for(i=0;i<STAR_NUM;i++){
		if(s[i].y == HEIGHT-2 && 
		(s[i].x == x || s[i].x==x+1))
		return 1;
	}
	return 0;
}
int main() {
   srand(time(NULL));
   int score = 0;
   int count = 0;
   char key;
   int xPosition = WIDTH/2;
   Star s[STAR_NUM];
   resizeConsole();
   clearCursor();
   displayStartScreen();
   system("cls");
   printBound();
   displayScore(score);
   initstar(s);
   move(xPosition,0);
   while (1) {
		displaystar(s,count);
         if(kbhit())
         {
         key = getch();
         if(key==LEFT)
         {
            if(xPosition>2)
               move(--xPosition,LEFT);
         }   
         else if(key==RIGHT)
         {
            if(xPosition< WIDTH-4)
               move(++xPosition,RIGHT);
         }
      }
         if (count % 100 == 0) {
         displayScore(score);
         score++;
         count = 0;
      }
      if(checkCrush(s,xPosition)){
      	system("cls");
      	gotoxy(WIDTH/2-6,HEIGHT/2);
      	puts("You Died.");
      	gotoxy(WIDTH/2-6,HEIGHT/2+1);
    	printf("Score : %d",score);
    	break;
	  }
      Sleep(10);
      count++;
   }
   getchar();
}
