#include <stdio.h>
#include <string.h>

char *isAscii(char stringp[]) {
  for (size_t i = 0; i < strlen(stringp); i++) {
    if (stringp[i] < 0 || stringp[i] > 127) {
      return "False";
    }
  }
  return "True";
}
int main(int argc, char *argv[]) {

  if (argc <= 1) { // if no args output error

    printf("\n\033[31mError no valid argument passed!\n");
    printf("Run strprop -h for help\033[0m\n\n");

  } else if (strcmp(argv[1], "-h") == 0) { //help dialog

    printf("\n\033[35mUsage of strprop:\033[0m\n");
    printf("strprop [\033[0;32mstring\033[0m]\n");
    printf("You must provide a string as an argument.\n\n");

    printf("\033[35mDescription:\033[0m\n");
    printf("This program checks various properties of a given string, such as length, size, ASCII validity, etc.\n");

    printf("\n\033[35mExample:\033[0m\n");
    printf("strprop \"Hello\"\n");

    printf("\n\033[35mError Handling:\033[0m\n");
    printf("If no string is provided or an invalid argument is passed, an error will appear.\n\n");

  } else { //main program

    size_t stringLen = strlen(argv[1]);
    printf("\n\033[35mProperties for string \"%s\":\033[0m\n",argv[1]); //"title"
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\033[35mIndexes:\033[0m\n--------\n"); 
    // index positions
    for (size_t i = 0; i < stringLen; i++) {
      printf("%c  ", argv[1][i]);
    }

    printf("\n");
    for (size_t i = 0; i < stringLen; i++) {
      printf("%zu  ", i);
    }

    printf("\n\n\033[35mOther propieties:\033[0m\n"); // other propieites
    printf("-----------------\n");
    printf("\033[36mLength: \033[0m%zu", stringLen);
    printf("\n\033[36mSize: \033[0m%zu Bytes", stringLen + 1); // strlen +1 because sizeoff will give the size of the pointer not the string
    printf("\n\033[36mIs ASCII: \033[0m%s", isAscii(argv[1]));
    printf("\n\033[36mMemory address: \033[0m%p\n\n", (void *)argv[1]);

  }
}
// Magenta: \033[35m
// Cyan: \033[36m
// Green: \033[0;32m
// Reset: \033[0m
