#include <stdio.h>
int main() {
  printf("Our topics today are: %s %d %lf\n", "updog", 21, 3.1415);
  printf("%s \n", "Do you want some updog");
  printf("%d \n", 55);
  printf("%c \n", 'w');
  printf("%lf \n", 10.5);
  printf("%s %c %d \n", "Do you want some updog", 'w', 55);

  int hi = 50;
  char hey = 'd';
  printf("%d %c \n", hi, hey);
  for(int i = 0; i < 50; i++) {
    printf("%s", "bo");
  }
  return 0;
}
