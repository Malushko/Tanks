#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32
#define EXIT 27
using namespace std;
HANDLE hCon = GetStdHandle (STD_OUTPUT_HANDLE);

enum Tank_Direction{
    SOUTH = 0,
    NORTH,
    EAST,
    WEST
};
//переробити функцію дробтанкап для переміщення танка в різні сторони прописавши функцію void drawTankForDirection, танк перевернутий буде 3*8(| |-)
//const int LEFT = 75;
//const int RIGHT = 77;
//const int UP = 72;
//const int DOWN = 80;

void drawTankUp(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
       printf("  %c  \n",220);
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       printf("  %c  \n",186);
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c%c%c%c\n",178,178,202,178,178);
       }else{
           printf("%c%c%c%c%c\n",176,176,202,176,176);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c %c%c\n",178,178,178,178);
       }else{
           printf("%c%c %c%c\n",176,176,176,176);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c %c%c\n",178,178,178,178);
       }else{
           printf("%c%c %c%c\n",176,176,176,176);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c%c%c%c\n",178,178,205,178,178);
       }else{
           printf("%c%c%c%c%c\n",176,176,205,176,176);
       }
}

void drawTankDown(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c%c%c%c\n",176,176,205,176,176);
    }else{
        printf("%c%c%c%c%c\n",178,178,205,178,178);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c %c%c\n",176,176,176,176);
    }else{
        printf("%c%c %c%c\n",178,178,178,178);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c %c%c\n",176,176,176,176);
    }else{
        printf("%c%c %c%c\n",178,178,178,178);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c%c%c%c\n",176,176,203,176,176);
    }else{
        printf("%c%c%c%c%c\n",178,178,203,178,178);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("  %c  \n",186);
       drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
       printf("  %c  \n",223);
}

void drawTankLeft(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0){
        printf("   %c%c%c%c%c%c\n",178,176,178,176,178,176);
    }else{
        printf("   %c%c%c%c%c%c\n",176,178,176,178,176,178);
    }
       drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
       printf("%c%c%c%c    %c\n",254,205,205,186,186);
       drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0){
        printf("   %c%c%c%c%c%c\n",178,176,178,176,178,176);
    }else{
        printf("   %c%c%c%c%c%c\n",176,178,176,178,176,178);
    }
}

void drawTankRight(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0){
        printf("%c%c%c%c%c%c\n",178,176,178,176,178,176);
    }else{
        printf("%c%c%c%c%c%c\n",176,178,176,178,176,178);
    }
       drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
       printf("%c    %c%c%c%c\n",186,186,205,205,254);
       drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0){
        printf("%c%c%c%c%c%c\n",178,176,178,176,178,176);
    }else{
        printf("%c%c%c%c%c%c\n",176,178,176,178,176,178);
    }
}

int main()
{
    system ("mode con cols=165 lines=65");
    CONSOLE_CURSOR_INFO cursorInfo; //структура по курсору
    cursorInfo.bVisible = false;//курсор выключен true ввключить курсор
    cursorInfo.dwSize = 1; //
    SetConsoleCursorInfo(hCon, &cursorInfo);
    drawTankUp({40,10});
    while(true)
    {
        int ch = getch();
        switch(ch)
        {
            case DOWN: //down
                break;
            case UP: //up
            SetConsoleCursorInfo(hCon, &cursorInfo);
            drawTankUp({40,40+5});
                break;
            case RIGHT://right
                break;
            case LEFT://left
                break;
            case SPACE://shot
                break;
            case EXIT://exit
            return 0;
        }
    }

return 0;
}






/*#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

enum TANK_DIRECTION {
   SOUTH = 0,
   NORTH,
   EAST,
   WEST
};

const int LEFT = 75;
const int RIGHT = 77;
const int UP = 72;
const int DOWN = 80;



void drawTankForDirection(COORD drawPos) {

   SetConsoleCursorPosition(hCon,drawPos);
   printf("  %c  \n",220);
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   printf("  %c  \n",186);
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c%c%c%c\n",178,178,202,178,178);
   }else{
       printf("%c%c%c%c%c\n",176,176,202,176,176);
   }
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c %c%c\n",178,178,178,178);
   }else{
       printf("%c%c %c%c\n",176,176,176,176);
   }
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c %c%c\n",178,178,178,178);
   }else{
       printf("%c%c %c%c\n",176,176,176,176);
   }
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c%c%c%c\n",178,178,205,178,178);
   }else{
       printf("%c%c%c%c%c\n",176,176,205,176,176);
   }
}

int main()
{
   system("mode con cols=165 lines=65");
   CONSOLE_CURSOR_INFO curInfo;

   curInfo.bVisible = false;
   curInfo.dwSize = 1;
   SetConsoleCursorInfo(hCon, &curInfo);

   while(true)
   {
       int ch = getch();
       switch(ch)
       {
           case DOWN: //down

               break;
           case UP: //up
           drawTankForDirection();
               break;
           case RIGHT://right

               break;
           case LEFT://left

               break;
           case 32://shot

               break;
           case 27://exit
           return 0;
       }

   }

   return 0;
}

*/
