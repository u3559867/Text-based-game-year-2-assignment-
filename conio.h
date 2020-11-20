#ifndef CONIO_H
#define CONIO_H

#include <termios.h>
#include <unistd.h>
#include <stdio.h>
//Using the file from https://stackoverflow.com/questions/3276546/how-to-implement-getch-function-of-c-in-linux/40197193; Should have included the variable chconio in another .c file
/* reads from keypress, doesn't echo */
inline int getch(void)
{
    struct termios oldattr, newattr;
    int chconio;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    chconio = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return chconio;
}

/* reads from keypress, echoes */
inline int getche(void)
{
    struct termios oldattr, newattr;
    int chconio;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    chconio = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return chconio;
}

#endif
