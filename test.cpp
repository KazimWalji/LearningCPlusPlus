#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    string str = "Kazim";
    double dec = 31.5;
    char letter = 'A';
    str = str + " Walji";
    str[str.length() - 1] = 'y';
    string last = str.substr(str.find('W'), str.length()-1);
    cout << "My name is " << str << str.find("im") << last << endl;
    cout << "MY BMI is " << dec << endl;
    cout << "I got an " << letter << endl;
    cout << str.length() << str[3] << endl;

    int age;
    cout << "1 to 10 how cool are you?: " << endl;
    cin >> age;
    age += 5;
    age ++;
    cout << "I am " << age << " years old" << endl;
    cout << pow(age, 2) << endl;
    cout << round(sqrt(2)) << endl;

    string title;
    cout << "enter title: " << endl;
    cin >> title;
    cout << "tile is " << title << endl;
    return 0;
}
