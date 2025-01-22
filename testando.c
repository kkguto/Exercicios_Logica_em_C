#include <stdio.h>
#include <windows.h>

main()
{
    int x = 5;
    MessageBox(0, "Variable x is equal to %d", "Variable", x); 
    /* Where do I specify the variable so that 5 will display?*/

    getch();
}
