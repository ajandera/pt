# Examples in C language
Author: Ing. Ales Jandera (2024) 

## History

The C programming language was developed in the early 1970s at Bell Laboratories by Dennis Ritchie. It evolved from an earlier language called B, which itself was based on BCPL (Basic Combined Programming Language). Ritchie's goal was to create a language that would allow for more efficient programming while still retaining the low-level features necessary for system programming.

Here's a basic timeline of key events in the history of C:

1. **1972**: Dennis Ritchie began working on C at Bell Laboratories. He used C to rewrite the Unix operating system, which had previously been written in assembly language.

2. **1978**: The first edition of "The C Programming Language," often referred to as the K&R C, was published by Brian Kernighan and Dennis Ritchie. This book became the de facto standard for learning C programming.

3. **1983**: The American National Standards Institute (ANSI) established a committee to develop a standardized version of the C language, known as ANSI C. This effort was led by Brian Kernighan and included contributions from many others in the C community.

4. **1989**: The ANSI C standard was completed and published. This version of C, sometimes referred to as C89 or C90, introduced several new features and clarified ambiguities present in earlier versions.

5. **1990s**: The popularity of C continued to grow, especially with the rise of Unix and the development of systems programming. C became the language of choice for operating systems, compilers, and other low-level software.

6. **1999**: The ISO (International Organization for Standardization) adopted the ANSI C standard, making it an international standard known as ISO/IEC 9899:1999.

7. **2011**: The ISO C committee released a new version of the C standard, known as C11, which introduced several new features, including improved support for multithreading, better Unicode support, and additional library functions.

8. **2017**: The ISO C committee released another update to the C standard, known as C17, which mostly made corrections and clarifications to the C11 standard.

Throughout its history, C has remained a popular and influential programming language due to its simplicity, efficiency, and flexibility. It has been used to develop countless software applications, operating systems, libraries, and more. Additionally, many modern programming languages, such as C++, Java, and Python, have been influenced by C's syntax and design principles.


## Structures

Sure! Here's a simple example of a basic `main` function in C:

```c
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

In this example:

- The `#include <stdio.h>` directive tells the compiler to include the standard input/output library, which provides functions like `printf` for printing output to the console.
- The `int main()` function is the entry point of the C program. It's where the execution of the program begins. It returns an integer value to the operating system indicating the success or failure of the program. By convention, returning `0` indicates successful execution, while a non-zero value indicates an error.
- Inside the `main` function, we use the `printf` function to print the string `"Hello, world!\n"` to the console. The `\n` is the newline character, which moves the cursor to the next line after printing "Hello, world!".
- Finally, the `return 0;` statement indicates that the program has executed successfully and returns `0` to the operating system.

In C programming language, a structure is a user-defined data type that allows you to group together different types of variables under a single name. It's useful for organizing related data into a meaningful unit. Here's an example of how you can define and use structures in C:

```c
#include <stdio.h>

// Define a structure called 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare variables of type 'struct Person'
    struct Person person1;
    struct Person person2;

    // Assign values to the members of 'person1'
    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 6.0;

    // Assign values to the members of 'person2'
    strcpy(person2.name, "Alice");
    person2.age = 25;
    person2.height = 5.5;

    // Print the details of 'person1'
    printf("Person 1:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    // Print the details of 'person2'
    printf("\nPerson 2:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.1f\n", person2.height);

    return 0;
}
```

In this example:

- We define a structure called `Person` using the `struct` keyword, which contains three members: `name`, `age`, and `height`.
- Inside the `main` function, we declare two variables of type `struct Person` named `person1` and `person2`.
- We assign values to the members of each structure variable using the dot (`.`) operator.
- Finally, we print out the details of each person using `printf`.

Structures can be very useful for representing complex data in a structured manner, and they are commonly used in C programs for tasks such as handling data records, defining data structures, and passing data between functions.

### Global structures

In C, a global structure is simply a structure that is defined outside of any function, usually at the beginning of the source file, making it accessible to all functions within that file. Global structures have the same syntax and usage as local structures (structures defined within a function), but they have a wider scope of visibility.

Here's an example of a global structure in C:

