#include "lowercase.h"
int lowercase(char c) {
    if (c >= 'A' && c <= 'Z')
        c= c+32;
        return c;

    return c;
}
