#include <stdio.h>
#include <stdlib.h>

void displayText();
int main()
{
    int i;
    for(i=0;i<5;i++)
        {
            displayText();
        }
    return 0;
}
void displayText() {
    printf("Hello World\n");
}
