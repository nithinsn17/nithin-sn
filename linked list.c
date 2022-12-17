#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node *head =  NULL;
struct node
{
    char name[20];
    int mob;
    struct node *next;
};

struct node* create_node(struct node* head)
{
    struct node *temp;
    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter the name\t , mobile no \t :");
    scanf("%s , %d",temp->name,temp->mob);
    temp->next = NULL;
    return(temp);
}

struct node* Insert_beg(struct node* head)
{
    struct node *new;
    new = create_node(head);
    new->next = head;
    head = new;
    return (head);
}

struct node* Insert_end(struct node* head )
{
    struct node *new_end,*temp;
    new_end = create_node(head);
    if(head==NULL)
    {
        head =  new_end;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp -> next;
        }
        temp->next = new_end;
    }
    return(head);
}
struct node* Display(struct node *temp)
{
    while(temp!=NULL)
    {
        printf("%s\t %d\t",temp->name,temp->mob);
        temp = temp->next;
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("-----------Linked list---------\n");
        printf("1.Insert in beg\t 2. /insert in end\t 3.Display\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
          switch(choice)
        {
            case 1:Insert_beg(head);
                    break;
            case 2:Insert_end(head);
                    break;
            case 3:Display(head);
                    break;
            case 4: printf("Exiting..\n");
                    break;
            default : printf("Invalid choice\n");
                    return 0;
        }
    }

}
