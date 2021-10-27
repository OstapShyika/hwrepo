#include <stdio.h>
#include <string.h>

void remove_digit(char *str, int index) {
    char *src;
    for (src = str+index; *src != '\0'; *src = *(src+1), ++src)
        *src = '\0';
}

int main() {
    char number[100];
    char result[100];
    int k;
    printf("Enter a string: ");
    scanf("%s", number);
    printf("Enter a key: ");
    scanf("%d", &k);
    int p = 0;
    int i = 0;
    int skip = k-1;
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