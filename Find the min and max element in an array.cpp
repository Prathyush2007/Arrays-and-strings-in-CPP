//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
cout << "Enter the number of elements): ";
cin >> n;
if (n <= 5) {
cout << "Please enter more than 5 elements." << endl;
return 0;
}
cout << "Enter " << n << " elements:" << endl;
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
int min = arr[0];
int max = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] < min)
min = arr[i];
if (arr[i] > max)
max = arr[i];
}
cout << "Minimum element: " << min << endl;
cout << "Maximum element: " << max << endl;
return 0;
}
