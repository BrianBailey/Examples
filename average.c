#include <stdio.h>

int main(void)
{
    int i;
    float grades[5];  // creates an array 
    float avg = 0;
    for (i = 0; i < 5; i++)
    {
        printf("What is student number %d's grade? ", i + 1);
        scanf("%f", &grades[i]);   // gets each grade from teacher
        avg += grades[i];  // adds to total score
        
    }
    avg /= 5;  // computes avg
    printf("\n The average of all grades is %.2f.\n", avg);
    return 0;
    
}
