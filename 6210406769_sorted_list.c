//6210406769 Itsaraphap Sakulwong
#include<stdio.h> 
#include<stdlib.h> 
  
typedef struct node{ 
    int data; 
    struct node* next; 
}haruhi;

void sorted(haruhi **prev,haruhi *new_node){ 
    haruhi *now; 
    if (*prev == NULL || (*prev)->data >= new_node->data){ 
        new_node->next = *prev;
        *prev = new_node; 
    }
    else{ 
        now = *prev; 
        while (now->next != NULL && now->next->data < new_node->data){ 
            now = now->next; 
        }
        new_node->next = now->next; 
        now->next = new_node; 
    }
}

haruhi *newy(int new_data){ 
    haruhi *new_node = (haruhi*)malloc(sizeof(haruhi)); 
    new_node->data  = new_data; 
    new_node->next =  NULL; 
    return new_node; 
} 

void print_list(haruhi *head){ 
    for (;head;head = head->next)
    {
        printf("%d\n",head->data);
    }
    printf("\n");
}

int main(){ 
    int n;
    haruhi *head = NULL; 
    while(1){
        scanf("%d", &n);
        if(n <= -1)
            break;
        else{
            haruhi *new_node = newy(n); 
            sorted(&head,new_node); 
        }
    }
    print_list(head); 
}
