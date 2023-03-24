#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * check_frequency - checks if the frequencies of letters in two strings are
 *                    almost equivalent
 *
 * @word1: the first string to compare
 * @word2: the second string to compare
 *
 * Return: true if the frequencies of each letter from 'a' to 'z' between word1
 *         and word2 is at most 3, false otherwise.
 */
bool check_frequency(const char *word1, const char *word2)
{
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    for (i = 0; word1[i] != '\0' && word2[i] != '\0'; i++)
    {
        if (!isalpha(word1[i]) || !isalpha(word2[i]))
            return (false);

        freq1[tolower(word1[i]) - 'a']++;
        freq2[tolower(word2[i]) - 'a']++;
    }

    if (word1[i] != word2[i])
        return (false);

    for (i = 0; i < 26; i++)
    {
        if (abs(freq1[i] - freq2[i]) > 3)
            return (false);
    }

    return (true);
}

int main()
{
    const char *word1[100];
    const char *word2[100];

    printf("Enter word1: ");
    scanf("%s", word1);

    printf("Enter word2: ");
    scanf("%s", word2);
     
    bool result = check_frequency(word1, word2);
    
    printf("%d\n", result);
    
    return 0;
}
