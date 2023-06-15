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
    if(head == NULL){
        cout << "EMPTY\n";
    }
    while(head != NULL){
        //truy cap du lieu cua node head
        cout << head->data << ' ';
        //tu node hien => nhay ra node dung sau
        head = head->next; // i++
    }
}

void themcuoi(node *&head, int x){
    node *newNode = makeNode(x); 
    //di den node cuoi cung
    if(head == NULL){
        head = newNode; return;
    }
    node *temp = head; // NULL
    while(temp->next != NULL){ // loi bo nho
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteAll(node *&head, int x){
    while(head != NULL && head->data == x){
        node *del = head;
        head = head->next;
        delete del;
    }
    node *temp = head;
    node *prev = head;
    while(temp != NULL){
        if(temp->data == x){
            //xoa thang temp
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
}

int main(){
    node *head = NULL;
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        themcuoi(head, tmp);
    }
    deleteAll(head, x);
    duyet(head);
}

// Cho một DSLK, mỗi node trong DSLK là một số tự nhiên. Thực hiện xóa toàn bộ node có giá trị X trong DLKS. Ví dụ DSLK = {1, 2, 2, 3, 3, 2, 4} và X = 2 thì sau khi xóa DSLK sẽ là {1, 3, 3, 4}. Bài này các bạn phải cài đặt bằng DSLK.

// Input Format

// Dòng đầu tiên là N : số lượng node của DSLK và X là giá trị cần xóa. Dòng thứ 2 gồm N số lần lượt là các node trong DSLK.

// Constraints

// 1<=N<=1000; Các node và X là số tự nhiên không quá 1000;

// Output Format

// In ra DSLK sau khi xóa hết các node có giá trị X. Nếu DSLK rỗng thì in ra EMPTY

// Sample Input 0

// 8 7
// 6 7 1 9 4 5 4 7 
// Sample Output 0

// 6 1 9 4 5 4 