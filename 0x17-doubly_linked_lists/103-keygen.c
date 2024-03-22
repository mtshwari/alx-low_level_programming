#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username.
 * @username: The username for which the key is generated.
 *
 * Description: This function generates a key based on the provided username
 * using a simple algorithm.
 */
void generate_key(char *username)
{
    int i, len;
    char key[100];

    len = strlen(username);

    for (i = 0; i < len; i++)
    {
        key[i] = username[i] ^ (i * 2);
    }

    printf("%s\n", key);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array containing command-line arguments.
 *
 * Description: This function serves as the entry point of the program.
 * It takes a username as input and generates a key based on that username.
 * The generated key is then printed to stdout.
 *
 * Return: 0 on success, 1 on failure (incorrect number of arguments).
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    generate_key(argv[1]);

    return 0;
}

