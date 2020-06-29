class Solution {
public:
    string defangIPaddr(string address) {
        string res(address.size() + 6 , '.');
        int size = address.size();
        int index = 0;
        
        for (int i = 0; i < size; ++i) {
            if (address[i] == '.') {
                res[index++] = '[';
                index++;
                res[index++] = ']';
            }
            else {
                res[index++] = address[i];
            }
        }
        
        return res;
    }
};
