#include "print.h"

void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcom to AnubisOS kernel now in 64-bit mode");

}