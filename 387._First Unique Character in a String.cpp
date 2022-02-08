#include <string>
#include <iostream>

using namespace std;


int firstUniqChar(string s) {
    
    int occurrenceTable[26] = {0};

        for(int i = 0; i < s.size(); i++) {
            int index = s[i] - 'a';
            occurrenceTable[index]+=1;
        }
        
        for (int i = 0; i < 26; i++){
            cout << " " << occurrenceTable[i] << " " << endl;
            if (occurrenceTable[i] == 1)
                return i;
        }
        return -1;
}

int main()
{
    string s = "leetcode";
    firstUniqChar(s);
}