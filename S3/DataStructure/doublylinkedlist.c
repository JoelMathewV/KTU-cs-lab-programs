// Create a Doubly Linked List from a string taking each character from the string. Check if the given string is palindrome in an efficient method.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
    struct node *next;
    struct node *prev;
};
struct node *header = NULL;
void palindrome();
void convert(char data);
int main()
{
    char s[30];
    printf("Enter the word ");
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        convert(s[i]);
    }
    palindrome();
    return 0;
}
void palindrome()
{
    struct node *last, *first;
    if (header == NULL)
    {
        printf("Empty");
    }
    else
    {
        first = header;
        last = header;
        int l = 0, i = 0, flag = 0;
        while (last->next != NULL)
        {
            last = last->next;
            l++;
        }
        while (i < l / 2)
        {
            if (first->data != last->data)
            {
                flag = 1;
                break;
            }
            i++;
            first = first->next;
            last = last->prev;
        }
        if (flag == 0)
        {
            printf("Palindrome \n");
        }
        else
        {
            printf("Not palindrome \n");
        }
    }
}
void convert(char data)
{
    struct node *ptr, *temp;
    ptr = malloc(sizeof(struct node));
    ptr->data = data;
    if (header == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        header = ptr;
    }
    else
    {
        temp = header;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
        ptr->next = NULL;
    }
}