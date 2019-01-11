Task 6 - Developer Workbook

Q1. Describe the properties and function of dynamic variables in C.
In  C language dynamic variables are grouped using a couple of standard library functions. The malloc() function allows for a single parameter, this is the size of the allowed storage place in the unit of bytes. It outputs a pointer to the location in which the memory is stored in. If the storage fails, the output returns null. The free() function gets a pointer that is outputted by the malloc() function and un-allocates the storage area. There is no sign if the output has been succeeded or has failed.
The C library function void *malloc(size_t size) allocates the requested memory and returns a pointer to it. Dynamic 
variables  are done at runtime  and are useful in circumstances where for you dont know the number of different variables your program might want to manipulate when you are writing it , in such circumstances you insert code into your program which creates/destroys variables on as a needed basis.





Q2. Describe medium-size application development in detail with regard to:
- dividing source code into multiple files
- the use of header files in C
- the use of C libraries
In a medium sized application development dividing the source code into multiple files is easier to handle if every file serves only one topic you know quickly where to look. You also immediately know what does not belong to the topic without having to read the comments.
Multiple files allow for non-linear organisation. The building blocks of a program rarely follow a single linear chain of interactions. Loosely coupled components are easily represented by individual files and folders allow to add external structure distinct files are easier to reorganise. As complexity grows components move to sub packages and sometimes you just need to clean up. A file can simply be moved as a whole. Copy/Pasting to migrate code is more work especially if you have tacked on all the structuring manually. Individual files are easier to track. Code is ideally in a version control system. Basically a single file is to write. Multiple files are easier to read, maintain and manage for software developent the later is much more important. Even if you are working alone future you does not know everything that past you has done
The use of header files in C exist so as to share declerations among multiple source files. It is used to define all the functions, variables, and constants contained in any function library that you might want to use. Each header file contains information and declerations for a particular group of functions like "stdio.h" header file contains decleration prototypes of standard input/output functions available in C which is used to get the input and print the output.
There are system header files that come with the compiler and there are user header files thatare written by the programmer . So when we want to use any function in C we first need to import their definition from the C library, to do thiswe need to include the header file in the program by using #include and then the particular file,  eg if we want to use the printf() in our program we would include the stdio.h header file because it is in this file that the definition for printf() is written and the computer understands to print on screen , these are also called preprocessing directives.
The C libraries povide macros, type definitions and functions for tasks such as string handling mathematical computation , input/output processing, memory management and other operatingystem services.The main execution of a C program begins in the aptly named main() function.
Some libraries contain 3rd party code





Q3. Describe the properties and function of arrays in C.
An array holds elements that have the same data type which are stored in subsequent memory locations
Elements of an array are accessed by specifying the index ( offset ) of the desired element within square [ ] brackets after the array name. Array indices start at zero in C, and go to one less than the size of the array.  For example, a five element array will have indices zero through four.  This is because the index in C is actually an offset from the beginning of the array.  ( The first element is at the beginning of the array, and hence has zero offset. )
The loop is a sequence of instructions that is continually repeated until a certain condition is reached. Typically, a certain process is done, such as getting an item of data and changing it, and then some condition is checked such as whether a counter has reached a prescribed number. 
Fixed sized array is a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.





Q4. Describe the properties and function of file handling in C.
There are 4 basic operations that can be performed on any files in C programming language. They are:
*Opening/Creating a file
*Closing a file
*Reading a file
*Writing in a file

1. fopen() – To open a file -Declaration: FILE *fopen (const char *filename, const char *mode)
fopen() function is used to open a file to perform operations such as reading, writing etc. In a C program, we declare a file pointer and use fopen() as below. fopen() function creates a new file if the mentioned file name does not exist.
FILE *fp;
fp=fopen (“filename”, ”‘mode”);
Where,
fp – file pointer to the data type “FILE”.
filename – the actual file name with full path of the file.
mode – refers to the operation that will be performed on the file. Example: r, w, a, r+, w+ and a+.
2. fclose() – To close a file
Declaration: int fclose(FILE *fp);
fclose() function closes the file that is being pointed by file pointer fp. In a C program, we close a file as below.
fclose (fp);
3. fgets() – To read a file
Declaration: char *fgets(char *string, int n, FILE *fp)
fgets function is used to read a file line by line. In a C program, we use fgets function as below.
fgets (buffer, size, fp);
where,
buffer – buffer to  put the data in.
size – size of the buffer
fp – file pointer
4. fprintf() – To write into a file
Declaration:
int fprintf(FILE *fp, const char *format, …);fprintf() function writes string into a file pointed by fp. In a C program, we write string into a file as below.
fprintf (fp, “some data”); or
fprintf (fp, “text %d”, variable_name);





