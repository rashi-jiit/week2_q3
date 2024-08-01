#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string paragraph;
    map<string, int> wordCount;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);
    stringstream ss(paragraph);
    string word;
    while (ss >> word) {
        string cleanWord;
        for (char &ch : word) {
            if (isalpha(ch)) {
                cleanWord += tolower(ch);
            }
        }
        if (!cleanWord.empty()) {
            wordCount[cleanWord]++;
        }
    }
    cout << "Word frequencies:\n";
    for (const auto &entry : wordCount) {
        cout << entry.first << ": " << entry.second << "\n";
    }
    return 0;
}
