#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;
    scanf("miles = %n \n ", miles);
    kilometers = 1.609 * (miles + yards/1760.0);
    
    printf("\nA marthon is %lf Kilometers.\n", kilometers);
    return 0;
    
}