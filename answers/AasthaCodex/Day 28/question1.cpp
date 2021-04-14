#include<bits/stdc++.h>
using namespace std;
class PartitionSet {
public:
  bool Partition(const vector<int> &no) {
    int sum = 0;
    for(int i = 0; i < no.size(); i++){
      sum += no[i];
    }
    if(sum % 2 != 0) {
      return false;
    }

    return this->PartitionRecursive(no, sum / 2, 0);
  }
private:
  bool PartitionRecursive(const vector<int> &no, int sum, int currentIndex) {
    if (sum == 0) {
      return true;
    }

    if (no.empty() || currentIndex >= no.size()) {
      return false;
    }
    if (no[currentIndex] <= sum) {
      if (PartitionRecursive(no, sum - no[currentIndex], currentIndex + 1)) {
        return true;
      }
    }
    return PartitionRecursive(no, sum, currentIndex + 1);
  }
};
