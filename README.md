# CodeAlpha C++ Programming Internship Projects

This repository contains my completed C++ console applications for the **CodeAlpha C++ Programming Internship**.

## Projects Included

### 1. CGPA Calculator (`CGPA_Calculator.cpp`)
A console-based application that calculates a student's SGPA/CGPA from subject credits and grade points.
- **Features:**
  - Accepts multiple subjects with credit hours and grade points
  - Validates positive subject counts, credit hours, and non-negative grade points
  - Computes total credits, total weighted grade points, and final GPA formatted to 2 decimal places

### 2. Login and Registration System (`login_system.cpp`)
A file-backed authentication system for registering and verifying users via the console.
- **Features:**
  - New user registration with duplicate username prevention
  - Persistent credential storage using `users.txt` (`fstream`)
  - Login verification against stored user records
  - Menu-driven interface (`Register`, `Login`, `Exit`)

## How to Compile and Run

Make sure you have a C++ compiler such as `g++` installed:

```bash
# Compile and run CGPA Calculator
g++ CGPA_Calculator.cpp -o cgpa_calculator
./cgpa_calculator

# Compile and run Login System
g++ login_system.cpp -o login_system
./login_system

