# Notes:
According to a question on [stackoverflow](https://stackoverflow.com/questions/15960015/c-printing-boolean-what-is-displayed):

The standard streams have a boolalpha flag that determines what gets displayed -- when it's false, they'll display as 0 and 1. When it's true, they'll display as false and true.

There's also an std::boolalpha manipulator to set the flag, so this:

```
#include <iostream>
#include <iomanip>

int main() {
    std::cout<<false<<"\n";
    std::cout << std::boolalpha;   
    std::cout<<false<<"\n";
    return 0;
}
```
...produces output like:
```
0
false
```