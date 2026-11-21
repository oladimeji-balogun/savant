# savant

A library management system in C++17. Books, patrons, borrowing, returns and reservations, eventually stored in SQLite.

I'm building it to get better at C++ beyond small exercises: a real CMake project, dependencies through vcpkg, tests with GoogleTest, and a design that has to hold together across several classes.

**Status: work in progress.** The domain model is being written. Storage, the CLI and real tests haven't started yet.

## Done so far

- `Book`: ISBN, title, author, publisher, publication date, category, copies available vs total
- `Patron`: name, email, phone
- `Transaction`: a loan with borrow, due and return dates, and a status (borrowed, returned, overdue)
- `Reservation`: a hold on a book (header done, implementation next)
- CMake + vcpkg setup with SQLite, spdlog and GoogleTest wired in

## Next

- finish `Reservation`
- SQLite persistence for each model
- a CLI for checking books out and in, reserving, and searching
- tests for the business rules (e.g. you can't borrow a book with no available copies)

## Building

You need CMake 3.22+, a C++17 compiler and [vcpkg](https://github.com/microsoft/vcpkg).

```bash
export VCPKG_ROOT=~/vcpkg   # wherever vcpkg is cloned
./build.sh
./build/savant
```

`build.sh` configures CMake with the vcpkg toolchain, builds, and symlinks `compile_commands.json` to the project root for clangd.

## Layout

```text
include/models/   class headers
src/models/       implementations
src/main.cpp      entry point
tests/            GoogleTest suite
```