```c
#include <stdio.h>

// Define a global structure called 'Point'
struct Point {
    int x;
    int y;
};

// Declare a global variable of type 'struct Point'
struct Point globalPoint;

// Function to initialize the globalPoint variable
void initializePoint() {
    globalPoint.x = 10;
    globalPoint.y = 20;
}

int main() {
    // Call the initializePoint function to set the values of globalPoint
    initializePoint();

    // Access and print the values of globalPoint
    printf("Global Point:\n");
    printf("x = %d\n", globalPoint.x);
    printf("y = %d\n", globalPoint.y);

    return 0;
}
```

In this example:

- We define a structure called `Point` at the global scope.
- We declare a global variable `globalPoint` of type `struct Point`.
- We define a function `initializePoint` that initializes the values of `globalPoint`.
- Inside the `main` function, we call `initializePoint` to set the values of `globalPoint`, and then we print out its values.

Global structures can be useful when you need to share data between multiple functions within a file. However, it's important to use them judiciously, as making variables global can lead to potential issues such as namespace pollution and difficulties in debugging and maintenance.

## Preprocessing

In C programming, the preprocessor is a tool that processes your source code before it is compiled into object code by the compiler. It performs text substitution and file inclusion and allows conditional compilation. The preprocessor directives are commands that start with a hash symbol `#`. Here's an overview of some common preprocessor directives and their functionalities:

1. **Include Directive (`#include`)**: The `#include` directive is used to include the contents of another file in your program. It is commonly used to include header files that contain declarations of functions, constants, and other preprocessor directives.

   ```c
   #include <stdio.h>
   ```

2. **Macro Definition (`#define`)**: The `#define` directive is used to define macros, which are symbolic names representing a piece of code. Macros are typically used for constants or for defining small code snippets that need to be reused.

   ```c
   #define PI 3.14159
   ```

3. **Conditional Compilation (`#if`, `#ifdef`, `#ifndef`, `#else`, `#elif`, `#endif`)**: These directives are used to conditionally compile parts of the code based on certain conditions. This is often used to include or exclude code based on platform-specific features or compile-time constants.

   ```c
   #ifdef DEBUG
   printf("Debug mode enabled.\n");
   #endif
   ```

4. **Line Control (`#line`)**: The `#line` directive allows you to control the line numbering and file name reported by the compiler for error messages and debugging purposes.

   ```c
   #line 10 "myfile.c"
   ```

5. **Error Directive (`#error`)**: The `#error` directive is used to generate a compilation error with a custom error message. This can be useful for enforcing certain conditions or constraints during compilation.

   ```c
   #ifndef SUPPORTED_PLATFORM
   #error "Unsupported platform."
   #endif
   ```

6. **Pragma Directive (`#pragma`)**: The `#pragma` directive provides additional instructions to the compiler. While not strictly a preprocessor directive, it is often used alongside preprocessor directives for compiler-specific instructions or optimizations.

   ```c
   #pragma pack(1)
   ```

These are some of the most commonly used preprocessor directives in C. They provide powerful capabilities for controlling the compilation process and enabling platform-independent code.

### Definitions of Constants and Macros

In C programming, constants and macros are both used to represent fixed values or expressions that remain constant throughout the program. However, they are implemented differently and have different characteristics.

1. **Constants**:
   - Constants in C are defined using the `const` keyword. They are variables whose values cannot be changed once they are initialized.
   - Constants can be of any data type, including basic data types (integers, floats, characters, etc.) and user-defined data types (structures, arrays, etc.).
   - Constants are stored in memory like variables, and their values are determined at compile time.
   - Constants provide type safety and can be used in expressions just like variables.

   ```c
   const int MAX_VALUE = 100;
   const float PI = 3.14159;
   const char NEWLINE = '\n';
   ```

2. **Macros**:
   - Macros in C are defined using the `#define` preprocessor directive. They are symbolic names that are replaced with their corresponding values during preprocessing.
   - Macros are not typed; they are simple text substitutions. They are not variables but rather textual replacements that occur before compilation.
   - Macros are typically used for defining constants, small code snippets, or shorthand notation. They can also accept arguments, making them more versatile than constants.
   - Macros are often not type-safe and may lead to unexpected behavior if used incorrectly.

   ```c
   #define MAX_VALUE 100
   #define PI 3.14159
   #define NEWLINE '\n'
   ```

   Macro with arguments:

   ```c
   #define SQUARE(x) ((x) * (x))
   ```

