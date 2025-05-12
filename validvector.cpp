#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> invalid_vec{1};
	vector<int> valid_vec{1234};
	cout << valid_vec[0] << "\n";  // outputs 1234
    // running through 0 to 1 because the invalid_vec has size 1 if morethan that eg: i < 2 gives out of range
	for (int i = 0; i < 1; i++) 
    {
		invalid_vec.at(i) = i; //vector::at wont give error.
        cout << i << "\n";  
	}
	cout <<"dina "<< valid_vec[0] << "\n";  // may output 4
}