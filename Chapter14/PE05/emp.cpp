// emp.cpp -- implementing sbstr_emp class and children
#include "emp.h"
//******************************************************************************
// abstr_emp
//******************************************************************************
abstr_emp::abstr_emp() : fname("none"), lname("none"), job("none") {}

abstr_emp::abstr_emp(const std::string& fn, const std::string&ln,
                     const std::string& j)
    : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const {
    std::cout << "abstr_emp::ShowAll():\n";
    Show();
    std::cout << std::endl;
}

void abstr_emp::SetAll() {
    std::cout << "abstr_emp::SetAll():\n";
    Set();
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e) {
    os << e.fname << " " << e.lname;
    return os;
}

abstr_emp::~abstr_emp() {}

void abstr_emp::Show() const {
    using std::cout;
    using std::endl;
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::Set() {
    using std::cin;
    using std::cout;
    using std::endl;
    cout << "Enter first name: ";
    cin >> fname;
    cout << "Enter last name: ";
    cin >> lname;
    cout << "Enter job: ";
    cin >> job;
}

//******************************************************************************
// employee
//******************************************************************************
employee::employee() : abstr_emp() {}

employee::employee(const std::string& fn, const std::string& ln,
                   const std::string& j) : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
    std::cout << "employee::ShowAll():\n";
    abstr_emp::Show();
    std::cout << std::endl;
}

void employee::SetAll() {
    std::cout << "employee::SetAll():\n";
    abstr_emp::SetAll();
}

//******************************************************************************
// manager
//******************************************************************************
manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const std::string& fn, const std::string& ln,
                 const std::string& j, int ico)
    : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager& m) : abstr_emp(m), inchargeof(m.inchargeof) {}

void manager::ShowAll() const {
    std::cout << "manager::ShowAll():\n";
    abstr_emp::Show();
    Show();
    std::cout << std::endl;
}

void manager::SetAll() {
    std::cout << "manager::SetAll():\n";
    abstr_emp::Set();
    Set();
}

void manager::Show() const {
    std::cout << "Number of abstr_emps managed: " << inchargeof << std::endl;
}

void manager::Set() {
    std::cout << "Enter the number of abstr_emps managed: ";
    std::cin >> inchargeof;
}

//******************************************************************************
// fink
//******************************************************************************
fink::fink() : abstr_emp(), reportsto("none") {}

fink::fink(const std::string& fn, const std::string& ln,
           const std::string& j, const std::string& rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp& e, const std::string& rpo)
    : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink& e) : abstr_emp(e), reportsto(e.reportsto) {}

void fink::ShowAll() const {
    std::cout << "fink::ShowAll():\n";
    abstr_emp::Show();
    Show();
    std::cout << std::endl;
}

void fink::SetAll() {
    std::cout << "fink::SetAll():\n";
    abstr_emp::Set();
    Set();
}

void fink::Show() const {
    std::cout << "To whom fink reports: " << reportsto << std::endl;
}

void fink::Set() {
    std::cout << "Enter to whom fink reports: ";
    std::cin >> reportsto;
}

//******************************************************************************
// highfink
//******************************************************************************
highfink::highfink() : abstr_emp(), manager(), fink() {}

highfink::highfink(const std::string& fn, const std::string& ln,
                   const std::string& j, const std::string& rpo,
                   int ico)
    : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico)
    : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink& f, int ico)
    : abstr_emp(f), manager(f, ico), fink(f) {}

highfink::highfink(const manager& m, const std::string& rpo)
    : abstr_emp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const {
    std::cout << "highfink::ShowAll():\n";
    abstr_emp::Show();
    manager::Show();
    fink::Show();
    std::cout << std::endl;
}

void highfink::SetAll() {
    std::cout << "highfink::SetAll():\n";
    abstr_emp::Set();
    manager::Set();
    fink::Set();
    std::cout << std::endl;
}
