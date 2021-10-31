#include <stdio.h>
#include <string.h>

void remove_digit(char *string, int index) {
    char *position;
    for (position = string+index; *position != '\0'; ++position)
        *position = *(position+1);
        *position = '\0';
}

int main() {
    char number[100];
    char result[100];
    int key;
    printf("Enter a string: ");
    scanf("%s", number);
    printf("Enter a key: ");
    scanf("%d", &key);
    int p = 0;
    int i = 0;
    int skip = key-1;
    while (number[0] != 0) {
        i = (i + skip) % strlen(number);
        result[p] = number[i];
        p++;
        remove_digit(number, i);
    }
    number[p] = '\0';
    result[p] = '\0';
    puts(result);
    return 0;
}
