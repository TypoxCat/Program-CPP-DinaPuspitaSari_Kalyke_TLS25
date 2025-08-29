1. Start the program.
2. Display a menu:
    - Option 1: Make a password.
    - Option 2: Decrypt a password.
3. Read the user's choice.
4. If the user chooses Option 1 (Make a password):
    a. Ask for the original word (plain text).
    b. Store the input in `input` and calculate its length (`len`).
    c. Remove all vowels from the original word.
    d. Reverse the remaining characters.
    e. Convert the first character of the original word to its ASCII code.
    f. Insert the ASCII code into the middle of the reversed string.
    g. Display the generated password.
5. Else if the user chooses Option 2 (Decrypt a password):
    a. Ask for the password.
    b. Store the input in `input` and calculate its length (`len`).
    c. Remove all numeric characters (the ASCII code) from the password.
    d. Reverse the remaining characters to restore their original order (without vowels).
    e. Display the reconstructed text (partial word without vowels).
    f. Note: Full original word cannot be perfectly retrieved because vowels are permanently removed.
6. If the user enters an invalid option, restart the program.
7. End the program.
