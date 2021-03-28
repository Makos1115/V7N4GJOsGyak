#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fp;
    fp = fopen ("molnar.txt","w");

    fprintf (fp, "Nev: Molnar Akos\nSzak: Gazdasaginformatikus\nNeptun: V7N4GJ");

    fclose (fp);
    return 0;
}
