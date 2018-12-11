#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
const int RACE_END=70;

void moveTortoise(int*const);
void moveQuikily(int*const);
void printCurrentPositions(const int*const,const int*const);

int main()
{
   int Tortoise = 1;
   int Quikily = 1;
   int timer = 0;

   srand( time( 0 ) );

   cout << "ON YOUR MARK, GET SET\nBANG               !!!!"<< "\nAND THEY'RE OFF    !!!!\n";

   while ( Tortoise != RACE_END && Quikily != RACE_END )
   {
      moveTortoise( &Tortoise );
      moveQuikily( &Quikily );
      printCurrentPositions( &Tortoise, &Quikily );
      timer++;
   }

   if ( Tortoise >= Quikily )
      cout << "\nTORTOISE WINS!!! YAY!!!\n";
   else
      cout << "Quikily wins. Yuch.\n";

   cout << "TIME ELAPSED = " << timer << " seconds" << endl;
}

void moveTortoise( int * const turtlePtr )
{
   int x = 1 + rand() % 10;

   if ( x >= 1 && x <= 5 )
      *turtlePtr += 3;
   else if ( x == 6 || x == 7 )
      *turtlePtr -= 6;
   else
      ++( *turtlePtr );

   if ( *turtlePtr < 1 )
      *turtlePtr = 1;
   else if ( *turtlePtr > RACE_END )
      *turtlePtr = RACE_END;
}
void moveQuikily( int * const rabbitPtr )
{
   int y = 1 + rand() % 10;

   if ( y == 3 || y == 4 )
      *rabbitPtr += 9;
   else if ( y == 5 )
      *rabbitPtr -= 12;
   else if ( y >= 6 && y <= 8 )
      ++( *rabbitPtr );
   else if ( y > 8 )
      *rabbitPtr -= 2;

   if ( *rabbitPtr < 1 )
      *rabbitPtr = 1;
   else if ( *rabbitPtr > RACE_END )
      *rabbitPtr = RACE_END;
}

void printCurrentPositions( const int * const snapperPtr,const int * const bunnyPtr )
{
   if ( *bunnyPtr == *snapperPtr )
      cout << setw( *bunnyPtr ) << "OUCH!!!";
   else if ( *bunnyPtr < *snapperPtr )
      cout << setw( *bunnyPtr ) << 'H'
         << setw( *snapperPtr - *bunnyPtr ) << 'T';
   else
      cout << setw( *snapperPtr ) << 'T'
         << setw( *bunnyPtr - *snapperPtr ) << 'H';

   cout << '\n';
}
