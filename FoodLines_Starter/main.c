#include <stdio.h>

int main()
{
    int firstLine[2];
    int secondLine[100];
    int lines[100];
    int numPeople[100];
    
    scanf("%d %d", &firstLine[0], &firstLine[1]);

    char people[] = scanf("%c");
    for (int i =0; i < strlen(people); i++)
    {
        secondLine[i] = people[i]; 
        printf(&secondLine[i]);
    }

    for (int i =0; i < len(lines); i++)
    {
        secondLine[i] = numPeople[i];
    }
}

// take input from user

// create arrays for the number of lines and the number of people in each line

// create a loop to identify the shortest line and add one person to it

// print out the input