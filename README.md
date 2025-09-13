
# 🛠️ YashLib.h – A Custom Utility Library for C

`yashLib.h` is a **header-only library in C** that extends the functionality of the standard library.  
It provides **ready-to-use math, string, and array operations**, so you can perform common tasks easily without rewriting functions.  

Unlike traditional libraries, `YashLib.h` is designed to be:
- **Simple** → just include and use, no extra compilation needed  
- **Portable** → works on Windows (MinGW) and Linux (GCC/Clang)  
- **Extendable** → you can add your own functions as needed  

---

# 📖 What Does It Do?

This library adds extra utility functions beyond `<stdio.h>` and `<string.h>`.  
Examples:
- Calculate factorial or check for prime numbers  
- Work with strings (length, reverse, etc.)  
- Perform array operations (find max, min, remove duplicates, etc.)  

Once installed, you can include it globally with:

----

# ✨ Key Features
**🔹 Math Utilities**

-fact(int a) → factorial of a number

-prime(int a) → prime number check

**🔹 String Utilities**

-StrLen(char *s) → length of string

-StrReverse(char *s) → reverse a string

**🔹 Array Utilities**

- linearSearch(int *a, int size, int target) → linear search

- FindMax(int *a, int size) → maximum element

- FindMin(int *a, int size) → minimum element

- rmvDuplicate(int *a, int size) → remove duplicate values

- Secondlargest(int *a, int size) → find 2nd largest element


# ⚙️ Installation
**1. Clone or Download**
```c
git clone https://github.com/Yashjain0099/YashLib.git
```
**2. Copy mytools.h to Compiler’s Include Path**

🔹 For Windows (MinGW)/n

   Locate your MinGW installation folder/n

   Example: C:\MinGW\include\

Copy YashLib.h into this include folder

Now you can use it globally with:
```c
#include <yashLib.h>
```
**3. Copy `YashLib.h` to Compiler’s Include Path**
🔹 For Windows (MinGW)
Locate your MinGW installation folder
Example: C:\MinGW\include\

Copy `YashLib.h` into this include folder

Now you can use it globally with:
```c
#include <YashLib.h>
```
🔹 For Linux (GCC/Clang)
Copy YashLib.h to /usr/include/ (requires sudo):
```c
sudo cp include/mytools.h /usr/include/
```
Now you can include it in any C program with:
```c
#include <mytools.h>
```
# 🚀 Usage
# Example Code (examples/main.c)
```c
#include <stdio.h>
#include <mytools.h>

int main() {
    int arr[] = {1, 2, 3, 5, 5};

    fact(5);          // Factorial of 5
    prime(7);         // Prime number check

    printf("Length of 'hello' = %d\n", StrLen("hello"));

    rmvDuplicate(arr, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
```
Compile & Run
```c
gcc examples/main.c -o main
./main
```
# ✅ No need to compile extra .c files – everything is inside the header 🎉

# 📌 Why Use mytools.h?
**✅ Header-only** → just include and use

**✅ No linking required** → compile with gcc main.c only

**✅ Works globally** → once copied to the compiler’s include folder, available everywhere

**✅ Extensible8=** → add new functions as your personal library grows

---

# 🛠️ Future Roadmap
More math utilities (GCD, LCM, Fibonacci, Matrix operations)

Advanced string utilities (substring search, vowel/consonant count)

File utilities (line/word count, merge, compare files)

System utilities (current time, performance timer, progress bar)

---

# 🤝 Contribution
Contributions are welcome!
To contribute:

Fork the repository

Add or improve functions in mytools.h

Submit a pull request 🚀

---

# 📜 License
This project is licensed under the MIT License.
You are free to use, modify, and share it.

---

✅ This README covers:  
- Intro & explanation of what the library is  
- What it does  
- Key features  
- Installation (Windows + Linux paths)  
- Usage example (with compile command)  
- Project structure  
- Why use it  
- Future roadmap  
- Contribution guidelines  
- License  

---
