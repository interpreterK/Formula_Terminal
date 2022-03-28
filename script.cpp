#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int points = 0;

int randn(int maxn) 
{ 
  return rand() % maxn + 1;
}
int level2()
{
  int uNum, uGuess;
  srand(time(NULL));
  uNum = randn(100);

  do { 

  } while (uNum != uGuess);
  return 0;
}
int main() // Level 1
{
  int uNum, uGuess;
  srand(time(NULL));
  uNum = randn(10);

  do {
    printf("[Level 1]: Guess the number (1 to 10): ");
    scanf("%d", &uGuess);
    if (uNum < uGuess) puts("The secret number is lower");
    else if (uNum > uGuess) puts("The secret number is higher");
  } while (uNum != uGuess);

  puts("Congratulations!");
  points += 5;
  level2();
  return 0;
}