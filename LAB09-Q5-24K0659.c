#include <stdio.h>
#include <string.h>

int wordCount(char arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == ' ' && arr[i + 1] != ' ') {
            count++;
        }
    }
    return count + 1;
}

int main(){
    char sentence[100];
    
    printf("Enter the sentence for word count: \n");
    fgets(sentence, 100, stdin);

	int length = strlen(sentence);
    int temp = wordCount(sentence, length);
    
	printf("Number of words are = %d", temp);

}