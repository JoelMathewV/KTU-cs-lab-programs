#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the grammar rules
char *grammar_rules[] = {
    "E+E",
    "E*E",
    "(E)",
    "id"
};

int is_terminal(char symbol) {
    return !(symbol == '+' || symbol == '*' || symbol == '(' || symbol == ')');
}

int shift_reduce_parser(char *input) {
    char stack[100];
    int top = -1;
    int input_index = 0;

    while (input[input_index] != '\0') {
        // Shift operation
        stack[++top] = input[input_index++];
        stack[top + 1] = '\0';
        printf("Shift: %s\n", stack);

        // Reduce operation
        for (int i = 0; i < sizeof(grammar_rules) / sizeof(grammar_rules[0]); i++) {
            int rule_length = strlen(grammar_rules[i]);
            if (strncmp(stack + top - rule_length + 1, grammar_rules[i], rule_length) == 0) {
                // Perform reduce
                top -= rule_length - 1;
                stack[top + 1] = '\0';
                printf("Reduce: %s\n", stack);
                break;
            }
        }
    }

    // Check if the final configuration is valid
    return (top == 0 && is_terminal(stack[top])) ? 1 : 0;
}

int main() {
    char input[100];

    printf("Enter an arithmetic expression: ");
    scanf("%s", input);

    if (shift_reduce_parser(input)) {
        printf("Parsing successful!\n");
    } else {
        printf("Parsing failed.\n");
    }

    return 0;
}