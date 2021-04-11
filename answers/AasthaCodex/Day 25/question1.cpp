#include <bits/stdc++.h>
using namespace std;
class Sol {
public:
   int Moves(vector<int>& nums) {
      int len = nums.size();
      if (len == 0)
         return 0;
      sort(nums.begin(), nums.end());
      int count = 0;
      for (int i = 0; i < len; i++) {
         count += nums[i] - nums[0];
      }
      return count;
   }
};
main(){
   Sol ob;
   vector<int> v = {3,2,3,4};
   cout <<(ob.Moves(v));
}
