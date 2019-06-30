#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>


using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    // a- z 97-122
    int firstUniqChar(string s) {
      vector<int> seen(27);
      for (int i = 0; i < s.length(); ++i) {
        ++seen[s[i] - 'a'];
      }
      for (int i = 0; i < s.length(); ++i) {
        if (seen[s[i] - 'a'] == 1)
          return i;
      }
      return -1;
    }
};

void test1() {
  Solution S;
  cout << "0? " << Solution().firstUniqChar("leetcode") << endl;
  cout << "2? " << Solution().firstUniqChar("loveleetcode") << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

