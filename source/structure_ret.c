#include <stdio.h>
#include <string.h>

struct _word {
  char str[20];
  int count;
};

struct _word make_word(const char* str) {
  struct _word w;
  strncpy(w.str, str, sizeof(w.str));
  w.count = 0;
  return w;
}

int main() {

  struct _word word1 = make_word("Turtle");

  printf("%s %d\n", word1.str, word1.count); 

  return 0;
}
