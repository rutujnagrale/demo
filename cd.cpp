#include <iostream>
#include <stack>
#include <string>

using namespace std;

string backspace(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '0' || c == '1') {
            st.push(c);
        } else if (c == 'B') {
            if (!st.empty()) {
                st.pop();
            }
        }
    }
    string res;
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    return res;
}

int main() {
   

    string s ;
    cin >> s ;
    cout << backspace(s);





    return 0;
}
