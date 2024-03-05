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

### Operand priorities
### Vyrazy

## Control Structures
Control Structures are used to control the flow of execution in a program. They determine the order in which statements are executed based on conditions or loops.

Here are the main types of control structures in C:

1. **Selection Statements**:
   - **if Statement**: Executes a block of code if a specified condition is true.
   - **if-else Statement**: Executes one block of code if a condition is true and another block of code if the condition is false.
   - **nested if Statement**: Using if statement inside another if statement.

2. **Iteration Statements (Loops)**:
   - **for Loop**: Executes a block of code repeatedly until a specified condition is false.
   - **while Loop**: Executes a block of code repeatedly as long as a specified condition is true.
   - **do-while Loop**: Executes a block of code repeatedly until a specified condition is false, with the condition checked after each iteration.

3. **Jump Statements**:
   - **break Statement**: Terminates the loop or switch statement and transfers control to the statement immediately following the loop or switch.
   - **continue Statement**: Skips the current iteration of a loop and continues with the next iteration.
   - **return Statement**: Terminates the execution of a function and returns a value to the caller.

Control structures are essential for writing programs that can make decisions and perform repetitive tasks efficiently. They provide the means to create dynamic and flexible programs by controlling the flow of execution based on various conditions and criteria.

1. **if Statement**:
```c
#include <stdio.h>

int main() {
    int num = 10;

    if (num > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}
```

2. **if-else Statement**:
```c
#include <stdio.h>

int main() {
    int num = -5;

    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is non-positive.\n");
    }

    return 0;
}
```

3. **nested if Statement**:
```c
#include <stdio.h>

int main() {
    int num = 0;

    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
```

4. **for Loop**:
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }

    return 0;
}
```

5. **while Loop**:
```c
#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {
        printf("Iteration %d\n", i);
        i++;
    }

    return 0;
}
```

6. **do-while Loop**:
```c
#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("Iteration %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}
```

These examples demonstrate the basic usage of control structures in C for making decisions (if-else), repeating actions (loops), and controlling program flow based on conditions.

## Input and Output
In C programming, input and output operations (often abbreviated as I/O) are essential for interacting with users, reading data from external sources, and displaying results. Input operations allow the program to receive data, while output operations enable the program to produce output.

Here's a brief explanation of input and output operations in C:

1. **Input Operations**:
   - **scanf()**: The `scanf()` function is used to read input from the standard input stream (usually the keyboard) according to a specified format. It can read input of different data types (integers, floats, characters, etc.) and store them in variables.
   - **gets()**: The `gets()` function reads a line of text from the standard input stream and stores it in a character array. However, it's not recommended due to potential buffer overflow issues. Consider using `fgets()` instead.
   - **getchar()**: The `getchar()` function reads a single character from the standard input stream and returns it as an integer.
   - **fgets()**: The `fgets()` function reads a line of text from the specified input stream (usually the standard input) and stores it in a character array.

2. **Output Operations**:
   - **printf()**: The `printf()` function is used to format and print output to the standard output stream (usually the console). It allows you to specify the format of the output using format specifiers and can print values of various data types.
   - **puts()**: The `puts()` function is used to output a string to the standard output stream followed by a newline character. It automatically appends a newline character at the end of the string.
   - **putchar()**: The `putchar()` function is used to output a single character to the standard output stream.

In addition to standard input and output operations, C also supports file input/output operations, which allow reading from and writing to files on the disk. This is done using functions such as `fopen()`, `fclose()`, `fscanf()`, `fprintf()`, `fgets()`, `fputs()`, etc.

Understanding input and output operations is crucial for building interactive and functional C programs, as they allow programs to communicate with users and external devices.

1. **Output using printf()**:
```c
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

2. **Input using scanf()**:
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
```

3. **Output using puts()**:
```c
#include <stdio.h>

int main() {
    puts("Hello, world!");
    return 0;
}
```

4. **Input using gets()** (Note: gets() is not recommended due to potential buffer overflow issues):
```c
#include <stdio.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: %s\n", str);
    return 0;
}
```

5. **Output using putchar()**:
```c
#include <stdio.h>

