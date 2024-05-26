#include<bits/stdc++.h>
using namespace std;

string processLine(const string &line) 
{
    stringstream ss(line);
    string word;
    string result;
    bool firstWord = true;

    while (ss >> word) 
    {
        sort(word.begin(), word.end());
        if (!firstWord) 
        {
            result += " ";
        }
        result += word;
        firstWord = false;
    }
    return result;
}

int main() 
{
    string line;
    while (getline(cin, line)) 
    {
        cout << processLine(line) << endl;
    }

    return 0;
}
