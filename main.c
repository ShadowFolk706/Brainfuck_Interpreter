#include <stdio.h>

int main()
{
    FILE *file;
    char ch;

    file = fopen("/Users/hpapez27/Desktop/Coding Stuff/Brainfuck Files/Hello, World Program.txt", "r");
    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        // Here is where we run the interpreter
        printf("%c", ch);
    }
    fclose(file);

    return 0;
}
