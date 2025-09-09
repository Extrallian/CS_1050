#include <stdio.h>
//#include <unistd.h>

int main()
{
    int n1=0;
    int n2=1;
    int nstor;
    int i;
    int terms;

    printf("Enter number of terms:\n");
    scanf("%d", &terms);

    for(i = 0; i < terms; i++)
    {
        printf("%d\n", n1);
        nstor = n2;
        n2 += n1;
        n1 = nstor;
        //usleep(100000);
    };


    return 0;
}