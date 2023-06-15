#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next; // next node address
    struct node *prev; // previous node address
};

typedef struct node node;

int size(node *head){
    int cnt = 0;
    while(head != NULL){
        ++cnt;
        head = head->next;
    }
    return cnt;
}

node* makeNode(int x){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void pushBack(node **head, int x){
    node* newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode; return;
    }
    node* tmp = *head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

int main(){
    node *head = NULL;
    int n;
    scanf("%d", &n);
    while(n--){
        int x; scanf("%d", &x);
        pushBack(&head, x);
    }
    node *temp = head;
    while(temp != NULL){
        //check cac node truoc do
        int check = 1;
        node *p = temp->prev;
        while(p != NULL){
            if(p->data == temp->data){
                check = 0; break;    
            }
            p = p->prev;
        }
        if(check) printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Cho một DSLK đôi chứa các số nguyên, nhiệm vụ của bạn là in ra các giá trị khác nhau trong DSLK theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê 1 lần

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong DSLK; Dòng thứ 2 gồm N số là các phần tử trong DSLK;

// Constraints

// 1<=N<=1000; Các phần tử trong DSLK là số nguyên không âm 32 bit.

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 6
// 4 3 2 2 5 5 
// Sample Output 0

// 4 3 2 5 