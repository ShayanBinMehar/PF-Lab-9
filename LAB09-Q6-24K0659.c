#include <stdio.h>
#include <string.h>

int isRotation(char arr1[], char arr2[]) {
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);

    if (len1 != len2) {
        return 0;
    }

    char arr3[2 * len1 + 1];

    // Concatenate str1 with itself correctly
    for (int i = 0; i < 2 * len1; i++) {
        arr3[i] = arr1[i % len1];
    }
    arr3[2 * len1] = '\0';

    // Rest of the code remains the same
    int i = 0, j = 0;
    while (i < 2 * len1) {
        if (arr3[i] == arr2[j]) {
            i++;
            j++;
            if (j == len2) {
                return 1;
            }
        } else {
            i = i - j + 1;
            j = 0;
        }
    }

    return 0;
}

int main() {
    char arr1[100], arr2[100];

    printf("Enter the first string: ");
    scanf("%s", arr1);

    printf("Enter the second string: ");
    scanf("%s", arr2);

    if (isRotation(arr1, arr2)) {
        printf("%s is a rotation of %s\n", arr2, arr1);
    } else {
        printf("%s is not a rotation of %s\n", arr2, arr1);
    }

    return 0;
}