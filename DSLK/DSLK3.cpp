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

void push(node *&stack, int x){
    node *newNode = makeNode(x);
    newNode->next = stack;
    stack = newNode;
}

void pop(node *&stack){
    if(stack == NULL) return;
    node *del = stack;
    stack = stack->next;
    delete del;
}


int main(){
    node *stack = NULL;
    int t; cin >> t;
    while(t--){
        string tt; cin >> tt;
        if(tt == "push"){
            int x; cin >> x;
            push(stack, x);
        }
        else if(tt == "pop"){
            pop(stack);
        }
        else{
            duyet(stack);
        }
    }
}

// Cài đặt cấu trúc dữ liệu ngăn lưu các số nguyên bằng DSLK. Ngăn xếp hỗ trợ 3 thao tác : Push, Pop, Show. Nếu thao tác là push bạn thêm 1 phần tử vào đỉnh ngăn xếp. Nếu thao tác là pop và ngăn xếp không rỗng thì bạn thực hiện xóa phần tử khỏi đỉnh ngăn xếp, nếu ngăn xếp rỗng thì không thực hiện xóa. Nếu thao tác là show thì bạn liệt kê các phần tử trong ngăn xếp theo thứ tự từ đỉnh trở xuống đáy ngăn xếp, trong trường hợp ngăn xếp rỗng thì in EMPTY và cách ra 1 dòng sau dòng EMPTY

// Input Format

// Dòng đầu tiên sẽ là N : số lượng thao tác. N dòng tiếp theo mô tả loại thao tác, nếu là push sẽ có thêm 1 số nguyên đi kèm.

// Constraints

// 1<=N<=1000;

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 11
// pop
// show
// pop
// show
// show
// show
// show
// pop
// push 119
// push 433
// pop
// Sample Output 0

// EMPTY

// EMPTY

// EMPTY

// EMPTY

// EMPTY
// Sample Input 1

// 9
// pop
// push 928
// push 619
// show
// show
// pop
// pop
// show
// push 761
// Sample Output 1

// 619 928 
// 619 928 
// EMPTY