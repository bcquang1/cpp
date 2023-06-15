#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
    int data;
    node *next; // sau
    node *prev; // truoc
};

//ham nay no tra ve 1 con tro kieu node co data = x
node* make_node(int x){
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void duyet(node* head){
    while(head != NULL){
        cout << head->data << ' ';
        head = head->next;
    }
    cout << endl;
}

int count(node *head){
    int dem = 0;
    while(head != NULL){
        ++dem;
        head = head->next;
    }
    return dem;
}

void themdau(node *&head, int x){
    node *newNode = make_node(x);
    if(head == NULL){
        head = newNode; return;
    }
    //newNode tro vao head
    newNode->next = head;
    //head tro nguoc lai newNode
    head->prev = newNode;
    head = newNode;
}

void themcuoi(node *&head, int x){
    node *newNode = make_node(x);
    node *temp = head;
    if(head == NULL){
        head = newNode; return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    //temp tro vao newNode
    temp->next = newNode;
    //newNode tro nguoc lai temp
    newNode->prev = temp;
}

void themgiua(node *&head, int x, int k){
    int n = count(head);
    if(k < 1 || k > n) return;
    node *newNode = make_node(x);
    node *temp = head;
    if(k == 1){
        themdau(head, x); return;
    }
    for(int i = 1; i <= k - 1; i++){
        temp = temp->next;
    }
    //newNode tro vao node temp
    newNode->next = temp;
    //ket noi node k - 1 voi newNode
    temp->prev->next = newNode;
    newNode->prev = temp->prev;
    temp->prev = newNode;
}

void xoadau(node *&head){
    if(head == NULL) return;
    node* deleteNode = head;
    head = head->next; // head = NULL
    if(head != NULL){
        head->prev = NULL;
    }
    delete deleteNode;
}

void xoacuoi(node *&head){
    if(head == NULL) return;
    node *temp = head;
    if(temp->next == NULL){
        head = NULL; delete temp;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

void xoagiua(node *&head, int k){
    int n = count(head);
    if(k < 1 || k > n) return;
    if(k == 1){
        xoadau(head); return;
    }
    node *temp = head;
    for(int i = 1; i <= k - 1; i++){
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

int main(){
    node *head = NULL;
    while(true){
        cout << "----------------------------------\n";
    	cout << "1. Them dau\n";
    	cout << "2. Them cuoi\n";
    	cout << "3. Them giua\n";
    	cout << "4. Xoa dau\n";
    	cout << "5. Xoa cuoi\n";
    	cout << "6. Xoa giua\n";
    	cout << "7. Duyet\n";
    	cout << "0. Thoat !\n";
    	cout << "----------------------------------\n";
    	cout << "Nhap lua chon :";
    	int lc;
    	cin >> lc;
    	if(lc == 1){
    		int x; cout << "Nhap gia tri can them : ";
    		cin >> x;
    		themdau(head, x);
		}
		else if(lc == 2){
			int x; cout << "Nhap gia tri can them : ";
    		cin >> x;
    		themcuoi(head, x);
		}
		else if(lc == 3){
			int x; cout << "Nhap gia tri can them : ";
    		cin >> x;
    		int k; cout << "Nhap vi tri can them :";
    		cin >> k;
    		themgiua(head, x, k);
		}
		else if(lc == 4){
			xoadau(head);
		}
		else if(lc == 5){
			xoacuoi(head);
		}
		else if(lc == 6){
			int k; cout << "Nhap vi tri can xoa :";
    		cin >> k;
    		xoagiua(head, k);
		}
		else if(lc == 7){
			duyet(head);
		}
		else if(lc == 0){
			break;
		}
	}
}