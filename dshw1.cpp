#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

class Employee {
  public:
  vector<int> sales;
  void input() {
    int x;
    int count = 0;
   while (cin >> x) {
     if (x > 50 || x < 0) {        //contraints
       cout << "Error" << '\n';
     }
     else {
     sales.push_back(x);
       count++;
       if (count == 5) { //if we read exactly 5 intergers we dont need any more
         break;
       }
     }
   }
   for(int i = 0;i<sales.size();i++) {
     cout << sales[i] << " ";
   }
   cout << '\n';
  }

  int calculateTotalSales() {
    int sum = 0;
    for (int i = 0; i < sales.size(); i++) {
      sum += sales[i];
    }
    return sum;
  }
};
  int main() {
    int n; //numOfEmployees
    int salesGreaterJack = 0;
  cout << "Enter # of Employees " << '\n';
  cin >> n;
  if ( n < 1 || n > 100) { //contraints
    cout << "Error Number of Empl" << '\n';
    cin >> n;
  }
  Employee numOfEmployees[n];
  for (int j = 0; j < n; j++) {
    if ( j == 0) {
      cout << "Enter sales for Jack " << '\n';
    }
  else {
  cout << "Enter sales for Employee  " << j << '\n';
  }
  numOfEmployees[j].input();
  //cout << "Sum of this Employee Sales is " << numOfEmployees[j].calculateTotalSales() << '\n';
  if (numOfEmployees[j].calculateTotalSales() > numOfEmployees[0].calculateTotalSales()) {
    salesGreaterJack++;
  }
}
 cout << "number of employees with greater sales than Jack " << salesGreaterJack << '\n';
return 0;
}