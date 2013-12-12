#include <stdio.h>
#include <stdlib.h>

int main() {
  puts("Hey, Niko! ");
  system("espeak -v german \"Hey Niko!\"");
  sleep(1);
  while (1) {
    puts("IA! ");
    system("espeak -v german \"IA\"");
    sleep(1);
    puts("Bidde? ");
    system("espeak -p 99 \"Bittr\"");
    sleep(1);
  }
}
