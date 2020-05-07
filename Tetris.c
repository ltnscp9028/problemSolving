#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include 
#define WIDTH 50
#define HEIGHT 26
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
      gotoxy(WIDTH/2-4, HEIGHT / 2);
      printf("TETRIS!");
      Sleep(400);
      gotoxy(WIDTH/2-4, HEIGHT / 2);
      printf("       ");
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
         //if (y < 2) printf("\n");
         if (x == 0 || y == 0 || x == WIDTH - 2 || y == HEIGHT - 1) printf("¡Ú");
         else printf("  ");
      }
   }
}
int main(){
   resizeConsole();
   clearCursor();
   printBound();
   displayStartScreen();
   getchar; 
   system("cls");
}
