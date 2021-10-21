#include <stdio.h>
#include <cs50.h>
#include <string.h>

string FirstReverse(char input[]);

int main(void)
{
    printf("This program will allow you to input a statement and then it reverse that statement\n"); //starting message
    string tempInputString = get_string("Please type something to be reversed : "); //get input from user
    char input[strlen(tempInputString)+1];
    strcpy(input, tempInputString);

    printf("%s\n", FirstReverse(input)); //reverse input and print it
}

string FirstReverse(char input[])
{
    int lengthOfInput = strlen(input);
    char outputArray[lengthOfInput];
    string outputString = "";

    for (int i = 0; i < lengthOfInput; i++) //reverse the string
    {
        outputArray[i] = input[lengthOfInput - (i + 1)];
    }

    outputString = outputArray; //convert to string

    outputString[lengthOfInput] = '\0'; //last character is removed
    return outputString; //returns output
}
