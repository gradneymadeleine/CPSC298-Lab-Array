#include <iostream>

using namespace std;

int main(){
  int n = 5;
  int i;
  float num[5], sum = 0.0; // numbers in the array, and the def of sum

  for(i = 0; i< n; ++i){ // for loop to get the numbers from user until it hits 5
    cout << i + 1 << ". Enter number: ";
    cin >> num[i];
    sum += num[i];
  }

  cout << "Sum is: " << sum << endl; //print out answer

  return 0;
}
