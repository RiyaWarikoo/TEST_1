#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int count = 0;
        for (int i = 0; i < jewels.size(); i++) {
            for (int j = 0; j < stones.size(); j++) {
                if (jewels[i] == stones[j]) {
                    count++;
                }
            }
        }
        return count; 
    }
};
int main() {
    string jewels="aA";
    string stones="aAAbbbb";
    Solution s;
    cout<<s.numJewelsInStones(jewels,stones)<<endl;
}