In summary, constants are variables with fixed values that cannot be changed once initialized, whereas macros are symbolic names that are replaced with their corresponding values during preprocessing. Constants provide type safety and are stored in memory like variables, while macros are simple text substitutions and are not typed. Both constants and macros are widely used in C programming for representing fixed values, but macros offer more flexibility and can be more powerful due to their ability to accept arguments and perform text substitution. However, macros should be used judiciously as they can sometimes lead to code readability and maintainability issues.

### Text inputs

To input text in C, you can use the `scanf()` function from the `stdio.h` header file. Here's a simple example:

```c
#include <stdio.h>

int main() {
    char name[50]; // Assuming the name will not exceed 50 characters

    printf("Enter your name: ");
    scanf("%49s", name); // Reading input into the 'name' variable

    printf("Hello, %s!\n", name);

    return 0;
}
```

In this example:

- We include the `stdio.h` header file for input/output operations.
- We declare a character array `name` to store the input text. We assume that the name will not exceed 49 characters (leaving space for the null terminator).
- We use `printf()` to prompt the user to enter their name.
- We use `scanf()` to read the input text from the user and store it in the `name` array. The `%49s` format specifier is used to specify that we want to read up to 49 characters into the `name` array, leaving space for the null terminator.
- Finally, we use `printf()` to print a greeting message with the entered name.

Note: When using `scanf()` to read input into a character array, be cautious about buffer overflow. Always specify the maximum number of characters to read to prevent potential buffer overflow vulnerabilities.

### Conditional translations

Conditional translation in C refers to the ability to include or exclude portions of code from the compilation process based on certain conditions. This is typically done using preprocessor directives such as `#if`, `#ifdef`, `#ifndef`, `#else`, `#elif`, and `#endif`.

Conditional translation is useful for creating platform-specific code, enabling or disabling certain features, and handling different build configurations. Here's a brief overview of how it works:

1. **`#if`, `#else`, `#endif`**:
   - These directives allow you to conditionally compile portions of code based on boolean expressions.
   - If the expression following `#if` evaluates to true (non-zero), the code between `#if` and `#endif` is included in the compilation process.
   - If the expression following `#if` evaluates to false (zero), the code between `#else` and `#endif` (if present) is included instead.
   - `#endif` marks the end of the conditional block.

   ```c
   #if defined(DEBUG)
       printf("Debug mode enabled.\n");
   #else
       printf("Debug mode disabled.\n");
   #endif
   ```

2. **`#ifdef`, `#ifndef`**:
   - `#ifdef` checks if a macro is defined.
   - `#ifndef` checks if a macro is not defined.
   - These directives are commonly used for conditional compilation based on the existence of macros.

   ```c
   #ifndef SUPPORTED_PLATFORM
   #error "Unsupported platform."
   #endif
   ```

3. **`#elif`**:
   - `#elif` allows you to specify an alternative condition to check if the preceding `#if` or `#elif` condition is false.
   - It stands for "else if."

   ```c
   #if defined(PLATFORM_LINUX)
       // Linux-specific code
   #elif defined(PLATFORM_WINDOWS)
       // Windows-specific code
   #else
       // Default code for other platforms
   #endif
   ```

Conditional translation allows you to write code that adapts to different environments, configurations, or requirements without needing to modify the source code manually. It's commonly used in large projects to manage platform-specific code, feature toggles, and debugging options.

### Variables

In C programming, variables are named storage locations that hold data, and they are fundamental to writing programs. Here are some key points about variables in C:

1. **Declaration**: Before you can use a variable in C, you need to declare it. This involves specifying the variable's name and its data type.

    ```c
    int age; // Declaration of an integer variable named 'age'
    float weight; // Declaration of a floating-point variable named 'weight'
    char grade; // Declaration of a character variable named 'grade'
    ```

2. **Initialization**: You can optionally initialize a variable at the time of declaration, which means assigning it an initial value.

    ```c
    int count = 0; // Initialization of 'count' with the value 0
    float pi = 3.14; // Initialization of 'pi' with the value 3.14
    char letter = 'A'; // Initialization of 'letter' with the character 'A'
    ```

3. **Assignment**: After declaring and optionally initializing a variable, you can assign new values to it using the assignment operator (`=`).

    ```c
    age = 25; // Assigning the value 25 to the 'age' variable
    weight = 65.5; // Assigning the value 65.5 to the 'weight' variable
    grade = 'B'; // Assigning the character 'B' to the 'grade' variable
    ```

