#include <iostream>
#include <string>
#include <map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> temp;
        for(int i=0; i<s.length(); i++){
            if(temp.find(s[i]) == temp.end() && temp.find(t[i]) == temp.end())
            {
                temp[s[i]] = t[i];
            }
            else{
                if(temp[s[i]]!= t[i]){
                    return false;
                }
                }

            }
            return true;
        }

        

};
int main() {
    Solution sol;
    string s = "paper";
    string t = "title";
    bool result = sol.isIsomorphic(s, t);
    cout << (result ? "true" : "false") << endl; // Output: true
    cout<<(s!=t);
    return 0;
}