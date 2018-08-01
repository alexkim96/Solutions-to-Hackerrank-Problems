vector<int> height(vector<int> h) {
    int j = 0;
    vector<int> result;
    result.push_back(h[h.size() - 1]);
    for (int i = h.size() - 1; i > 0; i--) {
        result.push_back(h[i - 1] + result[j]);
        j++;
    }
    return result;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    vector<int> height1 = height(h1);
    vector<int> height2 = height(h2);
    vector<int> height3 = height(h3);

    while (!height1.empty() || !height2.empty() || !height3.empty()) {
        if (height1.back() > height2.back()) {
            height1.erase(height1.end()-1);
        }
        else if (height2.back() > height3.back()) {
            height2.erase(height2.end()-1);
        }
        else if (height3.back() > height1.back()) {
            height3.erase(height3.end()-1);   
        }
        else {
            return height1.back();
        }
                 
    }
    return 0;
}
