#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char t[50];

    scanf("%[^\n]", s);
    getchar();
    scanf("%s", t);
    int tl = strlen(t);
    for (int i = 0; i <= sl - tl; i++) {
        int match = 1;
        for (int j = 0; j < tl; j++) {
            if (s[i + j] == t[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
