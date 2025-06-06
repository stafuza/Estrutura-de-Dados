#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A, B;


        for (A = 1; A < 10; A++)
        {
            for (B = 1; B < 11; B++)
            {
                printf("%d x %d = %d\n", A, B, A * B);
            }
            
        }
 
    return 0;
}
