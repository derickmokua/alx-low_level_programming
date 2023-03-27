#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
  char password[PASSWORD_LENGTH + 1];  // 1 extra character for the null terminator
  int i, rand_num;

  // Use the current time as the seed for the random number generator
  srand(time(NULL));

  // Generate a random password
  for (i = 0; i < PASSWORD_LENGTH; i++) {
    rand_num = rand() % 62;
    if (rand_num < 26) {
      // Random uppercase letter
      password[i] = rand_num + 'A';
    } else if (rand_num < 52) {
      // Random lowercase letter
      password[i] = rand_num - 26 + 'a';
    } else {
      // Random digit
      password[i] = rand_num - 52 + '0';
    }
  }
  password[PASSWORD_LENGTH] = '\0';  // Add the null terminator

  printf("%s", password);

  return 0;
}
