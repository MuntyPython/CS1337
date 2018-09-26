//9_18_loops
#include <stdio.h>
#include <stdlib.h>

/*
-loops can be controlled by counters or sentinels
-loop types: while, do-while, for
-"while" and "for" are pretest loops (could be executed zero times)
-"do-while" is a post-test loop(executed atleast once)
-"for" loop is typically used when the number of iterations is known
-the initialization, test and update parts of a "for" loop are optional
-multiple initializations, tests and updates can be performed
*/

int main()
{
    const double X_VELOCITY = 1.2;
    const double Y_VELOCITY = 2.5;
    const double X_MAX = 20;
    const double Y_MAX = 50;

    //for loop with multiple initializations and updates
    for(double x = 0,y = 1; x < X_MAX && y < Y_MAX; x = x+X_VELOCITY, y = y+Y_VELOCITY)
    {
        printf("Coordinates of point are x = %g, y = %g\n",x,y);
    }

    //break and continue
    puts("\nBreak");
    for (int i = 0; i < 5; i++)
    {
        if(i == 3)
            break;
        printf("i = %d\n", i);
    }
    puts("\nContinue");
    for (int i = 0; i < 6; i++)
    {
        if(i == 3)
            continue;
        printf("i = %d\n", i);
    }
    return 0;
}
