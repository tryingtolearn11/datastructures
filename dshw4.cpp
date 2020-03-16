#include<iostream>
using std::string;
using std::cout;
using std::cin;

template<class T>
class addElement {
  T element;
  public:
    addElement (T arg) {
      element = arg;
    }
    //int or floats
    T add (T arg) {
      return (element+arg);
    }
  };

 template<> //specialization for type string
class addElement<string> {
  string element;
  public: addElement (string arg) {
  element = arg;
}
  string addString (string arg) {
  return element+arg;
  }
};

int main()
{
int n; //number or lines
int i;
cin >> n;
for(i = 0; i < n; i++) { //search for type
  string type;
  cin >> type;
  if(type == "int") {
    int e1,e2;
    cin >> e1 >> e2;
    addElement<int> integer(e1);
    cout << integer.add(e2) << '\n';
    cout << '\n';
  }
  else if (type == "float") {
    double e1,e2;
    cin >> e1 >> e2;
    addElement<double> floating(e1);
    cout << floating.add(e2) << '\n';
    cout <<  '\n';
  }
  else if (type == "string") {
    string e1, e2;
    cin >> e1 >> e2;
    addElement<string> strline(e1);
    cout << strline.addString(e2) << '\n';
    cout << '\n';
  }


}


  return 0;
}