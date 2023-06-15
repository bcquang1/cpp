#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv;
    string ten;
    double gpa;
};

struct node{
    SinhVien data;
    node *next;
};

node *makeNode(SinhVien x){
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data.msv << ' ' << head->data.ten << ' ' << fixed << setprecision(2) << head->data.gpa << endl;
        head = head->next;
    }
}

void themdau(node *&head, SinhVien x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void themcuoi(node *&head, SinhVien x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode; return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void themgiua(node *&head, SinhVien x, int k){
    node *newNode = makeNode(x);
    if(k == 1){
        themdau(head, x); return;
    }
    node *temp = head;
    for(int i = 1; i <= k - 2; i++){
        temp = temp->next;
    }
    //temp : k - 1
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(x == 1){
            string ma, ten; double gpa;
            cin >> ma;
            cin.ignore();
            getline(cin, ten);
            cin >> gpa;
            SinhVien x{ma, ten, gpa};
            themdau(head, x);
        }
        else if(x == 2){
            string ma, ten; double gpa;
            cin >> ma;
            cin.ignore();
            getline(cin, ten);
            cin >> gpa;
            SinhVien x{ma, ten, gpa};
            themcuoi(head, x);
        }
        else{
            int k; cin >> k;
            string ma, ten; double gpa;
            cin >> ma;
            cin.ignore();
            getline(cin, ten);
            cin >> gpa;
            SinhVien x{ma, ten, gpa};
            themgiua(head, x, k);
        }
    }
    duyet(head);
    return 0;
}

// Cho danh sách liên kết đơn mỗi node trong DSLK lưu thông tin của 1 sinh viên gồm có : Mã sinh viên (chuỗi có không quá 20 kí tự), Họ tên (chuỗi không quá 50 kí tự) và điểm gpa. Có 3 thao tác sau : 1. Thêm 1 sinh viên vào đầu danh sách, 2. Thêm 1 sinh viên vào cuối danh sách, 3. Thêm 1 sinh viên vào vị trí K trong danh sách. Bạn hãy thực hiện in ra danh sách liên kết sau khi thực hiện 1 loạt thao tác ở trên.

// Input Format

// Dòng đầu tiên là N : số lượng thao tác cần thực hiện. Các dòng tiếp theo mô tả thao tác, mỗi thao tác gồm 4 dòng. Dòng 1 là loại thao tác(1, 2, 3), nếu thao tác là 3 thì số tiếp theo sau là vị trí chèn K, dòng 2 là mã sinh viên, dòng 3 là họ tên, dòng 4 là điểm gpa của sinh viên cần thêm vào DSLK. Đối với thao tác loại 3 khi kích thước của DSLK là N và chèn vào vị trí N + 1 tức là bạn thêm node đó vào cuối.

// Constraints

// 1<=N<=1000; 0<=X<=1000; 1<=K<=Size(DSLK) + 1

// Output Format

// In ra DSLK sau khi thực hiện N thao tác chèn, mỗi sinh viên in ra trên 1 dòng, các thông tin viết cách nhau một dấu cách và gpa lấy 2 số sau dấu phẩy.

// Sample Input 0

// 7
// 1
// CNTT1
// Le Van Long
// 2.40
// 1
// CNTT2
// Le Van Long
// 1.20
// 1
// CNTT3
// Vuong Hoang Manh
// 1.20
// 1
// CNTT4
// Le Hoang Nam
// 2.80
// 2
// CNTT5
// Vuong Van Phuoc
// 2.60
// 1
// CNTT6
// Pham Xuan Manh
// 3.10
// 3 2
// CNTT7
// Le Xuan Phuoc
// 2.40
// Sample Output 0

// CNTT6 Pham Xuan Manh 3.10
// CNTT7 Le Xuan Phuoc 2.40
// CNTT4 Le Hoang Nam 2.80
// CNTT3 Vuong Hoang Manh 1.20
// CNTT2 Le Van Long 1.20
// CNTT1 Le Van Long 2.40
// CNTT5 Vuong Van Phuoc 2.60