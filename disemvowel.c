#include <stdio.h>
#include <stdlib.h>

char *disemvowel(const char *str)
{
  // assigns memory to the pointer.
  char *conso = (char *)malloc(sizeof(str));

  int current, updated;
  current = 0;
  updated = 0;
  while(*(str + current) != '\0')
  {
    if(*(str + current) == 'a' || *(str + current) == 'A' ||
        *(str + current) == 'e' || *(str + current) == 'E' ||
        *(str + current) == 'i' || *(str + current) == 'I' ||
        *(str + current) == 'o' || *(str + current) == 'O' ||
        *(str + current) == 'u' || *(str + current) == 'U'){
          current++;
        }
    else{
      *(conso + updated++) = *(str + current++);
    }
  }
  *(conso + updated) = '\0';
  //*(conso + current) = '\0';
  //free(str);
  return conso;
}

int main(){
char *str = "This is consonant.";
printf("%s",disemvowel(str));
  return 0;
}
