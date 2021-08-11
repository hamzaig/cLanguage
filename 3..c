#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main(){

    for(int i=5;i<20;i++)
    {
        gotoxy(20,i);
        printf("Hellow");
    }

    getch();
}
