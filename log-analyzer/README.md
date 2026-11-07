```cpp
// log-analyzer.cpp — XYMYX
// Reads an auth.log-style file and reports failed SSH logins per IP.

struct Progress {
    bool stage0_setup          = true;   // WSL, Git, SSH key
    bool stage1_read_file      = true;   // ifstream, getline
    bool stage2_filter_failed  = true;   // find, string::npos
    bool stage3_extract_ip     = false;
    bool stage4_count_per_ip   = false;
    bool stage5_sort_and_warn  = false;  // warn on 5+ attempts
    bool stage6_error_handling = false;  // file name as argument
    bool stage7_structs        = false;
};

```cpp
// ===== What I learned =====

// Stage 0: Setup
// - set up WSL Ubuntu, navigated Windows files via /mnt/c/
// - configured Git identity with a GitHub noreply email
// - created an SSH key (ed25519), switched remote from HTTPS to SSH
// - learned why git add exists: choosing exactly what goes into a commit

// Stage 1: Reading files
// - ifstream opens a file, if (!file) checks if it worked
// - while (getline(file, line)) reads until the end of the file
// - line holds one line at a time; after the loop it is no longer useful
// - compiled with g++ -Wall -Wextra

// Stage 2: Filtering lines
// - line.find("text")  -> searches text inside a string
// - != string::npos    -> means "found"
// - failedCount++      -> counts matching lines

// ===== Where I got stuck =====

// - mixed up variables when adapting an example (declared line twice)
// - still too many typos (enld instead of endl, missing : in log lines)
//   -> working on reading my code more carefully before compiling
// - stage 2: mixed up comparisons (<= 0) with function calls (find)
//   -> needed the solution late at night, reviewed it the next day
```