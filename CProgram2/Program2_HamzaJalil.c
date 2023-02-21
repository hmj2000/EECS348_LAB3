#include <stdio.h>
#include <stdlib.h>

void score_combinations(int score)
    {
        printf("\n The possible combinations for %d is: \n", score);

        for(int touchdown_plus_2_points = 0; touchdown_plus_2_points <= score / 8; touchdown_plus_2_points++)
            {
                for(int touchdown_plus_1_points = 0; touchdown_plus_1_points <= score / 7; touchdown_plus_1_points++)
                    {
                        for(int touchdown = 0; touchdown <= score / 6; touchdown++)
                            {
                                for(int field_goal = 0; field_goal <= score / 3; field_goal++)
                                    {
                                        for(int safety = 0; safety <= score / 2; safety++)
                                            {
                                                if((touchdown_plus_2_points * 8 + touchdown_plus_1_points * 7 + touchdown * 6 + field_goal * 3 + safety * 2) == score)
                                                    {
                                                        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", touchdown_plus_2_points, touchdown_plus_1_points, touchdown, field_goal, safety);
                                                    }
                                            }

                                    }

                            }

                    }
            }
        printf("\n");
    }

int main()
{
    int score; // Initialize score variable
    int exit = 0; // Initialize exit to be false

    while(exit != 1) // While loop to make sure to continue as long as exit does not equal true 
        {
            printf("Enter the integer score (0 or 1 stops the program): "); // Lets the user know to enter an integer and if they enter 0 or 1 then we will exit the program
            scanf("%d", &score); // Reads in the value from the user

            if (score == 0 || score == 1) // If the score is 0 or 1 then set exit to true and then the loop will check this value and exit the loop
                {
                    exit = 1;
                    printf("\n You entered 0 or 1 so now the program has terminated");
                }
            else
                {
                    score_combinations(score);
                }
        }

    return 0;
}
