class Solution {
  public:
    string compareNM(int n, int m){
        if (n < m) {
            return "lesser";
        }
        else if (n > m) {
            return "greater";
        }
        else {
            return "equal";
        }
    }
};