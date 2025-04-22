# Password Creator

A simple C++ application to generate secure and customizable passwords. This project was built as part of a semester assignment to demonstrate basic knowledge of C++ programming, random number generation, and user interaction via the console.

## Features

- Generates random secure passwords
- Allows user-defined password length
- Supports inclusion of:
  - Uppercase letters
  - Lowercase letters
  - Digits
  - Special characters

## How It Works

The program uses the C++ `<ctime>` and `<cstdlib>` libraries to generate random characters from a predefined set. It allows users to specify their preferences for password strength and structure.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- Terminal or command prompt

### Compilation

```bash
g++ projectpasswordcreatorforsem3.cpp -o passwordcreator
