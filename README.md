# Project README

## Overview
This project is an implementation of an Inverse Kinematics Snake using a C-based GUI library. It features dynamic rendering of snake segments based on user input and includes support for different build environments (Linux, Windows, Wine, and WebAssembly).

## Features
- **Dynamic Rendering**: Segments of the snake are dynamically rendered based on user input.
- **Two Modes**: Supports static and dynamic updates to the snake's movement.
- **Cross-Platform Build**: Can be compiled and executed on Linux, Windows, and WebAssembly.

## Project Structure
```
# Project Organization:
Gui_InvKin_Snake/
├── build/              # .exe files produced by Main.c
├── libs/               # *.c for bin
├── lib/                # librarys for my own languages
├── code/               # scripts from my custom languages for example .rex, .ll, .omml
├── data/               # Datafile for example .txt or dumped files
├── assets/             # images and sound files
├── src/                # src code
│   ├── Main.c          # Entry point
│   └── *.h             # stand alone Header-based C-files, without *.c files that implement it
├── Makefile.linux      # Linux Build configuration
├── Makefile.windows    # Windows Build configuration
├── Makefile.wine       # Wine Build configuration
└── README.md           # This file
└── LICENSE             # Project license
└── .gitignore          # Git ignore rules
```

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools
- Libraries needed in specific projects (example given WINAPI, X11, ALSA)

## Build & Run
To build the project:

```sh
cd Gui_InvKin_Snake
make -f Makefile.linux all  # For Linux
make -f Makefile.windows all  # For Windows
make -f Makefile.wine all  # For Wine cross-compile for windows
make -f Makefile.web all  # For Webassembly
```

For clean rebuild:

```sh
make -f Makefile.linux clean  # For Linux
make -f Makefile.windows clean  # For Windows
make -f Makefile.wine clean  # For Wine cross-compile for windows
make -f Makefile.web clean  # For Webassembly
```

Build Options:
- `all`: Build output.
- `do`: Build + exe output.
- `clean`: Remove build artifacts.

To execute it with make:

```sh
make -f Makefile.linux exe  # For Linux
make -f Makefile.windows exe  # For Windows
make -f Makefile.wine exe  # For Wine cross-compile for windows
make -f Makefile.web exe  # For Webassembly
```

This README provides a clear and concise overview of the project, its features, structure, prerequisites, and build instructions.