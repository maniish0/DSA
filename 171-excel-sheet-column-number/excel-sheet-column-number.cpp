class Solution {
public:
    int titleToNumber(string columnTitle) {
        int colNum = 0;
        for(char title : columnTitle){
            colNum = colNum* 26+(title - 'A' + 1);
        }

        return colNum;
    }
};