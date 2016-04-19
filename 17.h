class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits == "")
            return {};
        
        vector<string> result = {""};
        vector<string> temp;
        for(int i=0; i<digits.size(); i++)
        {
            for (auto c : getLetters(digits[i])){
                for (auto text : result){
                    temp.push_back(text+c);
                }
            }
            
            result = temp;
            temp = {};
        }
        return result;
    }
    
    vector<char> getLetters(char digit)
    {
        if (digit == '1')
            return {};
        if (digit == '2')
            return {'a','b','c'};
        if (digit == '3')
            return {'d','e','f'};
        if (digit == '4')
            return {'g','h','i'};
        if (digit == '5')
            return {'j','k','l'};
        if (digit == '6')
            return {'m','n','o'};
        if (digit == '7')
            return {'p','q','r','s'};
        if (digit == '8')
            return {'t','u','v'};
        if (digit == '9')
            return {'w','x','y','z'};
        if (digit == '0')
            return {' '};
    }
};