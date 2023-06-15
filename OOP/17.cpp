#include <bits/stdc++.h>
using namespace std;

class WordSet {
    private:
        map<string,int> mp1;
        map<string,int> mp2;
    public:
        void count1 (string s) {
            stringstream ss(s);
            string tmp;
            while (ss >> tmp) {
                this->mp1[tmp]++;
            }
        }
        void count2 (string s) {
            stringstream ss(s);
            string tmp;
            while (ss >> tmp) {
                this->mp2[tmp]++;
            }
        }
        void hop () {
            set <string> se;
            for (auto it : this->mp1) {
                se.insert(it.first);
            }
            for (auto it : this->mp2) {
                se.insert(it.first);
            }
            for (auto it : se) {
                cout << it << " ";
            }
        }
        void giao() {
            for (auto it : this->mp1) {
                if (this->mp2[it.first] != 0) {
                    cout << it.first << " ";
                }
            }
        }
};

int main () {
    WordSet a;
    string s1, s2; getline(cin, s1);
    getline(cin,s2);
    a.count1(s1); a.count2(s2);
    a.hop();
    cout << endl;
    a.giao();
    return 0;
}