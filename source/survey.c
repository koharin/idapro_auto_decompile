#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

int main()
{
  int frequency[FREQUENCY_SIZE] = { };

  int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
       1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
       5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

  for(size_t answer = 0; answer < RESPONSES_SIZE; answer++) {
    frequency[responses[answer]]++;
  }

  printf("%s%17s\n", "Rating", "Frequency");

  for(size_t rating = 1; rating < FREQUENCY_SIZE; rating++) {
    printf("%6lu%17d\n", rating, frequency[rating]);
  }

  return 0;
}
