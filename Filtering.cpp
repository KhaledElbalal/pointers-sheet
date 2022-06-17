#include <iostream>

using std::cout, std::cin, std::string;

bool isVowel(char s) {
    string vowels = "aeiou";
    bool flag = false;
    for(int i = 0; i < vowels.size(); i++) {
        if(s == vowels[i]) {
            flag = true;
            break;
        }
    }
    return flag;
}

void filterString(std::string &s, char filter)
{
    for(int i = 0; i < s.size(); i++) {
        if(isVowel(s[i])) {
            s[i] = filter;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    char filter;
    cin >> filter;
    filterString(s, filter);
    cout << s;
}