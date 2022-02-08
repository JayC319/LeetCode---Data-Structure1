class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int magazineTable[26] = {0};
        
        for(int i = 0; i < magazine.size(); i++){
            int index = magazine[i] - 'a';
            magazineTable[index] ++;
        }
        
        for(int i = 0; i < ransomNote.size(); i++){
            int temp = ransomNote[i] - 'a';
            if(!magazineTable[temp])
                return false;
            else
                magazineTable[temp]--;
        }
        return true;
    }
};