#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s){
    char *p, *q;
    p = &s[0];
    q = &s[s.size()-1];
    cout << "q: " << *q << endl;
    cout << "p: " << *p << endl;

    while(p<=q){
        if(*p==*q){
            p++;
            q--;
        }
        else break;
    }

    return p>=q;
}

int main(void){
    string a = ("abcba");
    cout << isPalindrome(a);
    return 0;
}