int main() {
    char ch = 'A';
    putchar(ch);
    putchar('\n');
    return 0;
}
```

6. **Input using getchar()**:
```c
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: %c\n", ch);
    return 0;
}
```

These examples demonstrate various ways of performing input and output operations in C, including using printf(), scanf(), puts(), gets(), putchar(), and getchar(). Depending on the specific requirements of your program, you can choose the appropriate function for inputting or outputting data.

## Strings
In C programming, a string is a sequence of characters stored in an array and terminated by a null character (`'\0'`). Strings are used to represent text in C programs and are a fundamental part of many applications. Here are some key points about strings in C:

1. **Character Array**: In C, strings are typically represented as arrays of characters, where each element of the array holds a single character of the string. The last character of the array is always a null character (`'\0'`), which marks the end of the string.

2. **Null-Terminated**: Strings in C are null-terminated, meaning that the null character (`'\0'`) is used to indicate the end of the string. This allows C functions to determine the length of a string by searching for the null character.

3. **String Literals**: String literals are sequences of characters enclosed in double quotation marks (`"`). They automatically include the null character at the end. For example, `"Hello"` is a string literal representing the string "Hello".

4. **String Functions**: C provides several standard library functions for working with strings, such as `strlen()` (to get the length of a string), `strcpy()` (to copy one string to another), `strcat()` (to concatenate two strings), `strcmp()` (to compare two strings), etc.

5. **Character Manipulation**: Strings in C can be manipulated character by character using array indexing and various string manipulation functions. Individual characters in a string can be accessed and modified using array notation.

6. **Character Encoding**: In C, characters in strings are typically encoded using ASCII (American Standard Code for Information Interchange) or a compatible encoding. Each character is represented by a unique numerical value.

Here's an example demonstrating the declaration, initialization, and manipulation of strings in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "Hello, world!"; // Declaration and initialization of a string
    printf("Original greeting: %s\n", greeting);

    // Manipulating the string
    greeting[7] = 'W'; // Changing 'w' to 'W'
    printf("Modified greeting: %s\n", greeting);

    // Using string manipulation functions
    char name[20];
    strcpy(name, "John"); // Copying a string
    strcat(name, " Smith"); // Concatenating two strings
    printf("Full name: %s\n", name);

    // Getting the length of a string
    printf("Length of greeting: %zu\n", strlen(greeting));

    return 0;
}
```

Output:
```
Original greeting: Hello, world!
Modified greeting: Hello, World!
Full name: John Smith
Length of greeting: 13
```

Understanding strings in C is essential for working with text-based data and building applications that involve processing and manipulating strings.

Here are some more examples demonstrating different aspects of working with strings in C:

1. **Reading and Printing Strings**:
```c
#include <stdio.h>

int main() {
    char name[20];
    
    // Reading a string
    printf("Enter your name: ");
    scanf("%19s", name); // Read up to 19 characters to leave space for the null terminator
    
    // Printing a string
    printf("Hello, %s!\n", name);
    
    return 0;
}
```

2. **Comparing Strings**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";

    // Comparing strings
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
```

3. **Copying Strings**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char destination[20];

    // Copying a string
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    return 0;
}
```

4. **Concatenating Strings**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = ", world!";

    // Concatenating strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
```

