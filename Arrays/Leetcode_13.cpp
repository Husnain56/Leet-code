#include <iostream>
#include<unordered_map>

using std::string;

int romanToInt(string s)
{

    std::unordered_map<char,int> map = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    int num = 0;

    for (int i = 0; i < s.length(); i++)
    {

        if ((s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
            (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
            (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')))
        {
            int value1 = map[s[i]];
            int value2 = map[s[i+1]];
            num = num + (value2 - value1);
            i++;
        }
        else
        {
            num = num + map[s[i]];
        }
    }
    return num;
}

int main()
{

    string s = "XXXII";
    int num = romanToInt(s);
    std::cout << "Integer: " << num << "\n";
    return 0;
}