4. **Data Types**: Variables in C must have a specific data type, which determines the type of data they can hold and the operations that can be performed on them. Common data types include `int`, `float`, `char`, `double`, and `void`.

5. **Scope**: Variables in C have scope, which defines where in the program they can be accessed. Variables can have local scope (visible only within the block of code where they are declared) or global scope (visible throughout the entire program).

6. **Memory Allocation**: When a variable is declared, memory is allocated to store its value. The amount of memory allocated depends on the data type of the variable.

7. **Naming Rules**: Variable names in C must adhere to certain rules, such as starting with a letter or underscore, consisting of letters, digits, or underscores, and not being a keyword or reserved word.

Here's an example that demonstrates the declaration, initialization, and assignment of variables in C:

```c
#include <stdio.h>

int main() {
    // Declaration and initialization of variables
    int age = 25;
    float weight = 65.5;
    char grade = 'B';

    // Printing the values of variables
    printf("Age: %d\n", age);
    printf("Weight: %.1f\n", weight);
    printf("Grade: %c\n", grade);

    // Assignment of new values to variables
    age = 30;
    weight = 70.2;
    grade = 'A';

    // Printing the updated values of variables
    printf("Updated Age: %d\n", age);
    printf("Updated Weight: %.1f\n", weight);
    printf("Updated Grade: %c\n", grade);

    return 0;
}
```

Output:
```
Age: 25
Weight: 65.5
Grade: B
Updated Age: 30
Updated Weight: 70.2
Updated Grade: A
```

Variables are essential building blocks in C programming, allowing you to store and manipulate data effectively within your programs.

### Variable identificators

In C programming, an identifier is a name used to identify a variable, function, or any other user-defined entity. Identifiers in C must follow certain rules and conventions. Here are the key rules for naming identifiers in C:

1. **Character Set**: Identifiers can consist of letters (both uppercase and lowercase), digits, and underscores (`_`). However, they must begin with a letter (uppercase or lowercase) or an underscore.

2. **Length**: Identifiers can be of any length, but only the first 31 characters are significant. Most compilers consider only the first 31 characters of an identifier.

3. **Keywords**: Identifiers cannot be the same as C keywords. Keywords are reserved words that have special meanings in C and cannot be used as identifiers.

4. **Case Sensitivity**: C is case-sensitive, meaning that uppercase and lowercase letters are considered different. Therefore, `age`, `Age`, and `AGE` are three distinct identifiers.

5. **Naming Convention**: While there's no strict rule, it's common practice to use meaningful names for identifiers to make the code more readable. Variable names, for example, should reflect their purpose or the data they hold.

Here are some examples of valid and invalid identifiers:

- Valid Identifiers:
  ```c
  int age;
  float weight_1;
  char first_name;
  int _count;
  int number123;
  ```
- Invalid Identifiers:
  ```c
  int 123number; // Begins with a digit
  float my-weight; // Contains a hyphen
  char break; // Uses a reserved keyword
  double my long variable; // Contains spaces
  ```

While C allows a wide range of characters in identifiers, it's good practice to use only letters, digits, and underscores to avoid confusion and ensure portability across different systems and compilers. Additionally, choosing descriptive and meaningful names for identifiers can greatly improve the readability and maintainability of your code.

### Declaration of Variables

In C, variable declaration involves specifying the data type and name of the variable. Here are some examples of variable declarations in C:

1. **Integer Variable Declaration**:
   ```c
   int age; // Declares an integer variable named 'age'
   ```

2. **Floating-Point Variable Declaration**:
   ```c
   float height; // Declares a floating-point variable named 'height'
   ```

3. **Character Variable Declaration**:
   ```c
   char grade; // Declares a character variable named 'grade'
   ```

4. **Array Declaration**:
   ```c
   int numbers[5]; // Declares an integer array named 'numbers' with 5 elements
   ```

5. **Multi-dimensional Array Declaration**:
   ```c
   float matrix[3][3]; // Declares a 3x3 floating-point matrix named 'matrix'
   ```

6. **Pointer Declaration**:
   ```c
   int *ptr; // Declares an integer pointer named 'ptr'
   ```

