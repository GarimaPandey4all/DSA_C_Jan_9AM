#include <stdio.h>
#include <stdlib.h>
#define size 10

struct Dataset {
    int data;
    int key;
};

struct Dataset *hashArray[size];
struct Dataset *dummyItem;
struct Dataset *item;

int hashFunction(int key)
{
    return key % size; // return hashIndex
}

void insert(int key, int data)
{
    struct Dataset *item;

    item = (struct Dataset *)malloc(sizeof(struct Dataset));

    item->data = data;
    item->key = key;

    int hashIndex = hashFunction(key);

    //Linear Probing: Hash Collision Resolution
    while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
    {
        ++hashIndex; // Linear Probing

        hashIndex %= size; // corrent indexing
    }

    hashArray[hashIndex] = item;
}

struct Dataset *search(int key)
{
    int hashIndex;

    hashIndex = hashFunction(key);

    while(hashArray[hashIndex] != NULL)
    {
        if(hashArray[hashIndex]->key == key)
        {
            return hashArray[hashIndex];
        }

         ++hashIndex;
         hashIndex %= size;
    }

    return NULL;
};

struct Dataset *delete(struct Dataset *item)
{
    struct Dataset *temp;
    int key;

    key = item->key;

    int hashIndex = hashFunction(key);

    while(hashArray[hashIndex] != NULL)
    {
        if(hashArray[hashIndex]->key == key)
        {
            temp = hashArray[hashIndex];
            hashArray[hashIndex] = dummyItem;
            return temp;
        }
    }
};

void display()
{
    for(int i = 0; i < size; i++)
    {
        if(hashArray[i] != NULL)
        {
            printf("(%d, %d)", hashArray[i]->key, hashArray[i]->data);
        }
        else {
            printf("__");
        }
    }

    printf("\n");
}

int main()
{
    dummyItem = (struct Dataset *)malloc(sizeof(struct Dataset));

    dummyItem->data = -1;
    dummyItem->key = -1;

    insert(1, 20);
    insert(3, 40);
    insert(4, 60);
    insert(5, 80);
    insert(6, 90);
    insert(7, 120);
    insert(7, 100);
    insert(8, 35);

    display();

    item = search(5);

    if(item != NULL)
    {
        printf("\nElement is found");
    }
    else {
        printf("\nElement not found");
    }

    delete(item);

    item = search(5);

    if(item != NULL)
    {
        printf("\nElement is found\n");
    }
    else {
        printf("\nElement not found\n");
    }

    display();

    return 0;
}
