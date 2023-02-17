//Given a string, write a program to count the number of vowels and consonants in it and reverse it.
#include <iostream>
#include <string>
using namespace std;
  
int main() {
    string str;
    int vow_count = 0;
    int con_count = 0;
    cout << "Enter the string :" << endl;
     getline(cin, str);

    char vow[]={'a','e','i','o','u'};

    for (int i = 0 ; i < str.length() ; i++) {
        bool is_vowel = false;
        for (int j = 0; j < 5; j++) {
        if (  tolower(str[i]) == vow[j]) {
            is_vowel = true;
            break;
        }
        }
        if (is_vowel) {
        vow_count++;
        } 
        else if (isalpha(str[i])) {
        con_count++;
        }
    }

    cout <<  vow_count <<  con_count << str;

    return 0;
}