7. **Struct Declaration**:
   ```c
   struct Person {
       char name[50];
       int age;
   };
   struct Person person1; // Declares a variable 'person1' of type 'struct Person'
   ```

8. **Enumeration Declaration**:
   ```c
   enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
   enum Day today; // Declares a variable 'today' of type 'enum Day'
   ```

9. **Typedef Declaration**:
   ```c
   typedef int marks; // Defines 'marks' as an alias for 'int'
   marks physics; // Declares an integer variable 'physics' using the typedef alias
   ```

These examples demonstrate the basic syntax for declaring variables in C. In each case, the data type (e.g., `int`, `float`, `char`, `struct`) is followed by the variable name. Optionally, you can provide an initial value for the variable at the time of declaration.

### Type of Variables

In C, variable declaration involves specifying the data type and name of the variable. Here are some examples of variable declarations in C:

1. **Integer Variable Declaration**:
   ```c
   int age; // Declares an integer variable named 'age'
   ```

2. **Floating-Point Variable Declaration**:
   ```c
   float height; // Declares a floating-point variable named 'height'
   ```

3. **Character Variable Declaration**:
   ```c
   char grade; // Declares a character variable named 'grade'
   ```

4. **Array Declaration**:
   ```c
   int numbers[5]; // Declares an integer array named 'numbers' with 5 elements
   ```

5. **Multi-dimensional Array Declaration**:
   ```c
   float matrix[3][3]; // Declares a 3x3 floating-point matrix named 'matrix'
   ```

6. **Pointer Declaration**:
   ```c
   int *ptr; // Declares an integer pointer named 'ptr'
   ```

7. **Struct Declaration**:
   ```c
   struct Person {
       char name[50];
       int age;
   };
   struct Person person1; // Declares a variable 'person1' of type 'struct Person'
   ```

8. **Enumeration Declaration**:
   ```c
   enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
   enum Day today; // Declares a variable 'today' of type 'enum Day'
   ```

9. **Typedef Declaration**:
   ```c
   typedef int marks; // Defines 'marks' as an alias for 'int'
   marks physics; // Declares an integer variable 'physics' using the typedef alias
   ```

These examples demonstrate the basic syntax for declaring variables in C. In each case, the data type (e.g., `int`, `float`, `char`, `struct`) is followed by the variable name. Optionally, you can provide an initial value for the variable at the time of declaration.

##  Lexical elements or tokens

These are the smallest units of meaning in the language, identified by the lexical analyzer (also known as the lexer or scanner) during the process of lexical analysis.

Here are some common lexical elements or tokens in C:

1. **Keywords**: Reserved words with special meanings in the C language. Examples include `int`, `float`, `if`, `else`, `while`, `for`, etc.

2. **Identifiers**: Names used to identify variables, functions, and other user-defined entities in the program. Identifiers must follow certain naming rules and conventions.

3. **Constants**: Literal values that do not change during program execution. Constants can be of various types, such as integer constants, floating-point constants, character constants, and string constants.

4. **Operators**: Symbols used to perform operations on operands. Examples include arithmetic operators (`+`, `-`, `*`, `/`), relational operators (`<`, `>`, `==`, `!=`), logical operators (`&&`, `||`, `!`), etc.

5. **Punctuators**: Symbols used to punctuate the structure of C programs. Examples include semicolons (`;`), commas (`,`), parentheses (`()`), braces (`{}`), square brackets (`[]`), etc.

6. **Whitespace**: Spaces, tabs, and newline characters that separate tokens and improve readability. Whitespace is generally ignored by the compiler.

7. **Comments**: Text ignored by the compiler, used for documentation or to temporarily disable code. Comments in C can be single-line (`//`) or multi-line (`/* */`).

Here's an example illustrating various lexical elements in C:

```c
#include <stdio.h>

int main() {
    int x = 10; // Keyword: int, Identifier: main, Constants: 10
    float y = 3.14; // Keywords: float, Identifier: x, Constants: 3.14
    char ch = 'A'; // Keywords: char, Identifier: y, Constants: 'A'
    
    // Keyword: return, Punctuator: ;
    return 0;
}
```

In this example, keywords like `int`, `float`, `char`, `return`, identifiers like `main`, `x`, `y`, `ch`, constants like `10`, `3.14`, `'A'`, operators like `=`, and punctuators like `;` are all lexical elements or tokens recognized by the C compiler during lexical analysis.

