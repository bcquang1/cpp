#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
};

node* makeNode(int x){
    //cap phat dong
    node *ptr = new node;
    //gan du lieu
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

void duyet(node *head){
    while(head != NULL){
        //truy cap du lieu cua node head
        cout << head->data << ' ';
        //tu node hien => nhay ra node dung sau
        head = head->next; // i++
    }
    cout << endl;
}

void themdau(node *&head, int x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void themcuoi(node *&head, int x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}


void sx(node *&head){
    for(node *i = head; i != NULL; i = i->next){
        node *min = i;
        for(node *j = i->next; j != NULL; j = j->next){
            if(min->data > j->data){
                min = j;
            }
        }
        swap(min->data, i->data);
    }
}

void sx2(node *&head){
    for(node *i = head; i != NULL; i = i->next){
        node *min = i;
        for(node *j = i->next; j != NULL; j = j->next){
            if(min->data < j->data){
                min = j;
            }
        }
        swap(min->data, i->data);
    }
}


int main(){
    node *head = NULL;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        themcuoi(head, x);
    }
    sx(head);
    duyet(head);
    sx2(head);
    duyet(head);
}

// Cho DSLK các số nguyên, hãy thực hiện sắp xếp các node trong DSLK theo thứ tự tăng dần, giảm dần rồi in ra màn hình.

// Input Format

// Dòng đầu tiên là N : Số lượng node trong DSLK; Dòng thứ 2 gồm N số lần lượt là các node trong DSLK.

// Constraints

// 1<=N<=100; Các node trong DSLK là số nguyên không âm không vượt quá 1000;

// Output Format

// Dòng 1 in ra DSLK được sắp xếp tăng dần; Dòng 2 in ra DSLK được sắp xếp giảm dần;

// Sample Input 0

// 9
// 59 92 13 13 35 52 17 3 26 
// Sample Output 0

// 3 13 13 17 26 35 52 59 92 
// 92 59 52 35 26 17 13 13 3 