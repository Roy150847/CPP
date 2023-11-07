#include<iostream>
#include<vector>
using namespace std;
void SelectionSort(vector<int>& arr, int n) {
	for(int i=0; i<n-1; i++) {
		int minIndex = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j] < arr[minIndex])
			minIndex = j;
		}
		swap(arr[i], arr[minIndex]);
	}
}
void display(vector<int>& arr) {
	for(int i=0; i<arr.size(); i++) {
		cout << arr[i] << " ";
	}
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
	SelectionSort(vec1, n);
	cout << "Array after sorting: " << endl;
	display(vec1);
}
