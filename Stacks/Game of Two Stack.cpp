//From Solution by vkreddy21

int twoStacks(int x, vector<int> a, vector<int> b) {
    int sum = 0, i = 0, j = 0;
    int result;
    int n = a.size();
    int m = b.size();
    
    while (sum + a[i] <= x && i < n) {
        sum += a[i];
        i++;
    }
    result = i;
    while (i >= 0 && j < m) {
        sum += b[j];
        j++;
        while (sum > x && i > 0) {
            i--;
            sum -= a[i];
        }
        if (sum <= x && i + j > result) {
            result = i + j;
        }  
    }
    return result; 
}
