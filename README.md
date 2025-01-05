# TokoSederhana

TokoSederhana is a simple C program to manage a store's inventory. It allows you to display a list of items, add new items, purchase items (reduce stock), calculate the total purchase, and search for items by name.

## Project Structure

- `CMakeLists.txt`: Configuration file for CMake build system.
- `main.c`: Main source file containing the implementation of the store's inventory management.

## Features

- Display a list of items
- Add new items to the list
- Purchase items (reduce stock)
- Calculate the total purchase
- Search for items by name

## Building the Project

To build the project, you need to have CMake installed. Follow these steps:

1. Create a build directory:
    ```sh
    mkdir build
    cd build
    ```

2. Run CMake to configure the project:
    ```sh
    cmake ..
    ```

3. Build the project:
    ```sh
    cmake --build .
    ```

## Running the Program

After building the project, you can run the executable:

```sh
./tokoSederhana
```