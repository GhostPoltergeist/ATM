#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define p printf
#define g gotoxy
/*
 * The g is define as gotoxy, and p is define as printf this is for the shortage of a certain program
 * This is also to specify the functions in a letter
 */
COORD co = {0,0};
void gotoxy(int x, int y)
{
 co.X=x;
 co.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co);
}

int main()
{
system("COLOR 0A");
p("                                       .         .           |\n");
p("          .8.    8888888 8888888888   ,8.       ,8.          |\n");
p("         .888.         8 8888        ,888.     ,888.         |\n");
p("        :88888.        8 8888       .`8888.   .`8888.        |\n");
p("       . `88888.       8 8888      ,8.`8888. ,8.`8888.       |\n");
p("      .8. `88888.      8 8888     ,8'8.`8888,8^8.`8888.      |\n");
p("     .8`8. `88888.     8 8888    ,8' `8.`8888' `8.`8888.     |\n");
p("    .8' `8. `88888.    8 8888   ,8'   `8.`88'   `8.`8888.    |\n");
p("   .8'   `8. `88888.   8 8888  ,8'     `8.`'     `8.`8888.   |\n");
p("  .888888888. `88888.  8 8888 ,8'       `8        `8.`8888.  |\n");
p(" .8'       `8. `88888. 8 8888,8'         `         `8.`8888. |\n");
p(" -------------------------------------------------------------\n");
p(" |\n");
p(" |\n");
p(" |");
    char salary;
    int q;
    p("\n[$] Enter Your salary [a: 500, b: 1000, c: 5000, d: 10,000]: ");
    scanf("%s", &salary);
    switch(salary){
     case 'a':
     p("\nYou entered 500, your bill will be processed, give us a second\n");
      if(salary==500)
       p("\n");
       sleep(5);
       p("\nYOU CAN NOW TAKE YOUR BILL\n");
       p("\nDid the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
      if (q==1){
        p("\nTHANK YOU!\n");
      }
      else if(q==2){
        p("\nPLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
     break;

     case 'b':
          p("\nYou entered 1000, your bill will be processed, give us a second\n");
      if(salary==1000)
       p("\n");
       sleep(5);
       p("\nYOU CAN NOW TAKE YOUR BILL\n");
       p("\nDid the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
      if (q==1){
        p("\nTHANK YOU!\n");
      }
      else if(q==2){
        p("\nPLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
     break;

     case 'c':
          p("\nYou entered 5000, your bill will be processed, give us a second\n");
      if(salary==5000)
       p("\n");
       sleep(5);
       p("\nYOU CAN NOW TAKE YOUR BILL\n");
       p("\nDid the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
      if (q==1){
        p("\nTHANK YOU!\n");
      }
      else if(q==2){
        p("\nPLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
     break;

     case 'd':
          p("\nYou entered 10,000, your bill will be processed, give us a second\n");
      if(salary==10,000)
       p("\n");
       sleep(5);
       p("\nYOU CAN NOW TAKE YOUR BILL\n");
       p("\nDid the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
      if (q==1){
        p("\nTHANK YOU!\n");
      }
      else if(q==2){
        p("\nPLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
     break;

     default:
     p("\nYour salary cannot be reached\n");
    }
 getchar();
}

