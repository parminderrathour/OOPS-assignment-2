//Q1 ASSIGNMENT 2
#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails() {
        cout << "Enter new Degree: ";
        cin >> degree;
    }

    void updateCGPA() {
        cout << "Enter updated CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << "\n----- Student Details -----\n";
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree : " << degree << endl;
        cout << "Hostel : " << hostel << endl;
        cout << "CGPA   : " << cgpa << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.updateCGPA();
    s.displayDetails();

    return 0;
}



// Q2 


#include <iostream>
using namespace std;

class Student {
private:
    float cgpa;

public:
    string name;
    int rollNo;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void display() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.display();
    return 0;
}


// Q3

#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunction() {
        cout << "Private function called successfully." << endl;
    }

public:
    void publicFunction() {
        privateFunction();
    }
};

int main() {
    Demo d;
    d.publicFunction();
    return 0;
}


//Q4

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    void getdata() {
        cout << "Enter width and height: ";
        cin >> width >> height;
    }

    void calculateArea() {
        cout << "Area of Rectangle = " << width * height << endl;
    }
};

int main() {
    Rectangle r;
    r.getdata();
    r.calculateArea();
    return 0;
}


//Q5

#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void setComplex(float r, float i) {
        real = r;
        imag = i;
    }

    void displayComplex() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setComplex(2, 3);
    c2.setComplex(4, 5);

    c3 = c1.add(c2);

    cout << "Sum = ";
    c3.displayComplex();

    return 0;
}


//Q6

#include <iostream>
using namespace std;

int x = 10;   // global variable

class Test {
public:
    void show() {
        int x = 20;   // local variable
        cout << "Local x = " << x << endl;
        cout << "Global x = " << ::x << endl;
    }
};

void display() {
    cout << "Function outside class called." << endl;
}

int main() {
    Test t;
    t.show();
    display();
    return 0;
}

//Q7

#include <iostream>
using namespace std;

namespace First {
    int value = 10;
}

namespace Second {
    int value = 20;
}

int main() {
    cout << "Value from First namespace = " << First::value << endl;
    cout << "Value from Second namespace = " << Second::value << endl;
    return 0;
}



