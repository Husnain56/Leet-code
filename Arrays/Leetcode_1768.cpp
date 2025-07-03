#include <iostream>
#include <string>

using std::string;

string mergeAlternately(string word1, string word2)
{

    string merged = "";
    char p1 = word1[0];
    char p2 = word2[0];

    int length = std::max(word1.length(), word2.length());
    for (int i = 0; i < length; i++)
    {

        if (i < word1.length())
        {
            p1 = word1[i];
            merged += p1;
        }

        if (i < word2.length())
        {
            p2 = word2[i];
            merged += p2;
        }
    }
    return merged;
}

int main()
{

    string word1 = "ab";
    string word2 = "pqrs";
    string merged = mergeAlternately(word1, word2);
    std::cout << "Merged String: " << merged << "\n";

    return 0;
}