5. **Finding Substrings**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a test string";
    char *ptr;

    // Finding a substring
    ptr = strstr(str, "test");
    if (ptr != NULL) {
        printf("Substring found at index %ld\n", ptr - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
```

These examples illustrate various operations you can perform with strings in C, including reading and printing strings, comparing strings, copying strings, concatenating strings, and finding substrings. Understanding these operations will help you work effectively with text data in your C programs.

## Files
Working with files in C involves performing operations such as opening, reading from, writing to, and closing files. C provides standard library functions and data types for file handling, allowing you to manipulate files stored on the disk. Here's an overview of how to work with files in C:

1. **Include Header File**: Include the `<stdio.h>` header file, which provides functions for file handling.

   ```c
   #include <stdio.h>
   ```

2. **File Pointer**: Declare a file pointer variable to hold a reference to the file being manipulated. You'll use this pointer to perform file operations.

   ```c
   FILE *file_ptr;
   ```

3. **Opening Files**: Use the `fopen()` function to open a file. This function takes two arguments: the filename (or path) of the file to open and the mode indicating the type of access (read, write, append, etc.).

   ```c
   file_ptr = fopen("example.txt", "r"); // Opens the file "example.txt" for reading
   ```

4. **Checking for Errors**: Always check if the file was opened successfully before performing any operations on it.

   ```c
   if (file_ptr == NULL) {
       printf("Error opening file.\n");
       return 1; // or handle the error appropriately
   }
   ```

5. **Reading from Files**: Use functions like `fscanf()` or `fgets()` to read data from the file.

   ```c
   char buffer[100];
   fscanf(file_ptr, "%s", buffer); // Reads a string from the file
   ```

6. **Writing to Files**: Use functions like `fprintf()` or `fputs()` to write data to the file.

   ```c
   fprintf(file_ptr, "This is a line of text.\n"); // Writes a string to the file
   ```

7. **Closing Files**: Always close the file when you're done with it using the `fclose()` function.

   ```c
   fclose(file_ptr);
   ```

8. **Error Handling**: Handle errors appropriately when performing file operations. For example, check the return values of functions for errors and handle them accordingly.

   ```c
   if (fscanf(file_ptr, "%s", buffer) != 1) {
       printf("Error reading from file.\n");
       return 1; // or handle the error appropriately
   }
   ```

9. **Working with Binary Files**: For binary files, use functions like `fread()` and `fwrite()` to read and write binary data.

   ```c
   // Reading binary data
   fread(buffer, sizeof(char), 100, file_ptr);
   
   // Writing binary data
   fwrite(buffer, sizeof(char), 100, file_ptr);
   ```

10. **Working with Text Files**: For text files, use functions like `fgets()` and `fputs()` to read and write text data.

   ```c
   // Reading text data
   fgets(buffer, 100, file_ptr);
   
   // Writing text data
   fputs("This is a line of text.", file_ptr);
   ```

These are the basic steps involved in working with files in C. By using these functions and following these steps, you can perform a wide range of file operations in your C programs.

Certainly! Here are more examples demonstrating various file operations in C:

1. **Reading from a Text File**:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char buffer[100];

    file_ptr = fopen("example.txt", "r");
    if (file_ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(file_ptr);
    return 0;
}
```

2. **Writing to a Text File**:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;

    file_ptr = fopen("output.txt", "w");
    if (file_ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file_ptr, "This is line 1.\n");
    fprintf(file_ptr, "This is line 2.\n");

    fclose(file_ptr);
    return 0;
}
```

3. **Appending to a Text File**:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;

    file_ptr = fopen("output.txt", "a");
    if (file_ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file_ptr, "This is line 3.\n");

    fclose(file_ptr);
    return 0;
}
```

4. **Reading and Writing Binary Data**:
```c
#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    FILE *file_ptr;
    struct Employee emp;

    // Writing binary data
    file_ptr = fopen("employees.bin", "wb");
    if (file_ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    strcpy(emp.name, "John");
    emp.age = 30;
    emp.salary = 50000.0;

    fwrite(&emp, sizeof(emp), 1, file_ptr);

    fclose(file_ptr);

    // Reading binary data
    file_ptr = fopen("employees.bin", "rb");
    if (file_ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(&emp, sizeof(emp), 1, file_ptr);
    printf("Name: %s, Age: %d, Salary: %.2f\n", emp.name, emp.age, emp.salary);

    fclose(file_ptr);
    return 0;
}
```

These examples demonstrate reading from and writing to text files, appending to text files, and reading and writing binary data to binary files. Working with files in C allows you to manipulate data stored on the disk, making it a powerful tool for file input/output operations in your programs.

## Pointers
Pointers are one of the most powerful and fundamental concepts in the C programming language. They provide a way to directly manipulate memory addresses, enabling efficient memory management and allowing for more flexible and efficient programming techniques. Here's an explanation of pointers in C:

1. **Definition**: A pointer is a variable that stores the memory address of another variable. In other words, it "points to" the location in memory where data is stored.

2. **Declaration**: To declare a pointer variable, you use the `*` (asterisk) symbol before the variable name. For example:
   ```c
   int *ptr;
   ```
   This declares a pointer variable named `ptr` that can point to an integer value.

3. **Initialization**: Pointers can be initialized with the address of another variable using the address-of operator `&`. For example:
   ```c
   int num = 10;
   int *ptr = &num;
   ```
   This initializes the pointer `ptr` with the address of the variable `num`.

4. **Dereferencing**: Dereferencing a pointer means accessing the value stored at the memory address it points to. You use the `*` operator to dereference a pointer. For example:
   ```c
   int num = 10;
   int *ptr = &num;
   printf("Value of num: %d\n", *ptr); // Output: Value of num: 10
   ```
   Here, `*ptr` accesses the value stored at the memory address pointed to by `ptr`.

5. **Pointer Arithmetic**: Pointers support arithmetic operations such as addition and subtraction. When you perform arithmetic operations on pointers, the result is adjusted based on the size of the data type being pointed to. For example:
   ```c
   int arr[5] = {10, 20, 30, 40, 50};
   int *ptr = arr;
   printf("Third element of the array: %d\n", *(ptr + 2)); // Output: Third element of the array: 30
   ```
   Here, `ptr + 2` points to the third element of the array `arr`, and `*(ptr + 2)` dereferences the pointer to access the value.

6. **Null Pointers**: A null pointer is a special value indicating that the pointer does not point to any valid memory address. You can assign `NULL` (or `0`) to a pointer variable to make it a null pointer.

7. **Pointer and Arrays**: Pointers and arrays are closely related in C. In fact, arrays are accessed using pointers. An array name is a constant pointer to the first element of the array.

8. **Dynamic Memory Allocation**: Pointers are commonly used for dynamic memory allocation using functions like `malloc()`, `calloc()`, and `realloc()` to allocate memory at runtime.

Understanding pointers is essential for mastering C programming, as they enable you to work directly with memory and create more efficient and flexible code. However, they also introduce complexities and potential pitfalls, such as segmentation faults and memory leaks, so it's important to use them carefully and understand their behavior thoroughly.

Complex example demonstrating various pointer concepts in C:

```c
#include <stdio.h>

int main() {
    // Declare and initialize variables
    int num = 10;
    int *ptr = &num;
    int arr[5] = {1, 2, 3, 4, 5};
    int *arr_ptr = arr;

    // Dereferencing pointers
    printf("Value of num: %d\n", *ptr); // Output: Value of num: 10

    // Pointer arithmetic
    printf("Third element of the array: %d\n", *(arr_ptr + 2)); // Output: Third element of the array: 3

    // Incrementing pointers
    printf("First element of the array: %d\n", *arr_ptr); // Output: First element of the array: 1
    arr_ptr++; // Increment pointer
    printf("Second element of the array: %d\n", *arr_ptr); // Output: Second element of the array: 2

    // Array name as a pointer
    printf("First element of the array using array name: %d\n", *arr); // Output: First element of the array using array name: 1

    // Null pointer
    int *null_ptr = NULL;
    if (null_ptr == NULL) {
        printf("Null pointer\n");
    }

    // Dynamic memory allocation
    int *dyn_arr = (int *)malloc(5 * sizeof(int));
    if (dyn_arr != NULL) {
        for (int i = 0; i < 5; i++) {
            dyn_arr[i] = i + 1;
        }
        printf("Dynamic array: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", dyn_arr[i]);
        }
        printf("\n");
        free(dyn_arr); // Free dynamically allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
```

This example covers various aspects of pointers in C, including:

- Initializing and dereferencing pointers.
- Performing pointer arithmetic to access elements of an array.
- Incrementing pointers to navigate through an array.
- Using the array name as a pointer.
- Using a null pointer.
- Dynamic memory allocation using `malloc()` and `free()` functions.

Understanding and mastering these concepts will greatly enhance your ability to work with pointers in C programming.

## Data structures
In C programming, data structures are used to organize and store data efficiently in memory. Data structures provide a way to represent complex data in a more organized and manageable manner. They enable efficient manipulation and retrieval of data, making them essential for building scalable and efficient software systems. Here's an explanation of data structures in C:

1. **Definition**: A data structure is a collection of data elements organized in a specific way to perform operations on the data efficiently. Each data structure has its own set of operations and rules for accessing and modifying the data.

2. **Types of Data Structures**: There are many types of data structures in C, each designed for specific purposes. Some common data structures include:
   - **Arrays**: A collection of elements of the same data type stored in contiguous memory locations.
   - **Linked Lists**: A collection of nodes where each node contains a data element and a reference (pointer) to the next node in the sequence.
   - **Stacks**: A Last-In-First-Out (LIFO) data structure that supports two main operations: push (to add an element) and pop (to remove an element).
   - **Queues**: A First-In-First-Out (FIFO) data structure that supports two main operations: enqueue (to add an element) and dequeue (to remove an element).
   - **Trees**: A hierarchical data structure consisting of nodes where each node has a value and a reference (pointer) to its child nodes.
   - **Graphs**: A collection of nodes (vertices) connected by edges, where each edge may have a weight or other properties.
   - **Hash Tables**: A data structure that stores key-value pairs and supports fast retrieval of values based on their keys.

3. **Implementation**: Data structures can be implemented using C language constructs such as arrays, pointers, structures, and dynamic memory allocation. For example, linked lists can be implemented using pointers to connect nodes, while trees can be implemented using structures to represent nodes and pointers to connect them.

4. **Operations**: Each data structure supports various operations for manipulating the data it holds. These operations may include insertion, deletion, searching, traversal, sorting, and more. The efficiency of these operations depends on the specific data structure used and the algorithms employed.

5. **Applications**: Data structures are used in various applications and domains, including algorithms, databases, operating systems, compilers, networking, artificial intelligence, and more. They provide a foundation for solving complex problems efficiently and are essential for building robust and scalable software systems.

Understanding data structures and their properties is crucial for writing efficient and scalable C programs. By choosing the appropriate data structure for a given problem and implementing it effectively, you can optimize the performance and maintainability of your code.

Here's an example of implementing a simple linked list data structure in C:

```c
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node *insertAtBeginning(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to print the linked list
void printLinkedList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty linked list
    struct Node *head = NULL;

    // Insert elements into the linked list
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    // Print the linked list
    printf("Linked List: ");
    printLinkedList(head);

    return 0;
}
```

In this example, we define a `struct Node` to represent a node in the linked list. Each node contains an integer `data` field and a pointer `next` field pointing to the next node in the list. We implement functions to create a new node (`createNode()`), insert a node at the beginning of the list (`insertAtBeginning()`), and print the linked list (`printLinkedList()`). Finally, we demonstrate the usage of these functions in the `main()` function by creating a linked list and printing its elements.

## Sorting
Sorting is the process of arranging elements in a specific order, such as ascending or descending, based on some criteria. In C language, sorting is a common operation performed on arrays or other data structures to organize the data in a more structured manner. Here's an explanation of sorting in C:

1. **Types of Sorting Algorithms**: There are many sorting algorithms, each with its own advantages and disadvantages in terms of time complexity, space complexity, stability, and adaptability to different types of data. Some common sorting algorithms include:
   - **Bubble Sort**: Compares adjacent elements and swaps them if they are in the wrong order.
   - **Selection Sort**: Finds the minimum element in the unsorted portion and swaps it with the first unsorted element.
   - **Insertion Sort**: Builds the sorted array one element at a time by inserting each element into its correct position.
   - **Merge Sort**: Divides the array into two halves, recursively sorts each half, and then merges the sorted halves.
   - **Quick Sort**: Picks a pivot element and partitions the array into two subarrays such that elements less than the pivot are on the left and elements greater than the pivot are on the right.
   - **Heap Sort**: Builds a binary heap from the array and repeatedly extracts the maximum element from the heap.

2. **Implementation**: Sorting algorithms can be implemented in C using loops, conditional statements, and array manipulation techniques. The choice of algorithm depends on factors such as the size of the data, the distribution of the data, and the desired stability or adaptability of the sorting process.

3. **Time Complexity**: The time complexity of a sorting algorithm indicates how its performance scales with the size of the input data. Sorting algorithms can have different time complexities, ranging from O(n^2) for inefficient algorithms like Bubble Sort and Selection Sort, to O(n log n) for more efficient algorithms like Merge Sort and Quick Sort.

4. **Space Complexity**: The space complexity of a sorting algorithm refers to the amount of additional memory it requires to perform the sorting operation. In-place sorting algorithms modify the input array itself without requiring additional memory, while others may require additional memory for temporary storage.

5. **Stability**: Stability refers to whether the sorting algorithm preserves the relative order of equal elements in the sorted output. A stable sorting algorithm maintains the order of equal elements as they appear in the original input array.

6. **Adaptability**: Some sorting algorithms are adaptive, meaning they perform better when the input data is partially sorted or nearly sorted. Adaptive sorting algorithms can take advantage of existing order in the data to improve performance.

7. **Library Functions**: In addition to implementing sorting algorithms from scratch, C also provides standard library functions like `qsort()` for quicksort and `bsearch()` for binary search, which can be used to sort arrays and search for elements in sorted arrays.

Understanding sorting algorithms and their properties is essential for writing efficient and scalable C programs that manipulate large datasets. By choosing the appropriate sorting algorithm for a given problem and implementing it effectively, you can optimize the performance and efficiency of your code.

Sure! Here are examples of various sorting algorithms implemented in C:

1. **Bubble Sort**:
```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

2. **Selection Sort**:
```c
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

3. **Insertion Sort**:
```c
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

These examples demonstrate the implementation of Bubble Sort, Selection Sort, and Insertion Sort in C. Each sorting algorithm sorts the given array in ascending order. You can modify the input array to test these algorithms with different datasets.

## Terminal functions
In C programming, you can interact with the terminal (command line interface) using various standard library functions provided by `<stdio.h>`. These functions allow you to read input from the terminal, display output to the terminal, and perform other operations such as clearing the screen or getting the current time. Here are some commonly used terminal functions in C:

1. **Input Functions**:
   - **scanf()**: Reads formatted input from the standard input (keyboard). It's commonly used to read user input from the terminal.
   - **fgets()**: Reads a line of text from the standard input (keyboard) and stores it in a string.
   - **getchar()**: Reads a single character from the standard input (keyboard).

2. **Output Functions**:
   - **printf()**: Prints formatted output to the standard output (terminal). It's commonly used to display messages, variables, and other data.
   - **puts()**: Prints a string followed by a newline character to the standard output (terminal).
   - **putchar()**: Prints a single character to the standard output (terminal).

3. **Terminal Control Functions**:
   - **system()**: Executes a command specified by a string in the terminal. It's commonly used to run external programs or system commands.
   - **getch()**: Reads a single character from the standard input (keyboard) without waiting for the Enter key to be pressed. This function is often used for interactive console-based applications.
   - **clrscr()**: Clears the screen of the terminal. This function is commonly used to provide a clean interface for displaying output.

Here's an example demonstrating the use of some of these terminal functions in C:

```c
#include <stdio.h>
#include <stdlib.h> // for system() function

int main() {
    char name[50];
    int age;

    // Reading input from the terminal
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    // Displaying output to the terminal
    printf("Hello, %s! You are %d years old.\n", name, age);

    // Using system() function to execute a command in the terminal
    system("ls -l");

    return 0;
}
```

This example prompts the user to enter their name and age, reads the input from the terminal using `scanf()`, and then displays a greeting message along with the entered name and age using `printf()`. Finally, it uses the `system()` function to execute the `ls -l` command in the terminal, which lists the contents of the current directory.