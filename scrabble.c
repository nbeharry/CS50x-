#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int computer_score(string word);
int main(void)
{
    // Prompt the user for 2 words
    string word1 = get_string("Player1: ");
    string word2 = get_string("Player 2: ");

    // Compute the score of each word

    int score1 = computer_score(word1);
    int score2 = computer_score(word2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int computer_score(string word)
{
    // Keep track of word
    int score = 0;

    // Compute the score of each character
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
