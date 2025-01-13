#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    unsigned n;
    cin >> n;
    for (unsigned i = 0; i < n; ++i) {
        cin >> vec[i]; 
    }
  
    
    if (any_of(vec.begin(), vec.end(). is_negative())) {
        unsigned count = 0; 
        for (int & x : vec) {
            if (is_negative(x)) count++;
        }
        cout << count;
    } else cout << "MARKS ARE CLEAR";
    return 0;
}
