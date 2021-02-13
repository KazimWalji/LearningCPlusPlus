#include <iostream>
using namespace std;

class AbstractClass {
    virtual void isOld() = 0;
};
class Person: AbstractClass {
    private: 
        double weight;
    public:
        int age;
        string name;
        double height;
        Person (int years, string title, double inches, double mass) {
            age = years;
            name = title;
            height = inches;
            setWeight(mass);
        }
        double getBmi() {
            return 703 * (weight/pow(height, 2));
        }
        void setWeight (double mass) {
            if (mass > 20 && mass < 1000) {
                weight = mass;
            }
        }
        void isOld() {
            if (age > 30)
                cout << name << "is old" << endl;
            else {
                cout<< name << " is young" << endl;
            }
        }
};
class Student: public Person {
    private: 
        string major;
        string year;
    public:
        Student(string major1, string year1, int years, string title, double inches, double mass)
        :Person(years, title, inches, mass) {
            major = major1;
            year = year1;
        }
};
class Graduate: public Person {
    private: 
        int salary;
        string job;
    public: 
        Graduate(string career, int money, int years, string title, double inches, double mass)
        :Person(years, title, inches, mass) {
            job = career;
            salary = money;
        }
        bool isRich() {
            if (salary > 1000000 && age > 30) {
                cout << "is rich";
                return true;
            } else {
                cout << "is not rich";
                return false;
            }
        }
        string getJob() {
            return job;
        }
};
int main()
{
    Student user = Student("computer science", "freshman", 17, "Kazim", 63, 125);
    Graduate ElonMusk = Graduate("CEO of Tesla", 1000000000, 49, "Elon Musk", 74, 180);
    cout << ElonMusk.getJob() << " rich: " << ElonMusk.isRich() << endl;
    cout << user.getBmi() << "\n" << ElonMusk.getBmi() << endl;
    return 0;
}
