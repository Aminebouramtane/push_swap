# PushSwap - 42 Project

PushSwap is a sorting algorithm project at 42. The goal is to write a program in C that sorts an array of integers using two stacks and a limited set of operations. This repository contains our solution for the PushSwap project.

## Overview

The PushSwap project consists of two programs:

1. **push_swap**: This program takes a list of integers as arguments and displays on the standard output the list of instructions to sort the integer arguments. The goal is to sort the integers with the minimum possible number of operations.
   
2. **checker**: This program takes a list of integers as arguments and reads instructions from the standard input. It applies these instructions to the given list of integers and then displays "OK" if the list is sorted or "KO" otherwise.

## How to Use

To use our PushSwap implementation, follow these steps:

1. **Clone the Repository**:

    ```
    git clone https://github.com/your_username/push_swap.git
    cd push_swap
    ```

2. **Compile**:

    ```
    make
    ```

3. **Run push_swap**:

    ```
    ./push_swap [list of integers]
    ```

4. **Run checker**:

    ```
    ./checker [list of integers]
    ```

5. **Example**:

    ```
    ./push_swap 3 1 4 2 | ./checker 3 1 4 2
    ```

6. **Flags**:

    Both push_swap and checker support the following flags:

    - `-v` or `--verbose`: Verbose mode displays each step of the sorting algorithm.

    Example:

    ```
    ./push_swap -v 3 1 4 2
    ```

    - `-h` or `--help`: Displays help information.

    Example:

    ```
    ./push_swap --help
    ```

## Resources

- [Subject PDF](https://cdn.intra.42.fr/pdf/pdf/4248/push_swap.en.pdf)

## Contributors

- [Your Name](https://github.com/your_username)
- [Teammate Name](https://github.com/teammate_username)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
