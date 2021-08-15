#include "uart.h"
#include <stdio.h>
/*#include <stdlib.h>
#define test.sh "\

#/bin/sh \n\

read ipt \n\

if [ "$ipt" == "hello" ] \n\
then \n\
        echo \"Hello World!\" \n\
elif [ "$ipt" == "help" ] \n\
then \n\
        compgen -c \n\
fi \
"*/

int main(){
    // set up serial console
    uart_init();
    
    // say hello
    uart_puts("Hello World!\n");

  //  system("test.sh");   
    // echo everything back
    while(1) {
      uart_send(uart_getc());
    }
   return 0;
}
