# Data Types in C++

**Name:** Palak Soni  
**PRN:** 24070123069  
**Division:** ENTC-A3  
**Title:** Program on Data Types in C++
**Tools used:** Visual Studio Code
---

## Overview

This program explores some of the most commonly used **data types** in C++. The main objective is to understand how different types of data are stored in memory, how much space each occupies, and how to use them effectively in a program.

---

## Data Types Covered

1. **Integer (`int`)**  
   - Stores whole numbers like `5`, `100`, `-42`  
   - Usually takes **4 bytes** of memory

2. **Float (`float`)**  
   - Used for decimal values with single precision like `3.14`, `-0.5`  
   - Typically takes **4 bytes**

3. **Double (`double`)**  
   - Stores decimal values with double precision, offering more accuracy than `float`  
   - Occupies **8 bytes**

4. **Character (`char`)**  
   - Stores a single character such as `'A'` or `'z'`  
   - Takes **1 byte** of memory

5. **String (`string`)**  
   - Stores a sequence of characters, e.g., `"Hello"`  
   - Memory size varies since it uses **dynamic memory allocation**

6. **Boolean (`bool`)**  
   - Represents truth values: `true` or `false`  
   - Still takes **1 byte**, despite representing only 0 or 1

---

## Key Concepts Demonstrated

- **`sizeof()` Operator**  
  Used to determine how many bytes each data type occupies in memory.

- **Memory vs Value**  
  Even though some values (like a `bool`) are small in terms of information, they still take standard memory sizes due to how systems store them.

- **Choosing the Right Type**  
  The correct data type depends on the requirement:  
  Use `int` for counting, `float` or `double` for decimals, `char` for single letters, and `string` for words or sentences.

- **Input & Output**  
  Learned how to use `cin` and `cout` for taking input and displaying output in C++.

---
## SampleOutput
- Enter any integer:12
- Integer = 12 and size is 4 bytes
- Enter any number with decimal:12.12
- Float= 12.12 and size is 4 bytes
- Enter any number with decimal:12.78
- Double= 12.78 and size is 8 bytes
- Enter any string:palak
- String = palak and size is 32 bytes
- Enter any character:h
- Character = h and size is 1 bytes
- Enter any boolean:true
- Boolean = 0 and size is 1 bytes
- 
## Observations

- A `bool` takes 1 byte, not just 1 bit, due to system memory alignment.
- `double` is more precise than `float`, but consumes more memory.
- `string` is not a primitive type like `int`; it handles memory dynamically and is more complex internally.

---

Understanding data types is fundamental to writing efficient and correct C++ programs. This program helped visualize how much memory different variables take and emphasized the importance of choosing the appropriate type based on data and performance needs.

---


