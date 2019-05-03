# Sprint Challenge: Theory of Computation and Hash Tables

This challenge allows you to practice the concepts and techniques learned over the past week and apply them in a concrete project. This Sprint, we explored the history and theory of computation, diving deep into memory and pointers by building array functions and hash tables. In your challenge this week, you will demonstrate proficiency by filling out boolean truth tables and solving algorithms in C using hash tables.

## Instructions

**Read these instructions carefully. Understand exactly what is expected _before_ starting this Sprint Challenge.**

This is an individual assessment. All work must be your own. Your challenge score is a measure of your ability to work independently using the material covered through this sprint. You need to demonstrate proficiency in the concepts and objectives introduced and practiced in preceding days.

You are not allowed to collaborate during the Sprint Challenge. However, you are encouraged to follow the twenty-minute rule and seek support from your PM and Instructor in your cohort help channel on Slack. Your work reflects your proficiency in C and your command of the concepts and techniques in the computation theory and hash tables.

You have three hours to complete this challenge. Plan your time accordingly.

## Commits

Commit your code regularly and meaningfully. This helps both you (in case you ever need to return to old code for any number of reasons and your project manager.

## Description

This sprint challenge is divided up into three parts: Boolean algebra (11 points), hash tables (24 points) and a short interview (20 points). There is also a stretch goal in the boolean algebra section which should only be attempted after the rest of the problems have been completed.

## Interview Questions

During your challenge, you will be pulled aside by a PM for a 5 minute interview. During this interview, you will be expected to answer the following three questions:

1. What is a computer and how does it work?

- A computer is a device for storing and processing data.
- The device takes a set of instructions written in binary form, and executes them.
- The computer is also composed of multiple parts to make writing these instructions easier for the human.
- Generally, a computer consists of a motherboard, cpu, RAM (known as Random Access Memory) for handling volitile memory, and a hard drive for handling non volitile memory.
- A computer also supports optional IO devices such as a video card (sometimes embedded on the motherboard), a monitor, speakers, keyboard, mouse, and printer/scanner.

2. What is an array and how does it work?

- An array is a data structure which acts as a container of side-by-side index addresses which hold the same type of value.
- The array can be accessed using it's own variable name when it was instantiated, and pointing to the direct address within the array to obtain a specific value.
- Depending on the language, the value of the index address can be accessed by calling the index or the pointer to the address.
- Other loosely type languages throw in support of array-like structures such as python lists or javascript arrays... which allow you to not only store multiple types, but also offer prototype methods
- such as insert, pop, slice, ect...

3. What is a hash table and how does it work?

- A hash table is a different type of data structure used for optomized runtimes.
- It generally consists of a key/value pair, where the key lookup is O(1) runtime, and therefor finding a value using a key would be O(n) runtime.
- In C, you can optimize hash tables to store key/value pair in the node of a link list stored within an index of an array structure where these indexes are unique and formed together by using a hash function....
- Which makes the indexes an O(1) lookup time complexity.
- Also, if you wanted to store a link list as the value of the unique index, you can optomize the search time by resizing the hash table's index storage based upon the runtime to find a value in the link list or size of the link list.
- Resizing the index can offer a way to shorten your link lists, making the worst runtime of O(n) have a smaller n number which would shorten the runtime while maintaing the space complexity tradeoff.

You will receive points at the PM's discretion based on the following criteria:

- 20: Would love to have this person on my team!
- 14: Wouldn't mind working with this person.
- 10: Knowledge is lacking OR poor communication skills
- 6: Knowledge is lacking AND poor communication skills
- 2: You get 2 points for showing up

## Project Set Up

#### [Theory of Computation](https://github.com/LambdaSchool/Sprint-Challenge--Hash-Theory/tree/master/theory)

You can either copy your answers into a new text file or fill out the README with your solutions. Just make sure your PM knows where to find them.

#### [Hash Tables](https://github.com/LambdaSchool/Sprint-Challenge--Hash-Theory/tree/master/hash-tables)

For the hash tables portion of the sprint challenge, you'll be working through two algorithm problems that are amenable to being solved efficiently using a hash table. You know the drill at this point. Navigate into each exercise's directory, read the instructions for the exercise laid out in the README, implement your solution in the .c skeleton file, then make sure your code passes the tests by running the test script with make tests.

A hash table implementation has been included for you already. Your task is to get the tests passing (ideally using a hash table to do it). You can remind yourself of what hash table functions are available by looking at the hashtable.h header file that is included in each exercise directory (note that the hash table implementations for both exercises differ slightly).

## Minimum Viable Product

You can earn 35 points from the main coding portion of the sprint challenge and up to 4 extra points for completing the stretch goal. Stretch points will only be counted if all regular problems have been completed.

#### [Theory of Computation](https://github.com/LambdaSchool/Sprint-Challenge--Hash-Theory/tree/master/theory) - 11 pts

- Boolean 1 - 3 pt
- Boolean 2 - 3 pt
- Boolean 3 - 5 pt

#### [Hash Tables](https://github.com/LambdaSchool/Sprint-Challenge--Hash-Theory/tree/master/hash-tables) - 24 pts

- ex1 - 12 pts
- ex2 - 12 pts

Both Hash Table problems will be graded as follows:

- 3: Code attempted
- 6: Code resembles the correct solution
- 10: Tests pass
- 11: Tests pass, no hash table memory leaks
- 12: Tests pass, no hash table memory leaks, linear runtime complexity

#### [Computation Stretch](https://github.com/LambdaSchool/Sprint-Challenge--Hash-Theory/tree/master/theory) - 4 pts

- Truth Table - 1 pt
- Sum - 1 pt
- Carry - 2 pts

### Grading

Students can receive up to 55 points in total for this Sprint Challenge (not including 4 extra credit points).

- **Challenge**: 35
- **Interview**: 20

---

The score distributions are as follows:

- **3**: >= 48 points
- **2**: >= 35 points
- **1**: < 34 points
