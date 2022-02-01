

#include "source.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void ascii_chart(char min, char max)
{
    int minimal = min;
    int maximum = max;
    int x = 0;
    while(minimal<=maximum){
        if (isprint(minimal)){
        if (x != 3){
        printf("%3d 0x%02x %c\t", minimal, minimal, minimal);
        minimal++;
        x++;
        }
        else{
        printf("%3d 0x%02x %c\n", minimal, minimal, minimal);
        minimal++;
        x = 0;
        }
        }
        
        else{
            if (x != 3){
        printf("%3d 0x%02x ?\t", minimal, minimal);
        minimal++;
        x++;
        }
        else{
        printf("%3d 0x%02x ?\n", minimal, minimal);
        minimal++;
        x = 0;
        }
        }
    }
}