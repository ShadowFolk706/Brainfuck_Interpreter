# Brainfuck_Interpreter

This is a simple interpreter coded in C to interpret the esoteric (Monekyshit) programming language Brainfuck. Esoteric languages were made to be intentionally hard to understand and code.

Brainfuck is an interesting programming language as its entirity is consisted of only 8 characters. The way that Brainfuck works is that the programmer is given an array of 30,000 1 byte memory `slots`. These `slots` can store any number. The 8 characters that make up Brainfuck's syntax can manipulate the values stored in these `slots` as well as a pointer which can read from or write to the `slots`. The entirity of the language's syntax is included below.

```
> | Moves the pointer one `slot` to the right
< | Moves the pointer one `slot` to the left
+ | Increases the value stored in the `slot` the pointer is currently on by 1
- | Decreases the value stored in the `slot` the pointer is currently on by 1
[ | Indicates the begining of a loop, if loop requirements are met, then the pointer will skip the loop
] | Ends the loop when the pointer is looking at a `slot` with a value of 0
. | Prints the value stored in the `slot` to the console (ASCII Code used for characters)
, | One character (ASCII Code for the character) is inputed and stored into the `slot` the pointer is looking at
```

Whenever a program is run to the interpreter, all of the values in the slots are set back to 0. Any character that is not one of the aformentioned is ignored by the interpreter.

What Each File Is:
- README.md | Classic Readme file
- main.c | Code for project
- Hello, World Program.txt | File for TODO LIST steps 1-2, the contents of which will be used as a test on every step of the TODO LIST 
                           to make sure that that step is done as it contains both Brainfuck code as well as characters to be ignored

TODO LIST:
- [x] Be able to open and read individual characters from a file on the local computer
- [ ] Create interpreter that runs in CLion
- [ ] Create a Text Editor to code the Brainfuck in that will be interpreted in CLion
- [ ] Create a Text Editor that has a console for inputing values
- [ ] Create the final IDE by polishing up the latest iteration of the Text Editor
