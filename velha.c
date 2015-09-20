#include <stdio.h>
#include <windows.h>

int main()
{
     int x = 20, y = 2, coord1 = 0, coord2 = 0, coord3 = 0, coord4 = 0, coord5 = 0, coord6 = 0, coord7 = 0, coord8 = 0, coord9 = 0, repete = 1;
     int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6 = 0, v7 = 0, v8 = 0;
     int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0;
     char opc, play1[10], play2[10];

     void posicionaCursor(short x, short y);
     void carregaVelha(int x, int y);

     carregaVelha(x, y);
     posicionaCursor(0, 21);
     printf("\t\t\tPlayer 1 - Nome: ");
     scanf("%s", play1);
     system("cls");
     carregaVelha(x, y);
     posicionaCursor(0, 21);
     printf("\t\t\tPlayer 2 - Nome: ");
     scanf("%s", play2);
     system("cls");
     carregaVelha(x, y);
     while(1)
     {
         while(repete == 1)
         {
             posicionaCursor(0, 21);
             printf("\t\t\t\t%s: ", play1);
             opc = getch();
             switch(opc)
             {
                case '1':
                if(coord1 == 0)
                {
                    repete = 0;
                    posicionaCursor(26, 13);
                    printf("O");
                    coord1 = 1;
                    p1++;
                    p4++;
                    p7++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '2':
                if(coord2 == 0)
                {
                    repete = 0;
                    posicionaCursor(36, 13);
                    printf("O");
                    coord2 = 1;
                    p1++;
                    p5++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '3':
                if(coord3 == 0)
                {
                    repete = 0;
                    posicionaCursor(46, 13);
                    printf("O");
                    coord3 = 1;
                    p1++;
                    p6++;
                    p8++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '4':
                if(coord4 == 0)
                {
                    repete = 0;
                    posicionaCursor(26, 9);
                    printf("O");
                    coord4 = 1;
                    p2++;
                    p4++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '5':
                if(coord5 == 0)
                {
                    repete = 0;
                    posicionaCursor(36, 9);
                    printf("O");
                    coord5 = 1;
                    p2++;
                    p5++;
                    p7++;
                    p8++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '6':
                if(coord6 == 0)
                {
                    repete = 0;
                    posicionaCursor(46, 9);
                    printf("O");
                    coord6 = 1;
                    p2++;
                    p6++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '7':
                if(coord7 == 0)
                {
                    repete = 0;
                    posicionaCursor(26, 4);
                    printf("O");
                    coord7 = 1;
                    p3++;
                    p4++;
                    p8++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '8':
                if(coord8 == 0)
                {
                    repete = 0;
                    posicionaCursor(36, 4);
                    printf("O");
                    coord8 = 1;
                    p3++;
                    p5++;
                }
                else
                {
                    repete = 1;
                }
                break;
                case '9':
                if(coord9 == 0)
                {
                    repete = 0;
                    posicionaCursor(46, 4);
                    printf("O");
                    coord9 = 1;
                    p3++;
                    p6++;
                    p7++;
                }
                else
                {
                    repete = 1;
                }
                break;
            }
            if(p1 == 3 || p2 == 3 || p3 == 3 || p4 == 3 || p5 == 3 || p6 == 3 || p7 == 3 || p8 == 3)
            {
                system("cls");
                system("color 2F");
                printf("\n\n\n\n");
                printf("\t\t\t\tO %s venceu!!", play1);
                printf("\n\n\n\n");
                exit(1);
            }
            if(v1 > 0 && v1 < 3 && v2 > 0 && v2 < 3 && v3 > 0 && v3 < 3 && v4 > 0 && v4 < 3 && v5 > 0 && v5 < 3 && v6 > 0 && v6 < 3 && v7 > 0 && v7 < 3 && v8 > 0 && v8 < 3 && p1 > 0 && p1 < 3 && p2 > 0 && p2 < 3 && p3 > 0 && p3 < 3 && p4 > 0 && p4 < 3 && p5 > 0 && p5 < 3 && p6 > 0 && p6 < 3 && p7 > 0 && p7 < 3 && p8 > 0 && p8 < 3)
            {
                system("cls");
                system("color 4F");
                printf("\n\n\n\n");
                printf("\t\t\t\t Deu velha!!");
                printf("\n\n\n\n");
                exit(1);
            }
         }
         repete = 0;
         while(repete == 0)
         {
             posicionaCursor(0, 23);
             printf("\t\t\t\t%s: ", play2);
             opc = getch();

             switch(opc)
             {
                case '1':
                if(coord1 == 0)
                {
                    repete = 1;
                    posicionaCursor(26, 13);
                    printf("X");
                    coord1 = 1;
                    v1++;
                    v4++;
                    v7++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '2':
                if(coord2 == 0)
                {
                    repete = 1;
                    posicionaCursor(36, 13);
                    printf("X");
                    coord2 = 1;
                    v1++;
                    v5++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '3':
                if(coord3 == 0)
                {
                    repete = 1;
                    posicionaCursor(46, 13);
                    printf("X");
                    coord3 = 1;
                    v1++;
                    v6++;
                    v8++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '4':
                if(coord4 == 0)
                {
                    repete = 1;
                    posicionaCursor(26, 9);
                    printf("X");
                    coord4 = 1;
                    v2++;
                    v4++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '5':
                if(coord5 == 0)
                {
                    repete = 1;
                    posicionaCursor(36, 9);
                    printf("X");
                    coord5 = 1;
                    v2++;
                    v5++;
                    v7++;
                    v8++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '6':
                if(coord6 == 0)
                {
                    repete = 1;
                    posicionaCursor(46, 9);
                    printf("X");
                    coord6 = 1;
                    v2++;
                    v6++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '7':
                if(coord7 == 0)
                {
                    repete = 1;
                    posicionaCursor(26, 4);
                    printf("X");
                    coord7 = 1;
                    v3++;
                    v4++;
                    v8++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '8':
                if(coord8 == 0)
                {
                    repete = 1;
                    posicionaCursor(36, 4);
                    printf("X");
                    coord8 = 1;
                    v3++;
                    v5++;
                }
                else
                {
                    repete = 0;
                }
                break;
                case '9':
                if(coord9 == 0)
                {
                    repete = 1;
                    posicionaCursor(46, 4);
                    printf("X");
                    coord9 = 1;
                    v3++;
                    v6++;
                    v7++;
                }
                else
                {
                    repete = 0;
                }
                break;
            }
            if(v1 == 3 || v2 == 3 || v3 == 3 || v4 == 3 || v5 == 3 || v6 == 3 || v7 == 3 || v8 == 3)
            {
                system("cls");
                system("color 2F");
                printf("\n\n\n\n");
                printf("\t\t\t\tO %s venceu!!", play2);
                printf("\n\n\n\n");
                exit(1);
            }
         }
     }
}
void posicionaCursor(short x, short y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void carregaVelha(int x, int y)
{
   while(x <= 50)
     {
         posicionaCursor(x, 6);
         printf("-");
         posicionaCursor(x, 11);
         printf("-");
         x++;
     }
     while(y <= 15)
     {
         posicionaCursor(30, y);
         printf("|");
         posicionaCursor(40, y);
         printf("|");
         y++;
     }
}
