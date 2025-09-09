//backtracking

#include <stdio.h>
int S(char *str);
int A(char *str, int i);
int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    int ans = S(str);
    if (ans == 1) {
        printf("Successfully Parsed\n");
    } else {
        printf("Invalid\n");
    }
    return 0;
}

int S(char *str) {
    int i = 0;
    if (str[i] == 'c') {
        i++;
        int p = A(str, i);
        if (str[p] == 'd' && str[p+1] == '$') {
            return 1;
        }
    }
    return 0;
}

int A(char *str, int i) {
    if (str[i] == 'a' && str[i+1] == 'b') {
        return i + 2;
    }
    if (str[i] == 'a') {
        return i + 1;
    }
    return i;
}
