#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int>& arr, int n) {
	for(int i=0; i<n-1; i++) {
		bool swapped = false;
		for(int j=0; j<n-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false) {
			// already swapped
			break;
		}
	}
}
void display(vector<int>& arr) {
	for(int i=0; i<arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	vector<int> vec1;
	int n, value;
	cout << "Enter size of array: ";
	cin >> n;
	for(int i=0; i<n; i++) {
		cout << "Enter value at position " << i+1 << ": ";
		cin >> value;
		vec1.push_back(value);
	}
	cout << "Array before sorting: " << endl;
	display(vec1);
	BubbleSort(vec1, n);
	cout << "Array after sorting: " << endl;
	display(vec1);
}
