#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char *concatenate(char *a, char *b, char *c)
{
  int size = strlen(a) + strlen(b) + strlen(c) + 1;
  char *str = malloc(size);
  strcpy (str, a);
  strcat (str, b);
  strcat (str, c);

  return str;
}

int main(void) {

    char *str = concatenate("I"," hate", " it");
    char *str2 = concatenate(str[0]," that I love"," it");

    printf("%s", str2);
    free(str);

    return 0;
}

