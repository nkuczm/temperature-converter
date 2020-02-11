#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char type = get_char("What are you entering? Enter F or C: ");

    if (type == 'F')
    {   
        float tempf = get_float("Temperature F: ");
        printf("Temperature C: %.1f\n", ((tempf - 32) * 5)/9);
    }

    if (type == 'C')
    {
        float tempc = get_float("Temperature C: ");
        printf("Temperature F: %.1f\n", ((tempc * 9) / 5) + 32 );
    }
    



}
