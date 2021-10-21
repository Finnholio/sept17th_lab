#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int longestWord = 0;
    string currentWord;

    string inputString = get_string("Input words to find longest word : "); //get input from user
    char str[strlen(inputString)];
    strcpy(str, inputString);

    char * token = strtok(str, " "); //start spliting with strtoken

    while( token != NULL ) { //cycle until strtoken runs out
        if (strlen(token) > longestWord) //if word is longer then update longest word
        {
            longestWord = strlen(token);
            currentWord = token;
        }
        token = strtok(NULL, " "); //cycle to next token
   }


    printf("%s\n", currentWord); //print the longest word
}
