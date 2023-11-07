#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector<int>& arr, int n) {
	for(int i=1; i<n; i++) {
		int temp = arr[i];
		int j = i-1;
		for( ; j>=0; j--) {
			if(arr[j] > temp) {
				arr[j+1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j+1] = temp;
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
	InsertionSort(vec1, n);
	cout << "Array after sorting: " << endl;
	display(vec1);
}
