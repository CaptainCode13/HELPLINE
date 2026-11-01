# College Helpline Page

A menu-driven C program that works as a quick helpline for college students.
Instead of searching through notices and websites, a student can open the program and get the information they need from one place.

## Features

1. **Grading System**: understand how grades are awarded.
2. **Examination Eligibility**: To check whether a student is eligible to appear in the examinations.
3. **Student Activity Societies**: view society details and registration information.
4. **Mentor Support**: To find contact information for mentors in the university.

## Concepts Used

- `switch-case` for handling the main menu choices
- `if-else` ladder for grading and eligibility decisions
- Input and output using `scanf` and `printf`

## Requirements

You need a C compiler (GCC) installed on your computer.

| System  | How to get GCC                                                                 |
|---------|--------------------------------------------------------------------------------|
| Windows | Install [MinGW-w64](https://www.mingw-w64.org/) or MSYS2 and add it to PATH    |
| macOS   | Run `xcode-select --install` in Terminal                                       |
| Linux   | Run `sudo apt install gcc` (Ubuntu/Debian) or use your distro's package manager |

To check that GCC is installed, run:

```
gcc --version
```

## How to Compile and Run

First, download or clone this repository and open a terminal in the project folder.

### Windows

Compile:

```
gcc helpline.c -o helpline.exe
```

Run:

```
.\helpline.exe
```

### macOS

Compile:

```
gcc helpline.c -o helpline
```

Run:

```
./helpline
```

### Linux

Compile:

```
gcc helpline.c -o helpline
```

Run:

```
./helpline
```

## How to Use

1. Run the program.
2. Enter the number of the option you want from the menu.
3. Follow the on-screen instructions.
4. Choose another option or exit when you are done.

## Project Structure

```
.
├── helpline.c   # Main source code
└── README.md    # Project documentation
```

## Future Improvements

- Version 2 with more features
- Storing student data in files
- More detailed information

## Author

Made by Pranshu Mishra [CaptainCode13](https://github.com/CaptainCode13)
