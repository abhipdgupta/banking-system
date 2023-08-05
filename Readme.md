# MyBankingSystem - C++ Project with CMake

MyBankingSystem is a simple C++ project that simulates a basic banking system. It demonstrates the use of CMake for building and organizing the project, as well as C++ features like namespaces, header files, and modularity.

---


## Project Structure

The project is structured as follows:

MyBankingSystem   
│  
├───include  
│   ├───Account.h  
│   ├───Transaction.h  
│   └───MyBank.h  
│  
├───src  
│   ├───Account.cpp  
│   ├───Transaction.cpp  
│   └───main.cpp  
│  
├───CMakeLists.txt  
└───README.md   


---


- `include`: This directory contains header files for the `Account` and `Transaction` classes, as well as a common header file `MyBank.h` to include all the headers.
- `src`: This directory contains the implementation files for the classes and the main program.
- `CMakeLists.txt`: This is the CMake configuration file for generating build scripts.

---


## Build Instructions

To build the project, follow these steps:

1. Make sure you have CMake installed on your system.
2. Open a terminal or command prompt.
3. Navigate to the root directory of the project (`MyBankingSystem`).
4. Create a new directory called `build`: `mkdir build`
5. Change into the `build` directory: `cd build`
6. Generate the build files with CMake: `cmake ..`
7. Build the project using the generated build system:
   - On Unix-like systems (e.g., Linux, macOS): `make`
   - On Windows using Visual Studio: Open the generated solution file (`MyBankingSystem.sln`) and build the project from the IDE.

After a successful build, you should find the executable `MyBankingSystem` in the `build` directory. Run it from the command line to execute the banking system simulation.

---


## Usage

The program simulates a simple banking system where you can create accounts, perform deposits, and withdrawals. It also shows basic transaction details.


---

## Features and Improvements

The current version of the project is a simple demonstration of CMake, namespaces, and header files. To expand the project further, you can consider adding the following features:

1. Error Handling: Implement robust error handling for user input and transaction operations.
2. Database Integration: Integrate a simple database (e.g., SQLite) to store account information persistently.
3. Additional Banking Features: Add more banking features such as balance inquiries, account statements, etc.
4. Graphical User Interface (GUI): Create a graphical user interface using a library like Qt for a more user-friendly experience.
5. Unit Tests: Write unit tests using a framework like Google Test to ensure code correctness.