Q5. Describe the properties and function of user-defined data structures in C.
Sometimes there are multiple variables that should be grouped together and treated like one,  in C STRUCTS are variables that contain many other variables. Structs are often used by various system  functions and libraries so understanding how to use structs is a prerequisite to using these functions.  Structs creates a data type that can be used to group items of possibly different types into a single type to be placed under one name in a block of memory, allowing the different variables to be accessed via a single pointer, or the struct declared name which returns the same address. The struct data type can contain many other complex and simple data types in an association (members), C struct directly references a contiguous block of physical memory, usually delimited (sized) by word-length boundaries. 





Q6. Describe TWO development methodologies appropriate for the
development of small tools such as the ones implemented in this
assessment task.
Two software development methodologies that i believe are appropriate in implementing the development of small tools as in this assessment are the:
Agile software development  methodology: the main goal of agile methods is minimizing the risk by developing software in short timeboxes, called iterations, which typically last one to four weeks. Each timebox is like a mini software project that includes all the tasks necessary to release the mini-increment of new functionality:
*planning,
*requirements analysis,
*design,
*coding,
*testing, and
*documentation.
The iteration may not add enough functionality to warrant releasing the product, but an agile software project intends to be capable of releasing new software at the end of every iteration. After this iteration, the team reevaluates project priorities. Agile methods emphasize working product as the primary measure of the progress. Relative to the other methods Agile produce very little written documentation — the “real-time” is the preferable type of communication. Most of the development team members (and business owners too) are located nearby and can communicate face-to-face.
Main principles of Agile software development methodology: face-to-face meetings, constant cooperation, early and continuous delivery of the working software, transparency. Whenever there are unexpected or frequent changes either from the client’s side or internal, this model becomes the perfect choice for managers and team leaders.
The advantages of the Agile method are that its an adaptive approach that responds to changes favorably, allows for direct communication to maintain transparency, improves quality by finding and fixing defects quickly and identifying expectation mismatches early. 

The second development methodology i have chosen is the Rapid Application Development (RAD) Methodology it is created to take the maximum advantage of the development software. It aimed to reduce the amount of construction needed to build a product. RAD is a condensed development process that produces a high-quality system with low investment costs. It’s possible due to the ability to quickly adjust needed things. It aimed at providing quick results.
The RAD method is divided into four phases:requirements planning, user design, construction, cutover.
The user design and construction phases are repeated until the user approves that all of the requirements are met.
RAD is most effective for projects with a well-defined business objective and a clearly defined user group, but which are not computationally complex. It is especially useful if the project is of small to medium size and time sensitive. However, it requires a stable team composition with highly skilled developers. Deep knowledge is essential when working on a condensed development timeline that requires approval after each construction phase.
RAD (rapid application development) proposes that products can be developed faster and of higher quality by:
using workshops or focus groups to gather requirements
prototyping and user testing of designs
re-using software components
following a schedule that defers design improvements to the next product version
keeping review meetings and other team communication informal
RAD usually embraces object-oriented programming methodology, which inherently fosters software re-use.
Advantages are that it makes the entire development process effortless, assists client in taking quick reviews, encourages feedback from customers for improvement.
These methodologies have been chosen for these particular small tool projects such as the keylogger, password checker
and the hexdump test because they could be developed faster using the adaptive, cooperative and transparent and well defined objectives that are suited to these software development methodologies.





Q7. Outline the develoment of the C language, making reference to
the types of software C is intended for.
Dennis Ritchie at the Bell Telephone Laboratories developed C to be used on the Unix platform. It is a Low-level general-purpose, statically typed, cross-platform, procedural,  compiled , imperative programming language. It is used for implementing system software and application software and is one of the most-used computer programming languages of today. Further, it is fast, structured, portable and has a rich library. These features make C a general purpose programming language, and hence, it finds application across every domain in the programming world.
1. Operating Systems:
Scripting of UNIX operating system was the primary purpose behind creation of C. Additionally, as programs scripted in C get executed with speeds equivalent to assembly language, C language has been an integral part of the development of multiple operating systems. Unix-Kernel, Microsoft Windows utilities and operating system applications, and a large segment of the Android operating system have all been scripted in C.

2. Development of New Languages:
Efficiency of code execution and simplicity have resulted in C directly or indirectly influencing development of many languages including C++ which is C with classes, C#, D, Java, Limbo, JavaScript, Perl, UNIX’s C Shell, PHP and Python, and Verilog. These languages use C in variable capacity: for instance, in Python, C is used for building standard libraries, while others like C++, Perl and PHP have syntax and control structures based upon C.

3. Computation Platforms:
C implements algorithms and data structures swiftly, facilitating faster computations in programs. This has enabled the use of C in applications requiring higher degrees of calculations like MATLAB and Mathematica.

4. Embedded Systems:
Various features of C including direct access to machine level hardware APIs, presence of C compilers, deterministic resource use and dynamic memory allocation make C language an optimum choice for scripting applications and drivers of embedded systems.

5. Graphics and Games:
C language has been used in the development of a variety of graphics and gaming applications, such as chess, bouncing ball, archery etc.