# first-cpp-steps

My very first programs as a career changer from healthcare into IT. I started coding on **October 3, 2026**. This repo documents my first steps in C++.

## Projects

| File / Folder | Description |
|---|---|
| `bmr.cpp` | Basal metabolic rate calculator (Harris-Benedict). My very first program, written on day one |
| `temperature_converter.cpp` | Temperature converter (Celsius, Fahrenheit, Kelvin) with input validation, absolute zero check, repeat loop and functions |
| `log-analyzer/` | Work in progress: a command line tool that reads a Linux-style login log and will report failed logins per IP address. Currently reads a file and counts lines. Test data is made up |

## Version history

The converter grew step by step. Instead of keeping several files, I use Git tags to mark the milestones:

| Tag | What changed |
|---|---|
| `v1.0` | First version: Celsius to Fahrenheit |
| `v2.0` | Added Kelvin |
| `v2.1` | Input validation, absolute zero check, repeat loop, functions |

The old versions are still available. Note that the files had different names back then (before I renamed everything to English):

```bash
git show --stat v2.0              # see which files existed
git checkout v2.0                 # look at the whole project at that point
git checkout main                 # go back to the latest version
```

## How to compile

```bash
g++ -std=c++17 -Wall -Wextra temperature_converter.cpp -o temperature_converter
./temperature_converter
```

## What I learned

- Input and output with `cin` / `cout`
- Conditions and loops (`if`, `while`, `do-while`)
- Validating input and handling errors
- Writing my own functions
- Using Git: commits, tags and a clean project history

## About AI

I write the code myself and use AI as a tutor to explain concepts and review my mistakes.

## Next goals

- Finish the log analyzer (filter failed logins, count per IP, sort the output)
- Improve input handling in my programs (non-numeric input, value ranges)
- Linux and OverTheWire Bandit
- Security fundamentals

---

*XYMYX*