// A pangram is a sentence where every letter of the English alphabet appears at least once.
// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

// Example 1:
// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:
// Input: sentence = "leetcode"
// Output: false
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ifPangram(string sentence)
{
    bool ispangram = true;
    vector<int> alph = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (char c : alph)
    {
        if (find(sentence.begin(), sentence.end(), c) == sentence.end())
        {
            ispangram = false;
            break;
        }
    }
    return ispangram;
}

int main()
{
    cout << ifPangram("leetcode");
    return 0;
}