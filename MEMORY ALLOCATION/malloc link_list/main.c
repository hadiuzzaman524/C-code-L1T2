#include <stdio.h>
#include <stdlib.h>
#define NULL 0
struct link_list
{
    int number;
    struct link_list *next;

};
   typedef struct link_list node;
    void create(node *p);
    int count(node *p);
    void print(node *p);

int main()
{
    node *head;

    head=(node*)malloc(sizeof(node));
    create(head);
    printf("\n");
    print(head);
    printf("\n");
    printf("\n number of item %d\n",count(head));

}
void create(node *list)
{
    printf("input a number\n");
    printf("type -999 to end ");
    scanf("%d",&list->number);
    if(list->number==-999)
    {
        list->next=NULL;
    }
    else
    {
        list->next=(node*)malloc(sizeof(node));
        create(list->next);
    }
    return;
}

void print(node *list)
{
    if(list->next!=NULL)
    {
        printf("%d-->",list->number);
        if(list->next==NULL)
            printf("%d",list->next->number);
        print(list->next);
    }
    return;
}
int count(node *list)
{
    if(list->next==NULL)
        return(0);
    else
        return(1+count(list->next));
}
