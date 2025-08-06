#include <iostream>
using namespace std;

class Restaurant {
public:
    string name;
    string location;
    string cuisineType;
    int seatingCapacity;
    bool hasDelivery;
    bool isOpen24Hours;
    float rating;
    int openingYear;
    string owner;
    string contactNumber;

    Restaurant() {}

    Restaurant(string n, string loc, string type, int seat, bool delivery, bool open24, float rate, int year, string own, string contact) {
        name = n;
        location = loc;
        cuisineType = type;
        seatingCapacity = seat;
        hasDelivery = delivery;
        isOpen24Hours = open24;
        rating = rate;
        openingYear = year;
        owner = own;
        contactNumber = contact;
    }

    void displayInfo() {
        cout << "Restaurant: " << name << ", " << location << ", " << cuisineType << ", " << seatingCapacity << " seats, "
             << (hasDelivery ? "Has Delivery" : "No Delivery") << ", "
             << (isOpen24Hours ? "Open 24/7" : "Limited Hours") << ", Rating: " << rating << ", Opened: " << openingYear
             << ", Owner: " << owner << ", Contact: " << contactNumber << endl;
    }
};

class MedicalClinic {
public:
    string name;
    string address;
    int numberOfDoctors;
    bool isOpenOnWeekends;
    string specialization;
    int establishedYear;
    float patientSatisfaction;
    string contactEmail;
    string contactPhone;
    string directorName;

    MedicalClinic() {}

    MedicalClinic(string n, string addr, int docs, bool weekend, string spec, int year, float rating, string email, string phone, string director) {
        name = n;
        address = addr;
        numberOfDoctors = docs;
        isOpenOnWeekends = weekend;
        specialization = spec;
        establishedYear = year;
        patientSatisfaction = rating;
        contactEmail = email;
        contactPhone = phone;
        directorName = director;
    }

    void displayInfo() {
        cout << "Clinic: " << name << ", Address: " << address << ", Doctors: " << numberOfDoctors
             << ", " << (isOpenOnWeekends ? "Open on Weekends" : "Closed on Weekends") << ", Specialization: " << specialization
             << ", Since " << establishedYear << ", Rating: " << patientSatisfaction << ", Director: " << directorName
             << ", Email: " << contactEmail << ", Phone: " << contactPhone << endl;
    }
};

class School {
public:
    string name;
    string type;
    int numberOfStudents;
    int numberOfTeachers;
    string principal;
    string location;
    int foundationYear;
    bool hasLibrary;
    bool hasSportsComplex;
    float averageScore;

    School() {}

    School(string n, string t, int students, int teachers, string p, string loc, int year, bool lib, bool sport, float score) {
        name = n;
        type = t;
        numberOfStudents = students;
        numberOfTeachers = teachers;
        principal = p;
        location = loc;
        foundationYear = year;
        hasLibrary = lib;
        hasSportsComplex = sport;
        averageScore = score;
    }

    void displayInfo() {
        cout << "School: " << name << ", Type: " << type << ", Students: " << numberOfStudents << ", Teachers: " << numberOfTeachers
             << ", Principal: " << principal << ", Location: " << location << ", Since: " << foundationYear
             << ", Library: " << (hasLibrary ? "Yes" : "No") << ", Sports Complex: " << (hasSportsComplex ? "Yes" : "No")
             << ", Avg Score: " << averageScore << endl;
    }
};

class Book {
public:
    string title;
    string author;
    int pages;
    int year;
    string genre;
    string publisher;
    bool isBestseller;
    float rating;
    string language;
    string ISBN;

    Book() {}

    Book(string t, string a, int p, int y, string g, string pub, bool best, float r, string lang, string isbn) {
        title = t;
        author = a;
        pages = p;
        year = y;
        genre = g;
        publisher = pub;
        isBestseller = best;
        rating = r;
        language = lang;
        ISBN = isbn;
    }

    void displayInfo() {
        cout << "Book: " << title << " by " << author << ", " << pages << " pages, Year: " << year << ", Genre: " << genre
             << ", Publisher: " << publisher << ", Bestseller: " << (isBestseller ? "Yes" : "No")
             << ", Rating: " << rating << ", Language: " << language << ", ISBN: " << ISBN << endl;
    }
};

class Student {
public:
    string fullName;
    int age;
    string gender;
    string university;
    string major;
    float GPA;
    int yearOfStudy;
    string studentID;
    string email;
    bool isOnScholarship;

    Student() {}

    Student(string name, int a, string g, string uni, string m, float gpa, int year, string id, string e, bool scholar) {
        fullName = name;
        age = a;
        gender = g;
        university = uni;
        major = m;
        GPA = gpa;
        yearOfStudy = year;
        studentID = id;
        email = e;
        isOnScholarship = scholar;
    }

    void displayInfo() {
        cout << "Student: " << fullName << ", Age: " << age << ", Gender: " << gender << ", University: " << university
             << ", Major: " << major << ", GPA: " << GPA << ", Year: " << yearOfStudy << ", ID: " << studentID
             << ", Email: " << email << ", Scholarship: " << (isOnScholarship ? "Yes" : "No") << endl;
    }
};

class Job {
public:
    string title;
    string company;
    string location;
    int salary;
    string type;
    int requiredExperience;
    bool isRemote;
    string contactEmail;
    string deadline;
    string description;

    Job() {}

    Job(string t, string c, string loc, int s, string tp, int exp, bool remote, string email, string dl, string desc) {
        title = t;
        company = c;
        location = loc;
        salary = s;
        type = tp;
        requiredExperience = exp;
        isRemote = remote;
        contactEmail = email;
        deadline = dl;
        description = desc;
    }

    void displayInfo() {
        cout << "Job: " << title << ", Company: " << company << ", Location: " << location << ", Salary: $" << salary
             << ", Type: " << type << ", Experience: " << requiredExperience << " years, "
             << (isRemote ? "Remote" : "On-site") << ", Contact: " << contactEmail << ", Deadline: " << deadline
             << ", Description: " << description << endl;
    }
};

int main() {
    Restaurant res("Diyor", "Tashkent", "Uzbek", 120, true, false, 4.7, 2015, "Ali Valiyev", "+998 90 1234567");
    MedicalClinic clinic("Sihat", "Andijan", 10, true, "Therapy", 2010, 4.8, "info@sihat.uz", "+998 91 9876543", "Dr. Rustamov");
    School school("Alpomish School", "Private", 800, 45, "Nodir Inoyatov", "Namangan", 2005, true, true, 89.5);
    Book book("Ufq", "Abdulla Qodiriy", 350, 1930, "Historical", "Sharq", true, 4.6, "Uzbek", "1234567890");
    Student student("Dilshod Karimov", 21, "Male", "TUIT", "Computer Science", 3.7, 3, "ST12345", "dilshod@tuit.uz", true);
    Job job("Frontend Developer", "Pluto Soft", "Fergana", 9000, "Full-time", 2, true, "jobs@pluto.uz", "2025-09-01", "ReactJS, Next.js required");

    res.displayInfo();
    clinic.displayInfo();
    school.displayInfo();
    book.displayInfo();
    student.displayInfo();
    job.displayInfo();

    return 0;
}

// Quyidagilarga class yarating.
// Har biri uchun kamida 10 tadan hususiyati bo'lsin.
// Har biri uchun 2 tadan constructor bo'lsin. 
// 1 chisi malumot qabul qilmaydigan
// 2 chisi hamma malumotni qabul qiladigan.
// Har birida DisplayInfo() nomli method bo'lsin

// 1.Restaurant
// 2.MedicalClinic
// 3.School
// 4.Book
// 5.Student
// 6.Job