#include <stdbool.h> // use true/false
#include <stdio.h>   // for printf and scanf
#include <string.h>  // for strcmp

int main(void) {  // program starts
  char input[40]; // user input
  int tries = 0;  // wrong attempts

  printf("Hello. Welcome to the spare parts inventory!\n"); // greeting

  while (true) {                        // loop until part is found
    printf("Which part do you need? "); // ask user
    scanf(" %39[^\n]", input);          // read input (max 39 chars)

    // strcmp == 0 means strings match
    if (strcmp(input, "hydraulic pump") == 0) {
      printf("I've got a hydraulic pump here for you!\n");
      return 0; // end program
    } else if (strcmp(input, "PLC module") == 0) {
      printf("I've got a PLC module here for you!\n");
      return 0; // end program
    } else if (strcmp(input, "servo motor") == 0) {
      printf("I've got a servo motor here for you!\n");
      return 0; // end program
    } else if (strcmp(input, "Show stock") == 0) {
      printf("\nHere is what we have in stock:\n");
      printf("hydraulic pump\n");
      printf("PLC module\n");
      printf("servo motor\n");
      continue; // go back to top of loop
    } else {
      printf("I am afraid we don't have any %s in the inventory\n", input);
      tries = tries + 1; // add 1 wrong try
    }

    if (tries >= 3) { // after 3 wrong tries
      printf("\nHere is what we have in stock:\n");
      printf("hydraulic pump\n");
      printf("PLC module\n");
      printf("servo motor\n");
      tries = 0; // reset tries
    }
  }

  return 0; // not used since program must end in loop
}
