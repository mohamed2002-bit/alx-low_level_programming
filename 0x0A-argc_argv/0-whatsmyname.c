#include <stdio.h>

/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc, char *argv[]) {
    // Print the program name (including the path)
    printf("%s\n", argv[0]);

    return 0;
}
