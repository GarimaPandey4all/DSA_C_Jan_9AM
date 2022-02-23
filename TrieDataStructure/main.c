#include <stdio.h>
#include <stdlib.h>
#define N 26

struct node {

    char data;
    struct node *children[N];
    int isleaf;
};

struct node *createNode(char data)
{
    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    for(int i = 0; i < N; i++)
    {
        n->children[i] = NULL;
    }

    n ->data = data;
    n->isleaf = 0;
};

struct node *insert(struct node *root, char *word)
{
    struct node *temp;

    temp = root;

    for(int i = 0; word[i] != '\0'; i++)
    {
        int index = (int)word[i] - 'a';

        if(temp->children[index] == NULL)
        {
            temp->children[index] = createNode(word[i]);
        }

        temp = temp->children[index];
    }

    temp->isleaf = 1;

    return root;

};


int search(struct node *root, char *word)
{
    struct node *temp = root;

    for(int i = 0; word[i] != '\0'; i++)
    {
        int index = (int)word[i] - 'a';

        if(temp->children[index] == NULL)
        {
            return 0;
        }
        temp = temp->children[index];
    }

    if(temp != NULL && temp->isleaf == 1)
    {
        return 1;
    }

    return 0;
}

void delete(struct node *n)
{
        for(int i=0; i < N; i++)
        {
            if(n->children[i] != NULL)
            {
                delete(n->children[i]);
            }
            else {
                continue;
            }
        }

        free(n);
}

void display(struct node *root)
{
    if(!root)
    {
        return;
    }

    struct node *temp = root;

    printf("%c  ", temp->data);

    for(int i = 0; i < N; i++)
    {
        display(temp->children[i]);
    }
}

void printSearch(struct node *root, char *word)
{
    printf("\nSearching for %s:", word);

    if(search(root, word) == 0)
    {
        printf("Search Not Found");
    }
    else {
        printf("Search is Found");
    }
}

int main()
{
    struct node *root;

    root = createNode('\0');
    root = insert(root, "hello");
    root = insert(root, "hi");

    root = insert(root, "hell");
    root = insert(root, "garima");

    display(root);

    printSearch(root, "hi");

    delete(root);

    root = createNode('\0');
    root = insert(root, "hell");
    root = insert(root, "hello");

    root = insert(root, "hen");
    root = insert(root, "mayank");

    printSearch(root, "hi");

    display(root);

    return 0;
}
