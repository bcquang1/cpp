#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct node{
    int heso;
    int somu;
    node *next;
};

void duyet(node *head){
    while(head != NULL){
        cout << head->heso << "x^" << head->somu << " ";
        head = head->next;
    }
    cout << endl;
}

node *make_node(int hs, int sm){
    node *newNode = new node;
    newNode->heso = hs;
    newNode->somu = sm;
    newNode->next = NULL;
    return newNode;
}

void themcuoi(node *&head, int hs, int sm){
    node *newNode = make_node(hs, sm);
    if(head == NULL){
        head = newNode; return;
    }
    node *temp = 

}

int main(){
    
    return 0;
}