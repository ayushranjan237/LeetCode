class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for(int i=0; i<sentences.size(); i++){
            int temp =1;
            for(int j=0; j<sentences[i].size(); j++){
            if(sentences[i][j] == ' ')
                temp++;
                
            res = max(temp, res);
        }
        }
        return res;
    }
};