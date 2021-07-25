/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
}ListNode;

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    struct ListNode *new_list = malloc(sizeof(struct ListNode));
    struct ListNode *current_list = new_list;
    while(l1 != NULL && l2 != NULL) {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        if(l1->val <= l2->val)  {
            current_list->val = l1->val;
            l1 = l1->next;
            current_list->next = temp;
            current_list = current_list->next;
        }
        else {
            current_list->val = l2->val;
            l2 = l2->next;
            current_list->next = temp;
            current_list = current_list->next;
        }
    }

    if(l1) {

        while(l1!= NULL) {

            current_list->val = l1->val;

            if(!l1->next)

                break;

            l1 = l1->next;

            struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));

            current_list->next = temp;

            current_list = current_list->next;


        }

    }

    if(l2) {

        while(l2!= NULL) {

            current_list->val = l2->val;

            if(!l2->next)

                break;

            l2 = l2->next;

            struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));

            current_list->next = temp;

            current_list = current_list->next;

        }

    }

    current_list->next = NULL;

    return new_list;
}
/*
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *tmpNode = NULL, *p = NULL;
    tmpNode = (struct ListNode *)malloc(sizeof(ListNode));
    tmpNode->next = NULL;
    p = tmpNode;
    while(l1 && l2) {
        p->next = (struct ListNode *)malloc(sizeof(ListNode));
        p = p->next;

        if(l1->val < l2->val) {
            p->val = l1->val;
            l1 = l1->next;
        }
        else {
            p->val = l2->val;
            l2 = l2->next;
        }
    }
    if(!l1 && l2) {
        while(l2) {
            p->next = (struct ListNode *)malloc(sizeof(ListNode));
            p = p->next;
            p->val = l2->val;
            l2 = l2->next;
        }
    }
    if(!l2 && l1) {
        while(l1) {
            p->next = (struct ListNode *)malloc(sizeof(ListNode));
            p = p->next;
            p->val = l1->val;
            l1 = l1->next;
        }
    }
    p->next = NULL;
    return tmpNode->next;
}
*/
int LinkListInsert(struct ListNode *l, int elem) {
    struct ListNode *tail = l, *tmpNode = NULL;
    while(tail->next) {
        tail = tail->next;
    }
    tmpNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    tmpNode->val = elem;
    tmpNode->next = tail->next;
    tail->next = tmpNode;
    return 0;
}

int main(void)
{
    struct ListNode *l1, *l2, *l3;

    l1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l1->val = 1;
    l1->next = NULL;
    //LinkListInsert(l1, 2);
    LinkListInsert(l1, 4);

    l2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l2->val = 1;
    l2->next = NULL;
    LinkListInsert(l2, 3);
    LinkListInsert(l2, 4);

    l3 = mergeTwoLists(l1, l2);

    while(l3 != NULL) {
        printf("%d ", l3->val);
        l3 = l3->next;
    }
}