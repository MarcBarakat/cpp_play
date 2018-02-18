#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<typename T>
 class CustomArray {
  
public:
  vector<T> _v;
  CustomArray(vector<T> v_) {
    _v = v_;
  };
  void SortArray() {
    sort(_v.begin(), _v.end());
  }
  void PrintArray() {
    for (auto i : _v) {
      cout << i << '\t';
    }
    cout << endl;
  }
}
  ;

int main() {

  vector<int> v = {3,1,2,3,4,5,6,7,8,10};
  
  CustomArray<int>* a = new CustomArray<int>(v);
  a->SortArray();
  a->PrintArray();
  
  return 0;

}
