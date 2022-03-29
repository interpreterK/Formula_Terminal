#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int points = 0;

//cd "/Users/brusso/Desktop/C++:C/" && g++ script.cpp -o script && "/Users/brusso/Desktop/C++:C/"script

int randn(int maxn) 
{ 
  return rand() % maxn + 1;
}
void level(string levelName, int maxn, int uGuess, int uNum)
{
  printf("[Level %s]: Guess the number (1 to %s): ", &levelName, to_string(maxn));
  scanf("%d", &uGuess);
  if (uNum < uGuess) puts("The secret number is lower");
  else if (uNum > uGuess) puts("The secret number is higher");
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
    level("1", 10, uGuess, uNum);
  } while (uNum != uGuess);

  puts("Congratulations!");
  points += 5;
  level2();
  return 0;
}