#include <iostream>
#include <vector>
using namespace std;

// Base Class: Account Management
class Account {
protected:
    string email, password;
public:
    void createAccount() {
        cout << "Enter Email: "; cin >> email;
        cout << "Enter Password: "; cin >> password;
        cout << "Account Created Successfully!\n";
    }
    bool login() {
        string inputEmail, inputPassword;
        cout << "Enter Email: "; cin >> inputEmail;
        cout << "Enter Password: "; cin >> inputPassword;
        return (inputEmail == email && inputPassword == password);
    }
};

// Base Class: General Management
class Management {
protected:
    string name;
public:
    Management(string n) : name(n) {}
    virtual void display() = 0; // Abstract Method
};

// Derived Class: Food & Drink Management
class FoodAndDrink : public Management {
private:
    vector<string> foodItems;
public:
    FoodAndDrink() : Management("Food & Drink") {}
    void addFood(string item) { foodItems.push_back(item); }
    void display() override {
        cout << "--- Food & Drink Menu ---\n";
        for (const string& item : foodItems)
            cout << "- " << item << endl;
    }
};

// Derived Class: School Management
class School : public Management {
private:
    vector<string> students;
public:
    School() : Management("School") {}
    void addStudent(string student) { students.push_back(student); }
    void display() override {
        cout << "--- Student List ---\n";
        for (const string& student : students)
            cout << "- " << student << endl;
    }
};

// Derived Class: Company Management
class Company : public Management {
private:
    vector<string> employees;
public:
    Company() : Management("Company") {}
    void addEmployee(string employee) { employees.push_back(employee); }
    void display() override {
        cout << "--- Employee List ---\n";
        for (const string& employee : employees)
            cout << "- " << employee << endl;
    }
};

// Main Function
int main() {
    Account user;
    user.createAccount();

    if (user.login()) {
        cout << "Login Successful!\n\n";
        FoodAndDrink foodManager;
        School schoolManager;
        Company companyManager;

        foodManager.addFood("Pizza");
        foodManager.addFood("Coffee");
        schoolManager.addStudent("John Doe");
        schoolManager.addStudent("Jane Smith");
        companyManager.addEmployee("Mr. CEO");
        companyManager.addEmployee("Ms. Manager");

        foodManager.display();
        schoolManager.display();
        companyManager.display();
    } else {
        cout << "Invalid Login. Exiting...\n";
    }

    return 0;
}
