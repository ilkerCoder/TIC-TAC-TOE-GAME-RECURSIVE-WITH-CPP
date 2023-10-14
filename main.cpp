#include <iostream>
using namespace std;
void board(int choosenCell, char entries[]);
void play(char player, char entries[]);
bool isWin(char player, char entries[]);
char x = 'x';
char o = 'o';
char decision;
int main()
{
   char entries[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

   char player;
   do
   {
      cout << " _   _  _ . _   _  _ ._   _  _ ." << endl
           << "          +          +         +"
           << endl
           << "          |          |         |"
           << endl;
      cout << " _   _  _ . _   _  _ ._   _  _ ." << endl
           << "          +          +         +"
           << endl
           << "          |          |         |"
           << endl;
      cout << " _   _  _ . _   _  _ ._   _  _ ." << endl
           << "          +          +         +"
           << endl
           << "          |          |         |"
           << endl;
      cout << " _   _  _ . _   _  _ ._  _  _  ." << endl;
      cout << "CHOOSE THE FIRST PLAYER:X-O" << endl;
      cin >> player;
      player = tolower(player);
      if (player != 'x' && player != 'o')
      {
         cout << "**ERROR MASSAGE**!!YOU TYPED WRONG.PLEASE TYPE VALID CHARACTER(X-O)!! **ERROR MASSAGE**" << endl;
      }

   } while (player != 'x' && player != 'o');

   play(player, entries);

   return 0;
}
void play(char player, char entries[])
{
   char uppercaseplayer = toupper(player);
   int choosenCell;
   if (isWin(player, entries))
   {

      do
      {
         cout << "Do you want to play again? (Y-N)";
         cin >> decision;
         if (decision == 'Y' || decision == 'y')
         {
            // RESET THE FİELDS
            for (int i = 0; i < 9; i++)
            {
               entries[i] = ' ';
            }
            // RESTART THE GAME
            main();
         }
         else if (decision == 'n' || decision == 'N')
         {
            cout << "OKAY. WE HOPE YOU ENJOYED THE GAME. GAME IS CLOSING...";
            exit(0);
         }
         else
         {
            cout << "YOU PRESSED UNVALID CHARACTER PLEASE CHOOSE THE VALID ONE \n DO YOU WANT TO START A NEW GAME? PLEASE PRESS(Y-N)";
         }
      } while (decision != 'y' || decision != 'Y' || decision != 'n' || decision != 'N');
   }

   cout << "THE OWNER OF  " << uppercaseplayer << ": PLEASE PICK A NUMBER OF 1-9\n";
   cin >> choosenCell;
   choosenCell -= 1;
   if (entries[choosenCell] == ' ')
   {
      entries[choosenCell] = player;
      if (player == 'x')
      {
         player = 'o';
      }
      else
      {
         player = 'x';
      }
   }
   else
   {
      cout << "**ERROR MESSAGE**!!THE TYPED CELL İS ALREADY TAKEN. PLEASE PİCK AN EMPTY ONE.!!!**ERROR MESSAGE**" << endl;
   }

   board(choosenCell, entries);
   isWin(player, entries);

   play(player, entries);
}
bool isWin(char player, char entries[])
{
   if (entries[0] != ' ' && entries[0] == entries[1] && entries[1] == entries[2])
   {
      entries[0] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[0] != ' ' && entries[0] == entries[3] && entries[3] == entries[6])
   {
      entries[0] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[0] != ' ' && entries[0] == entries[4] && entries[4] == entries[8])
   {
      entries[0] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[1] != ' ' && entries[1] == entries[4] && entries[4] == entries[7])
   {
      entries[1] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[2] != ' ' && entries[2] == entries[5] && entries[5] == entries[7])
   {
      entries[2] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[2] != ' ' && entries[2] == entries[4] && entries[4] == entries[6])
   {
      entries[2] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[3] != ' ' && entries[3] == entries[4] && entries[4] == entries[5])
   {
      entries[3] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[6] != ' ' && entries[6] == entries[7] && entries[7] == entries[8])
   {
      entries[6] == player ? cout << player << " WINNED THE GAME" : cout << player << " LOSED THE GAME.";
      return true;
   }
   else if (entries[0] != ' ' && entries[1] != ' ' && entries[2] != ' ' && entries[3] != ' ' && entries[4] != ' ' && entries[5] != ' ' && entries[6] != ' ' && entries[7] != ' ' && entries[8] != ' ')
   {
      cout << "GAME İS DRAW.DO YOU WANT TO PLAY AGAİN?(Y-N)";
      cin >> decision;
      if (decision == 'Y' || decision == 'y')
      {
         // RESET THE FİELDS
         for (int i = 0; i < 9; i++)
         {
            entries[i] = ' ';
         }
         // RESTART THE GAME
         main();
      }
      else
      {
         exit(0);
      }
      return false;
   }
   return false;
}
void board(int choosenCell, char entries[])
{

   cout << " _   _  _ . _   _  _ . _   _  _." << endl
        << "          +          +         +"
        << endl
        << "     " << entries[0] << "    |"
        << "     " << entries[1] << "    |"
        << "     " << entries[2] << "   |"
        << endl;
   cout << " _   _  _ . _   _  _ . _   _  _." << endl
        << "          +          +         +"
        << endl
        << "     " << entries[3] << "    |"
        << "     " << entries[4] << "    |"
        << "     " << entries[5] << "   |"
        << endl;
   cout << " _   _  _ . _   _  _ . _   _  _." << endl
        << "          +          +         +"
        << endl
        << "     " << entries[6] << "    |"
        << "     " << entries[7] << "    |"
        << "     " << entries[8] << "   |"
        << endl;
   cout << " _   _  _ . _   _  _ ._  _  _  ." << endl;
}