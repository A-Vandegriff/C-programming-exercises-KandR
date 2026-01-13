/* write a program entab that replaces strings of blanks by the
minimum number of tabs and blanks to acheive the same spacing*/
#include <stdio.h>

#define TABSTOP 8

int main(void)
{
    int c;
    int col = 0;      /* current column */
    int blanks = 0;   /* pending blanks */

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else {
            /* flush blanks */
            while (blanks > 0) {
                int to_tab = TABSTOP - (col % TABSTOP);

                if (blanks >= to_tab && to_tab > 1) {
                    putchar('\t');
                    col += to_tab;
                    blanks -= to_tab;
                } else {
                    putchar(' ');
                    col++;
                    blanks--;
                }
            }

            if (c == '\n') {
                putchar('\n');
                col = 0;
            } else if (c == '\t') {
                int to_tab = TABSTOP - (col % TABSTOP);
                col += to_tab;
                putchar('\t');
            } else {
                putchar(c);
                col++;
            }
        }
    }
    return 0;
}

/*hello####world
whats up#########?*/
