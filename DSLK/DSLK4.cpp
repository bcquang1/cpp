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
    cout << endl;
}

void push(node *&queue, int x){
    node *newNode = makeNode(x);
    if(queue == NULL){
        queue = newNode; return;
    }
    node *temp = queue;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void pop(node *&queue){
    if(queue == NULL) return;
    node *del = queue;
    queue = queue->next;
    delete del;
}

void front(node *queue){
    if(queue == NULL){
        cout << "EMPTY\n";
    }
    else{
        cout << queue->data << endl;
    }
}

int main(){
    node *queue = NULL;
    int t; cin >> t;
    while(t--){
        string tt; cin >> tt;
        if(tt == "push"){
            int x; cin >> x;
            push(queue, x);
        }
        else if(tt == "pop"){
            pop(queue);
        }
        else{
            front(queue);
        }
    }
}

// Cho Hàng đợi lưu các số nguyên được cài đặt bằng DSLK, hàng đợi hỗ trợ 3 thao tác : Push, pop, front. Trong đó nếu thao tác là push thì thêm 1 phần tử vào cuối hàng đợi, thao tác là pop thì xóa phần tử khỏi đầu hàng đợi nếu hàng đợi không rỗng, front thì in ra đỉnh ở đầu hàng đợi nếu hàng đợi không rỗng, hàng đợi rỗng thì in ra EMPTY

// Input Format

// Dòng đầu tiên sẽ là N : số lượng thao tác. N dòng tiếp theo mô tả loại thao tác, nếu là push sẽ có thêm 1 số nguyên đi kèm.

// Constraints

// 1<=N<=1000;

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 9
// push 968
// pop
// push 851
// push 51
// front
// pop
// push 159
// push 561
// push 840
// Sample Output 0

// 851
// Sample Input 1

// 7
// push 892
// pop
// pop
// pop
// pop
// front
// front
// Sample Output 1

// EMPTY
// EMPTY