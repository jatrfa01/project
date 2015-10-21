#include <stdio.h>
#include "lowercase.h"

int main(int argc, char* argv[]){

    char c; 
    while ((c=getchar()) != EOF) {
      
         if (!lowercase(c))
         printf("%c",c);
    }
    return 0;
}
