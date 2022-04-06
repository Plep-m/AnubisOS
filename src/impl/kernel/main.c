#include "../intfl/print.h"


void banner(){
    print_clear();
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("     _____         _   _        _____ _____        ___ ___ \n");
    print_str("    |  _  |___ _ _| |_|_|___   |     |   __|   _ _|  _| | |\n");
    print_str("    |     |   | | | . | |_ -|  |  |  |__   |  |_'_| . |_  |\n");
    print_str("    |__|__|_|_|___|___|_|___|  |_____|_____|  |_,_|___| |_|\n");
    print_str("    By Plep-m\n");
    print_str(" \n");

}


void kernel_main() {
    print_str("Os Loaded");
}

