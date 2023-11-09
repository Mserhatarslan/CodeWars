#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


bool IsIsogram (const char *string) 
{
  char lowercase[strlen(string) + 1];
    for (int i = 0; string[i]; i++) {
        lowercase[i] = tolower(string[i]);
    }
    lowercase[strlen(string)] = '\0';

    bool seen[26] = {false};

    for (int i = 0; lowercase[i]; i++) {
        int index = lowercase[i] - 'a';

        if (seen[index]) {
            return false;
        }

        seen[index] = true;
    }

    return true;
}