class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        for(int i = 0;i<array.size();i++){
            for(int j = 0;j<array[0].size();j++){
                if(array[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
