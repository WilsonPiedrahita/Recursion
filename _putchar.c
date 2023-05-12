#include <unistd.h>

/**
 *_putchar _sthd 
*/int _putchar(char c){
    return (write(1, &c, 1));
}