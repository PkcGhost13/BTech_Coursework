/*
Language - C
Week 3 Assignment: Working with lists
Created by Supul Kalhara Pushpakumara
23-08-2021
*/

// general purpose standard C lib
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//macros
#define SIZE 100

// defines the struct list
typedef struct list{ 
    int data; struct list *next;
} list;

int isEmpty(const list *l){ 
    return (l == NULL);
}

// initializes a head of a list
list *build(int d){
    list *head = malloc(sizeof(list));
    head -> data = d;
    head -> next = NULL;
    return head;
}

// returns new head
list *add(int d, list *h){
    list *head = build(d);
    head -> next = h;
    return head;
} 

// convert to list
list *toList(int d[], int size){
    list *head = build(d[0]);
    int i;
    for(i = 1; i< size; i++){
        head = add(d[i], head);
    }
    return head;
}

// printing list's elements
void print_list(list *h, char *title){

    printf("%s\n", title);
    int i = 0;
    while(h != NULL){

        // If last element
        (i != SIZE-1) ? printf("%d,\t", h->data) : printf("%d", h->data);
            

        // Break line
        if ((i % 5) == 4) { printf("\n");}
        h = h -> next;
        i++;
    }
    printf("\n");
}

// swap node data
void swap(list *p1, list *p2){
    int temp = p1->data;
    p1->data = p2->data;
    p2->data = temp;
    return;
}

// bubble sort
void sort(list *h){
    int i, j;
    list *p1, *p2;

    for(i = SIZE-2; i >= 0; i--){
        p1 = h;
        p2 = p1->next;
        for(j = 0; j <= i; j++){
            if(p1->data > p2->data)
                swap(p1, p2);
            p1 = p2;
            p2 = p2->next;
        }
    }
}

int main(void){

    list *l = build(rand()%1000);
    
    // random number adding to the list
    for(int i = 0; i < SIZE-1; i++){
        l = add(rand()%1000, l);
    }
    print_list(l, "Before sorting");
    sort(l);
    print_list(l, "After Sorting");
    return 0;
}