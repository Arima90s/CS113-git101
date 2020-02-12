#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
/*เราสามารถนิยามฟังก์ชันเป็นชื่อง่ายๆได้ด้วยโดยการใช้ typedef
typedef struct node{
    int data;
    struct node *next;
}node;*/

struct node *create_list(){
    struct node *first, *second, *third;

    //จองพื้นที่ 3 ตำแหน่งบน heap memory
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    first->data = 17; //เก็บค่าที่ตำแหน่งนั้น
    first->next = second;

    second->data = 29;
    second->next = third;

    third->data = 93;
    third->next = NULL;

    return first;
}

void print_list(struct node *head){
    struct node *tmp;

    for (tmp = head; tmp; tmp = tmp->next)
    {
        printf("%d\n",tmp->data);
    }
}

int main(){
    struct node *head;

    head = create_list();
    print_list(head);
}