#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string line;

    while (getline(cin, line)) 
    {
        string word;
        bool wordStarted = false;

        for (char c : line) 
        {
            if (c == ' ') continue;
            else {
                word += c;
                wordStarted = true;
            }
        }

        if (!word.empty()) 
        {
            sort(word.begin(), word.end());
            cout << word;
        }
        cout << endl;
    }

    return 0;
}
