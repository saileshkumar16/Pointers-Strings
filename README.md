# C Pointers & Strings for Embedded Systems 🧠

Hey there. This is just a personal repo where I'm working through C programming problems that involve a mix of pointers and strings.

I'm focusing on this combo because it's a huge part of my work in embedded systems. When you're dealing with microcontrollers and limited memory, you can't always rely on fancy libraries. You have to get your hands dirty with pointers to handle things like parsing UART messages, reading from sensors, or building a simple command menu.

This repo is my way of practicing and keeping notes on these essential skills.

---

## The Problems I've Solved

Here’s a list of the problems I've tackled so far. Each one is in its own folder.

| #  | Problem                                       | File Link                             | What I Learned/Practiced                     |
|:---|:----------------------------------------------|:--------------------------------------|:---------------------------------------------|
| 01 | Reverse a string in-place.                    | `01_reverse_string/main.c`            | Pointer math, two-pointer trick              |
| 02 | Find string length without using `strlen`.    | `02_string_length/main.c`             | Looping with pointers, finding the `\0` char |
| 03 | Combine two strings without using `strcat`.   | `03_string_concat/main.c`             | Finding the end of a string, copying chars   |
|... | ...                                           | ...                                   | ...                                          |

I'll be adding more as I solve them.

---

## Want to Run the Code?

It's pretty straightforward.

1.  **Clone the repo:**
    ```bash
    git clone [https://github.com/your-username/your-repo-name.git](https://github.com/your-username/your-repo-name.git)
    ```
2.  **Pick a problem and `cd` into its folder:**
    ```bash
    cd 01_reverse_string
    ```
3.  **Compile it with GCC (or your favorite C compiler):**
    ```bash
    gcc main.c -o program
    ```
4.  **And run it:**
    ```bash
    ./program
    ```

---

## Some Core Ideas (A Quick Refresher)

* **C-Strings are just arrays:** Remember, a string in C is just an array of characters that ends with a special null character (`\0`). It's not a fancy object.
* **Pointers let you walk through memory:** We use pointer math (like `ptr++`) to move step-by-step through the string's characters.
* **`char *` vs. `char []` matters:** A string you make with `char name[] = "Alex";` can be changed. One you make with `char *name = "Alex";` points to read-only memory, so don't try to change it or your program will likely crash!

---

## Got Ideas?

If you have a cool problem that fits here or a better way to solve one of mine, feel free to open an issue or send a pull request. I'm always open to suggestions!
