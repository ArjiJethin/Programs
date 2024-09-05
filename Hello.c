
#include <stdio.h>
#include <string.h>

void reverse_words(char *input_string) {
    char *word_start = input_string;
    char *word_end = input_string;
    
    while (*word_end) {
        if (*word_end == ' ') {
            // Reverse the characters of the word
            char *start = word_start;
            char *end = word_end - 1;
            
            while (start < end) {
                char temp = *start;
                *start = *end;
                *end = temp;
                start++;
                end--;
            }
            
            word_start = word_end + 1;
        }
        
        word_end++;
    }
    
    // Reverse the last word
    char *start = word_start;
    char *end = word_end - 1;
    
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char input_string[100];
    
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    
    // Remove newline character from input
    input_string[strcspn(input_string, "\n")] = 0;
    
    reverse_words(input_string);
    
    printf("Reversed string: %s\n", input_string);
    
    return 0;
}