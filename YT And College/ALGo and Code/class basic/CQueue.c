#include <stdio.h>
#include <stdlib.h>
#define N 5
int Q[N];
void main()
{
    int count = 0, f = 3, r = 1, t,size;
    Q[2] = 2;
    Q[1] = 4;
    Q[0] = 7;
    Q[4] = 9;
    // for (int i = 0; i < N - 1; i++)
    // {
    //     printf("\n%d", Q[i]);
    // }
size = f > r ? (f - r) : (f+N -  r);
printf("%d",size);
//     if ((f == 1 && r == N) || (r == (f - 1)))
//     {
//         printf("Count -- %d", N);
//         exit(0);
//     }

//     if (f == -1)
//     {
//         printf("Underflow");
//         exit(0);
//     }

//     t = f;
//     while (Q[t] != 0)
//     {
//         count++;
//         if (t = N)
//             t = 1;
//         else
//             t++;
//     }
//     printf("\ncount -- %d", count);
//     exit(0);
}