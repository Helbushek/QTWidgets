# QT Widgets Showcase

A collection of Qt-based widget applications demonstrating various GUI functionalities using Qt 5.15. This project implements examples 2.7, 2.8, and 2.9 from the provided [Yandex Disk source](https://disk.yandex.ru/i/k0_Fn_KNxl-SGw), showcasing input validation, counter mechanics, and interactive graphics with event handling.

## Task

The task of this project is to copy example code numbered 2.7, 2.8, 2.9 from https://disk.yandex.ru/i/k0_Fn_KNxl-SGw

## Required software

- QT ver. 5.15

## Project Structure

The project is organized into three branches, each implementing a specific example from the source document. Below is a brief overview of each branch and its functionality:

- **`square` (Example 2.7)**: A widget application with an input field that validates user input and calculates the square of the entered number.
  - **Key Classes**: `MainWindow` (base class), `StrValidator` (input validation).
  - **Features**: Input validation, signal-slot connections for user interaction.

- **`counter` (Example 2.8)**: A widget application with two counters: one increments with each button click, and the other increments every five clicks.
  - **Key Classes**: `MainWindow` (base class), `Counter` (counter logic).
  - **Features**: Event handling, conditional logic for counters.

- **`events` (Example 2.9)**: A widget application with a painter area where a line and a square rotate in opposite directions, controlled by user input.
  - **Key Classes**: `MainWindow` (base class), `Figure` (custom base class for drawing figures), `MyLine` and `MyRect` (classes based on `Figure`), `Area` (class for handling events).
  - **Features**: Custom painting, event handling, rotation animations.

Each branch is a standalone Qt Widget application, utilizing the signal-slot mechanism provided by Qt libraries for interactivity.

## Screenshots

### Example 2.7 (Square)
![Square example](https://github.com/user-attachments/assets/8ab437c0-9f0c-4455-95a3-9e14e517cdce)

### Example 2.8 (Counters)
![Counter example](https://github.com/user-attachments/assets/5d676eb1-c96a-43e3-a126-3a10c77f6a16)

### Example 2.9 (Event handler)
![Events example](https://github.com/user-attachments/assets/ad29a881-2e1b-49be-a58c-103f85b7e0d6)

## About the Author
- Guthub: [Helbushek](https:/github.com/Helbushel)
- Gmail: gorevaya134@gmail.com
 

