
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("myfile.txt", "w");

    if (fp == NULL)
    {
        printf("File creation failed!");
    }
    else
    {
        printf("File created successfully!");
        fclose(fp);
    }

    return 0;
}
