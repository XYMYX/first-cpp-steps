# Log Analyzer

A command-line tool that reads an auth.log-style file and reports failed SSH logins per IP address.

## Progress
- [x] Stage 0: Test data and setup
- [x] Stage 1: Read file line by line and count lines
- [ ] Stage 2: Filter "Failed password" lines
- [ ] Stage 3: Extract IP addresses
- [ ] Stage 4: Count attempts per IP
- [ ] Stage 5: Sort output and warn on 5+ attempts
- [ ] Stage 6: Error handling and file name as argument
- [ ] Stage 7: Functions/struct and example output

## What I learned
**Stage 0: Setup**
- Set up WSL Ubuntu and navigated Windows files via /mnt/c/
- Configured Git identity with a GitHub noreply email
- Created an SSH key (ed25519) and switched the remote from HTTPS to SSH
- Learned why git add exists: choosing exactly what goes into a commit

**Stage 1: Reading files**
- ifstream opens a file, if (!file) checks if it worked
- while (getline(file, line)) reads until the end of the file
- line holds one line at a time; after the loop it is no longer useful
- Compiled with g++ -Wall -Wextra

## Where I got stuck
- Mixed up variables when adapting an example (declared line twice)
- I still make too many typos in my opinion (e.g. enld instead of endl, missing : in log lines). Im working on reading my code more carefully before compiling.

## AI usage
I write the code myself. AI is used only as a teacher for concepts, research and errors.