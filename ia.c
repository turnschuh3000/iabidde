/*
 * IA Copyleft Team Guenther Software Productions
 * Licensed unter WTF Public License
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Sleep-Zeiten in Sekunden
#define MIN_SLEEP 1
#define MAX_SLEEP 6

#define RAGE_CHANCE 2

int getRandomInt(int min, int max) {
    return (random() % (max - min)) + min;
}

int getSleepTime(int randomMode) {
    if (!randomMode) {
        return 1;
    } else {
        return getRandomInt(MIN_SLEEP, MAX_SLEEP);
    }
}

int main(int argc, char* argv[]) {
    // Argumente
    int randomMode = 0;
    int i;
    for (i = 1; i < argc; i++) {
        char* argument = argv[i];
        if (strcasecmp(argument, "-random") == 0) { // Random-Mode!
            randomMode = 1;
            srandom(time(NULL));
            puts("RANDOM-MODE ACTIVATED!!!!!!!!\n\n\n");
        }
    }

    int j;
    int iaPrinted = 0; // Wurde "IA" schonmal ausgegeben?
    puts("Hey Niko!");
    system("espeak -v german \"Hey Niko!\"");
    sleep(getSleepTime(randomMode));
    while (1) {
        if (randomMode) {
            j = random() % 3;
            if (j == 0) {
                puts("IA! ");
                system("espeak -v german \"IA\"");
                iaPrinted = 1;
                sleep(getSleepTime(randomMode));
            }
            
            // Aufreger mit 2% Wahrscheinlichkeit. IA muss einmal ausgegeben
            // worden sein.
            if ((iaPrinted) && (getRandomInt(0, 100) <= RAGE_CHANCE)) {
                puts("Was ist IA? Verdammt sag es doch einfach >:-(");
                system("espeak -v german \"Was ist IA? Verdammt sag es doch einfach! Grrrr\"");
                sleep(getSleepTime(randomMode));
            }
            
        }
        puts("IA! ");
        system("espeak -v german \"IA\"");
        iaPrinted = 1;
        sleep(getSleepTime(randomMode));
        puts("Bidde? ");
        system("espeak -p 99 \"Bittr?\"");
        sleep(getSleepTime(randomMode));
    }
}#include <stdio.h>
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
