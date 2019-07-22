# Re-do Questions:
- [ ] Programming Exercise 12.1

# Notes:
## C++ **automatically provides** the following member of functions:
  - A **default constructor** if you define no constructors
  - A **default destructor** if you don't define one
  - A **copy constructor** if you don't define one
  - An **assignment operator** if you don't define one
  - An **address operator** if you don't define one

## Copy Constructor -- `Class_name(const Class_name&)`
- `StringBad sailor = sports;` is the same as `StringBad(const StringBad&);`, which will call a copy constructor. (Listing 12.3 in the book.) This does not copy the string; it copies the pointer to a string. That is, after sailor is initialized to sports, you wind up with two pointers to the same string.
- A copy constructor is invoked whenever a **new object** is created and **initialized** to an existing object of the same kind.
  - `StringBad ditto(motto);`
  - `StringBad metoo = motto;`
  - `StringBad also = StringBad(motto);`
  - `StringBad* pStringBad = new StringBad(motto);`
  - Less obviously, a compiler uses a copy constructor whenever a program **generates copies of an object**. In particular, it’s used when a function **passes an object by value or when a function returns an object**. Remember, passing by value means creating a copy of the original variable. A compiler also uses a copy constructor whenever it generates temporary objects.
- The default copy constructor performs a member-by-member copy of the nonstatic members (memberwise copying, also sometimes called shallow copying).
- If a class contains members that are **pointers initialized by new**, you should define a copy constructor that **copies the pointed-to data instead of copying the pointers themselves**. This is termed deep copying. The alternative form of copying (memberwise, or shallow, copying) just copies pointer values. A shallow copy is just that—**the shallow “scraping off” of pointer information for copying, rather than the deeper “mining” required to copy the constructs referred to by the pointers**.
- Definition Example:
  ```
  StringBad::StringBad(const StringBad & st) {
      num_strings++; // handle static member update
      len = st.len;  // same length
      str = new char [len + 1]; // allot space
      std::strcpy(str, st.str); // copy string to new location
      cout << num_strings << ": \"" << str
           << "\" object created\n"; // For Your Information
  }
  ```

## Assignment Operators -- `Class_name& Class_name::operator=(const Class_name&)`
- An overloaded assignment operator is used when you assign one object to another **existing object**.
  - Example:
  ```
  StringBad newStringBad;        // default constructor invoked
  newStringBad = existStringBad; // assignment operator invoked
  ```
- Like a copy constructor, an implicit implementation of an assignment operator performs a member-to-member copy.
- Definition Example:
  ```
  StringBad & StringBad::operator=(const StringBad & st) {
      if (this == &st) // object assigned to itself
          return *this;  // all done
      delete [] str;   // free old string
      len = st.len;
      str = new char [len + 1]; // get space for new string
      std::strcpy(str, st.str); // copy the string
      return *this;             // return reference to invoking object
  }
  ```
