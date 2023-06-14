class Solution {
public:
    bool isFascinating(int n) {
    string a = to_string(n)+to_string(2*n)+to_string(3*n);
    sort(begin(a),end(a));
    return a == "123456789";
    }
};