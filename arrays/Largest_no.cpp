class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        for (int i=1; i<n; i++) {
            if (arr[0]<arr[i]) {
                arr[0] = arr[i];
            }
        }
        return arr[0];
    }
};