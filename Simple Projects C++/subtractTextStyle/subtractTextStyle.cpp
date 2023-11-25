#include <iostream> 

using namespace std;

string SubtractText(string text) {
    while(text.size() != 1) {
        text.pop_back();
        cout << text << endl;
    }
}

int main() {
    cout << "Write your text:" << endl;
    string text;
    cin >> text;

    SubtractText(text);

    cin.get();
}