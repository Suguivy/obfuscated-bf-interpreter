# obfuscated-bf-interpreter
This is a simple interpreter of the esoteric Brainfuck programming language written in C.

(I doesn't seems to work on armv7l and aarch64, works on x86_64).

## Usage
Compile it:
```
$ gcc main.c -o bf
```
Run it with a file with Brainfuck code:
```
$ ./bf <your file>
```

### Running example
```
$ echo '++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.' > hello.bf
$ ./bf hello.bf
> Hello World!
```
