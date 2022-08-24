/*
Use the RUN OPTION to update the FLASH and RUN the code on your FRDM-K64
HELLO WORLD is centred on the screen in _________ letters
on a __________ Background.
*/


#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
 
    printf("\e[1;31;44m");
    printf("\f");
    fflush(stdout);
    printf("\e[12;35H");
    printf("Hello World");
    fflush(stdout);
    for(;;);
}
