````markdown
# 💻 C++ Language - Practical

A collection of C++ programs demonstrating important **Object-Oriented Programming (OOP)** concepts through five practical exercises.

The project covers **classes and objects, constructors, encapsulation, inheritance, abstraction, virtual functions, pure virtual functions, and polymorphism**.

---

## 📌 Project Overview

This project contains five C++ practical programs based on different Object-Oriented Programming concepts.

The practicals demonstrate:

- Classes and Objects
- Parameterized Constructors
- Arrays of Objects
- Encapsulation
- Getters and Setters
- Inheritance
- Abstraction
- Virtual Functions
- Pure Virtual Functions
- Polymorphism
- Base Class Pointers
- Abstract Classes

---

## 🛠️ Technologies Used

- **Language:** C++
- **IDE:** Visual Studio Code
- **Compiler:** GCC / G++
- **Programming Paradigm:** Object-Oriented Programming

---

# 📚 Practical Questions

## 1. Student Class – Constructor and Array of Objects

Create a `Student` class with private attributes:

- `name`
- `rollNumber`

A **parameterized constructor** is used to initialize the student details.

An array of `Student` objects is created to demonstrate the instantiation of multiple objects using the constructor.

### Concepts Used

- Class
- Objects
- Private data members
- Parameterized constructor
- Array of objects

### Program File

```text
Que-1.cpp
````

### Output

```text
outputs/
├── q-1.1.png
└── q-1.2.png
```

---

# 2. Car Class – Encapsulation

Create a `Car` class with private attributes:

* `model`
* `year`
* `speed`

Public member functions are implemented to **set and get** the values of these attributes.

The program demonstrates **encapsulation** by accessing private attributes through public member functions.

### Concepts Used

* Encapsulation
* Private attributes
* Public methods
* Getter functions
* Setter functions
* Classes and Objects

### Program File

```text
Que-2.cpp
```

### Output

```text
outputs/
└── q-2.png
```

---

# 3. Device Hierarchy – Inheritance and Abstraction

A base class `Device` is created with private attributes:

* `brand`
* `powerConsumption`

Public methods are provided to set and get these values.

Two classes are derived from `Device`:

```text
Device
├── Laptop
└── Smartphone
```

Each derived class contains methods to display information specific to that device.

### Concepts Used

* Inheritance
* Base class
* Derived classes
* Abstraction
* Getters and setters
* Method implementation

### Program File

```text
Que-3.cpp
```

### Output

```text
outputs/
├── q-3.1.png
└── q-3.2.png
```

---

# 4. Device Hierarchy – Virtual Function and Polymorphism

The `Device` hierarchy from Question 3 is extended by adding a virtual function:

```cpp
calculateDiscount()
```

The function is implemented differently in each derived class.

An array of `Device` pointers is created, with each pointer referring to objects of different device types.

The `calculateDiscount()` function is then called for each object to demonstrate **runtime polymorphism**.

### Concepts Used

* Virtual functions
* Function overriding
* Runtime polymorphism
* Base class pointers
* Derived classes
* Array of pointers

### Program File

```text
Que-4.cpp
```

### Output

```text
outputs/
└── q-4.png
```

---

# 5. Animal Class – Abstract Class and Pure Virtual Functions

An abstract class `Animal` is created with two pure virtual functions:

```cpp
makeSound()
move()
```

Two concrete classes are derived from `Animal`:

```text
Animal
├── Lion
└── Fish
```

The program creates an array of `Animal` pointers pointing to objects of both `Lion` and `Fish`.

The `makeSound()` and `move()` functions are called for each object to demonstrate **polymorphism**.

### Concepts Used

* Abstract class
* Pure virtual functions
* Inheritance
* Function overriding
* Polymorphism
* Base class pointers
* Arrays of pointers

### Program File

```text
Que-5.cpp
```

### Output

```text
outputs/
└── q-5.png
```

---

# 🧠 OOP Concepts Covered

| Practical  | Main Concept                           |
| ---------- | -------------------------------------- |
| Question 1 | Class, Object & Constructor            |
| Question 2 | Encapsulation                          |
| Question 3 | Inheritance & Abstraction              |
| Question 4 | Virtual Function & Polymorphism        |
| Question 5 | Abstract Class & Pure Virtual Function |

---

# 📂 Project Structure

```text
EXAM_CPP/
│
├── outputs/
│   ├── q-1.1.png
│   ├── q-1.2.png
│   ├── q-2.png
│   ├── q-3.1.png
│   ├── q-3.2.png
│   ├── q-4.png
│   └── q-5.png
│
├── Que-1.cpp
├── Que-2.cpp
├── Que-3.cpp
├── Que-4.cpp
├── Que-5.cpp
│
└── README.md
```
## 🖥️ Sample Output

### Question 1 - Output 1

![Question 1 Output 1](outputs/q-1.1.png)

### Question 1 - Output 2

![Question 1 Output 2](outputs/q-1.2.png)

### Question 2 - Output

![Question 2 Output](outputs/q-2.png)

### Question 3 - Output 1

![Question 3 Output 1](outputs/q-3.1.png)

### Question 3 - Output 2

![Question 3 Output 2](outputs/q-3.2.png)

### Question 4 - Output

![Question 4 Output](outputs/q-4.png)

### Question 5 - Output

![Question 5 Output](outputs/q-5.png)

---
---

# ▶️ How to Run

### 1. Open the Project

Open the `EXAM_CPP` folder in **Visual Studio Code**.

### 2. Compile a Program

For example:

```bash
g++ Que-1.cpp -o Que-1
```

### 3. Run the Program

On Windows:

```bash
Que-1
```

Similarly, other programs can be compiled and executed:

```bash
g++ Que-2.cpp -o Que-2
g++ Que-3.cpp -o Que-3
g++ Que-4.cpp -o Que-4
g++ Que-5.cpp -o Que-5
```

---

# 🎯 Project Objective

The objective of this practical project is to understand and implement fundamental **Object-Oriented Programming concepts in C++**.

Through these five programs, the project demonstrates how C++ supports:

* Creating classes and objects
* Initializing objects using constructors
* Protecting data using encapsulation
* Reusing code through inheritance
* Hiding implementation using abstraction
* Using virtual and pure virtual functions
* Achieving runtime polymorphism

```

**One important correction:** I kept the README based on the **questions and exact files visible in your screenshots**, rather than inventing details about what your `.cpp` files actually contain.
```
