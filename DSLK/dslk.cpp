#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
	int data; // data
	node *next; // link
};

void duyet(node *head){
	while(head != NULL){
		cout << head->data << ' ';
		head = head->next;
	}
}

//viet ham cap phat 1 node moi
node* make_node(int x){
	node *newNode = new node;
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

int dem(node *head){
    int dem = 0;
    while(head != NULL){
        dem++;
        head = head->next;
    }
    return dem;
}

void themcuoi(node *&head, int x){
    node* newNode = make_node(x); // dua vao cuoi dslk
    if(head == NULL){
        head = newNode;
        return;
    }
    //den node cuoi cung
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    //lay dia chi cua node moi cap phat => luu vao phan next cua node cuoi
    temp->next = newNode;
}

void themdau(node *&head, int x){
    node* newNode = make_node(x);
    newNode->next = head;
    head = newNode;
}

void themgiua(node *&head, int x, int k){
    node* newNode = make_node(x);
    int n = dem(head);
    if(k < 1 || k > n){
        return;
    }
    node *temp = head;
    for(int i = 1; i <= k-2; i++){
        temp = temp->next;
    }
    // temp : k - 1
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){
	node *head = NULL;
    while(1){
        cout << "---------------------------------\n";
        cout << "1. Them vao dau\n";
        cout << "2. Them vao cuoi\n";
        cout << "3. Them vao giua\n";
        cout << "10. Duyet\n";
        cout << "0. Thoat\n";
        cout << "---------------------------------\n";
        int lc; cin >> lc;
        if(lc == 1){
            cout << "Nhap gia tri can them";
            int x; cin >> x;
            cout << "Nhap vi tri chen";
            int k; cin >> k;
            
        }
    }
	return 0;
}
