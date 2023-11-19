The aim of this project is to create an interpreter that interprets operations on a stack or queue.
the interpreter works this way: '$ monty file', where file contains the operation / operand in each line.

The first steps will be to :
open the file, read one line, create a parser that parses each line to an (operation, operand).
We will use open,read instead of fopen,fread,fgetc.
Errors commited during this phase: *line[][]  ,,,,  used char instead of char *  ,,,,  error: expected declaration specifiers or ‘...’ before string constant 43 | strcpy(line[1], "")  ,,,,  using read on char *str; without initialization (use char[determined_number] instead)  ,,,,  wrong condition in second if  ,,,, strcmp(line[i], "") didn't work for emptying, I had to use empty_line.
For simplicity of the code I will use a list[2][1000] to contain the operation and the operand (1000 is overkill xD) instead of a list and dynamicaly change it size each time with _realloc

The second step will be: 
implement push, pop and basic math operation
The parsing has been done in the step before. Now, we have an operation and operand. We need a fonction to convert and test if the operand is and to numerical value, and also a function that link the operation to a function. for that we have instructions_t.
We need to introduce the line_number for we will use it to print errors