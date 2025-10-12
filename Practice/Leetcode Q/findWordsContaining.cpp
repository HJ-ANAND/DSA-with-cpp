#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> findWordsContaining(vector<string> &words, char x)
{
    vector<int> index;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i].find(x) != string::npos)
        {
            index.push_back(i);
        }
    }
    return index;
}

int main()
{
    vector<string> words = {"abc", "bcd", "aaaa", "cbc"};
    char x = 'a';
    vector<int> index = findWordsContaining(words, x);
    for (int i : index)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}