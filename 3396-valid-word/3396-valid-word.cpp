class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        if(n<3){
            return false;
        }

        bool hasVowel=false,hasConsonant=false;
        auto isVowel=[&](char c){
            c=tolower(c);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                return true;
            }
            else{
                return false;
            }
        };

        for(char c:word){
            if(isdigit(c)){
                continue;
            }
            else if(isalpha(c)){
                if(isVowel(c)){
                    hasVowel=true;
                }
                else{
                    hasConsonant=true;
                }
            }
            else{
                return false;
            }
        }

        if(hasVowel && hasConsonant){
            return true;
        }
        else{
            return false;
        }
    }
};
