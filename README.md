# CSC 126: Introduction to Computer Science (C++)
> **Department of Computer Science | College of Staten Island (CUNY)**  
> Comprehensive portfolio of 22 programming labs, algorithmic problem-solving assignments, and modular systems implemented in C++.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg?style=flat&logo=c%2B%2B)
![Assignments](https://img.shields.io/badge/Assignments-22%20Completed-brightgreen.svg)
![Status](https://img.shields.io/badge/Coursework-Completed-success.svg)
![License](https://img.shields.io/badge/License-MIT-yellow.svg)

---

## 🎯 Purpose & Overview

This repository demonstrates my foundational software engineering competencies, algorithmic problem-solving, and procedural programming skills developed in **CSC 126 (Introduction to Computer Science)**. 

Through 22 practical projects, I progressed from foundational syntax and I/O handling to advanced data manipulation, multi-dimensional array processing, modular function design, and file stream persistence.

---

## 🧠 Core Competencies & What I Know

### 1. **C++ Foundations & Memory Fundamentals**
- **Strong Static Typing**: Working with primitive types (`int`, `double`, `float`, `char`, `bool`) and string manipulation (`std::string`).
- **Standard Library Proficiency**: Leveraging `<iostream>`, `<iomanip>`, `<cmath>`, `<fstream>`, `<cstdlib>`, and `<ctime>`.
- **Formatting & Streams**: Precise numerical formatting using stream manipulators (`std::fixed`, `std::setprecision`, `std::setw`).

### 2. **Algorithmic Logic & Control Structures**
- **Branching & Decision Trees**: Complex multi-branch conditionals (`if`, `else if`, `else`) and input verification.
- **Iteration**: Sentinel-controlled `while` loops, counter-controlled `for` loops, and multi-tier nested loops.
- **State Flow**: Building interactive CLI menu loops and stateful user interaction flows.

### 3. **Modular Software Design (Functions)**
- **Functional Decomposition**: Breaking complex monolithic requirements into reusable, single-responsibility helper functions.
- **Parameter Passing Mechanics**: Understanding value passing vs. pointer/array reference decay in function calls.
- **Interface Design**: Writing clean function prototypes, return types, and parameter lists.

### 4. **Data Structures & Collections**
- **1D Arrays**: Contiguous memory indexing, traversal, summation accumulators, and linear search algorithms.
- **2D Arrays & Matrices**: Multi-dimensional row/column indexing, nested loop coordinate scanning, and dynamic matrix population.
- **Statistical Algorithms**: Implementing algorithms for finding maximums, minimums, averages, and rates of change.

### 5. **File Stream Persistence & Error Handling**
- **File I/O (`<fstream>`)**: Reading structured external datasets into memory using `std::ifstream`.
- **Stream State Validation**: Graceful error handling checking file stream integrity (`!file`) and standard error reporting (`std::cerr`).

---

## ⭐ Featured Projects & Problem Showcases

### 🚀 [16_MotionAnalysis.cpp](./16_MotionAnalysis.cpp) — *Kinematics & Array Analytics*
- **Problem Solved**: Analyzes displacement measurements over uniform time steps to compute discrete average velocity intervals, formatting a publication-ready telemetry report and extracting peak/lowest velocity records.
- **Key Techniques**:
  - Modular design with distinct functions: `getData()`, `averageSpeedOverTimeInterval()`, `print()`, `HighAvgSpeed()`, `LowAvgSpeed()`.
  - Array parameter passing and parallel data tracking.
  - Tabular column formatting via `std::setw()` and `std::fixed`.

### 📂 [19_FileIOProcessor.cpp](./19_FileIOProcessor.cpp) — *Persistent File Processing & Search*
- **Problem Solved**: Reads a stream of integers from an external file (`numbers.txt`), dynamically validates file availability, calculates the total sum, and executes an extrema linear search to report the maximum value and its exact zero-based index.
- **Key Techniques**:
  - `std::ifstream` stream ingestion and EOF/stream state validation.
  - Linear search algorithm tracking index and maximum value in \(O(N)\) time complexity.
  - Safe stream closure and descriptive error reporting.

### 🎲 [23_2DArrayAnalyzer.cpp](./23_2DArrayAnalyzer.cpp) — *2D Matrix & Coordinate Scanning*
- **Problem Solved**: Instantiates a \(3 \times 10\) integer matrix, seeds a pseudo-random number generator with system time, populates each matrix cell, and executes a nested coordinate search to identify all matrix cells exceeding a numerical threshold.
- **Key Techniques**:
  - Multi-dimensional array allocation and nested loop iteration (\(i, j\)).
  - Pseudo-random number generation (`rand()`, `srand(time(0))`).
  - Coordinate filtering and formatted coordinate output `(row, col)`.

### 🎮 [09_DualGameMenu.cpp](./09_DualGameMenu.cpp) — *Interactive CLI State Machine*
- **Problem Solved**: Implements a multi-faceted text console entertainment engine offering users a choice between an interactive decision-branching restaurant simulation and a dynamic multi-variable MadLibs generator.
- **Key Techniques**:
  - Deeply nested conditional logic trees.
  - User input sanitization and multi-stage prompt collection.
  - Complex string templating and stream outputs.

---

## 📋 Complete Assignment & Problem Catalog

| # | Assignment File | Domain / Category | Key C++ Concepts Applied | Real-World Problem Solved |
|---|---|---|---|---|
| 01 | [01_HelloWorld.cpp](./01_HelloWorld.cpp) | Program Basics | `iostream`, `cout`, namespaces | Environment setup and console stream output |
| 02 | [02_AI_Glossary.cpp](./02_AI_Glossary.cpp) | Formatted Output | String literals, multi-line escape sequences | Structured technical reference documentation tool |
| 03 | [03_StockProfitCalculator.cpp](./03_StockProfitCalculator.cpp) | Financial Math | Arithmetic expressions, `setprecision(2)` | Investment profit/loss calculator across share purchases |
| 04 | [04_UnitConversion.cpp](./04_UnitConversion.cpp) | Scientific Conversion | Floating-point arithmetic, unit ratios | Engineering unit conversion utility |
| 05 | [05_MadLibsGame.cpp](./05_MadLibsGame.cpp) | String Processing | Console extraction (`cin`), string variables | Interactive story generation from user inputs |
| 06 | [06_TShirtInventory.cpp](./06_TShirtInventory.cpp) | Inventory Management | Array indexing, accumulators | Retail inventory tracking and stock calculation |
| 07 | [07_MonthPhaseDetector.cpp](./07_MonthPhaseDetector.cpp) | Calendar Logic | Conditional branching (`if-else`) | Date categorization and calendar phase detection |
| 08 | [08_RestaurantOrderSystem.cpp](./08_RestaurantOrderSystem.cpp) | Interactive Menus | Multi-level conditional logic | Point-of-sale customer food ordering terminal |
| 09 | [09_DualGameMenu.cpp](./09_DualGameMenu.cpp) | Game Systems | Nested conditionals, dynamic string composition | Multi-game CLI launcher (Adventure & MadLibs) |
| 10 | [10_WhileLoopControl.cpp](./10_WhileLoopControl.cpp) | Iteration | `while` loops, condition evaluation | Sentinel-controlled repetitive execution |
| 11 | [11_EvenOddAnalyzer.cpp](./11_EvenOddAnalyzer.cpp) | Number Theory | Modulo arithmetic (`%`), loop iterations | Numerical parity classifier across value ranges |
| 12 | [12_NestedLoopIndexComparator.cpp](./12_NestedLoopIndexComparator.cpp) | Nested Iteration | Multi-variable loop counters, index comparison | Coordinate grid traversal and comparison patterns |
| 13 | [13_DivisionCalculator.cpp](./13_DivisionCalculator.cpp) | Robust Arithmetic | Division logic, divide-by-zero validation | Safe numerical division with input validation |
| 14 | [14_PyramidVolumeCalculator.cpp](./14_PyramidVolumeCalculator.cpp) | Geometric Modeling | Mathematical formulas, variable scoping | 3D pyramid volume calculation based on dimensions |
| 15 | [15_TreasureHuntGame.cpp](./15_TreasureHuntGame.cpp) | Game Simulation | Interactive logic, random outcomes | Turn-based decision game with conditional rewards |
| 16 | [16_MotionAnalysis.cpp](./16_MotionAnalysis.cpp) | Scientific Computing | Arrays, modular functions, `iomanip` tables | Vehicle kinematic velocity and statistical telemetry |
| 17 | [17_ArrayDisplay.cpp](./17_ArrayDisplay.cpp) | Data Structures | 1D array traversal, boundary control | Sequential dataset formatting and display |
| 18 | [18_RandomArraySum.cpp](./18_RandomArraySum.cpp) | Stochastic Modeling | Pseudo-random numbers, array summation | Statistical sum and distribution across random samples |
| 19 | [19_FileIOProcessor.cpp](./19_FileIOProcessor.cpp) | File I/O & Search | `ifstream`, linear search, extrema tracking | Persistent numeric dataset ingestion and maximum finding |
| 20 | [20_MathFunctionsDemo.cpp](./20_MathFunctionsDemo.cpp) | Math Library | `<cmath>` operations (`sqrt`, `pow`, etc.) | Complex mathematical transformation and function testing |
| 22 | [22_ArithmeticReview.cpp](./22_ArithmeticReview.cpp) | Modular Functions | Function prototypes, return values | Modular calculation engine with reusable functions |
| 23 | [23_2DArrayAnalyzer.cpp](./23_2DArrayAnalyzer.cpp) | Matrix Computations | 2D arrays, nested loops, coordinate search | Multi-dimensional matrix filtering and threshold analysis |

---

## 🛠️ Build & Execution Guide

Each program is self-contained and conforms to standard modern C++ (C++11/14/17/20).

### Using GCC / G++ (Linux, macOS, MinGW on Windows)
```bash
# Compile any assignment
g++ -std=c++17 -Wall 16_MotionAnalysis.cpp -o MotionAnalysis

# Execute the binary
./MotionAnalysis
```

### Using Clang / LLVM
```bash
clang++ -std=c++17 -Wall 19_FileIOProcessor.cpp -o FileIOProcessor
./FileIOProcessor
```

### Using Microsoft Visual C++ (MSVC)
```cmd
cl.exe /EHsc 23_2DArrayAnalyzer.cpp
23_2DArrayAnalyzer.exe
```

---

## 👤 Author
- **Kendryck Garcia**
- **Course**: CSC 126 — Introduction to Computer Science
- **Institution**: College of Staten Island, City University of New York (CSI CUNY)
