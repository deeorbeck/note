#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>      
using namespace std;
int main ()
{
  int iSecret, iGuess;
  srand (time(NULL));
  iSecret = rand() % 100 + 1;  /* random son */
  do {
    cout << "Tahminingizni kiriting: ";  /* input */
	cin >> iGuess;
    if (iSecret<iGuess) puts ("Noma'lum son kichikroq!");
    else if (iSecret>iGuess) puts ("Noma'lum son kattaroq!");
  } while (iSecret!=iGuess);
  printf("To'g'ri bu son %d edi!\n",iSecret);
  return 0;
}
