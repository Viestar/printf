 0x11. C - PRINTF
=================

 Teamwork project
------------------

### Collaborators

* FESTO MUWANGUZI

* SYLIVESTER MBERENGE

## Printf

* printf is a function in the C programming language that is used to print formatted output to the console or terminal. It stands for `print formatted`.

## Why printf ?

* printf is a tool that helps computers talk to people. When a computer wants to say something to you, it can use printf to print out a message on the screen. For example, if a computer wants to say `Hello!` to you, it can use printf to print out the word `Hello!` on the screen. But printf can do more than that - it can also print out numbers and other kinds of information in a special way, so that it looks nice and organized when you see it on the screen.

### Here are the some of examples of how printf can be used.

* Let's say you want to print the number 5 on the screen. You can use printf like this:

~~~
 **code**
printf("%d", 5);
~~~

* The %d is called a format specifier and tells printf to expect an integer value (i.e., a whole number) to be printed. The number 5 after the comma is the actual value that will be printed. So when you run this code, it will print the number 5 on the screen.

> Now let's say you want to print a message that includes some text and a number. You can use printf like this:

~~~
 **code**
printf("I have %d apples.", 3);
~~~

* In this example, the message `I have %d apples.` includes the format specifier %d, which tells printf to expect an integer value to be printed in place of %d. The number 3 after the comma is the actual value that will be printed in place of %d. So when you run this code, it will print the message `I have 3 apples.` on the screen.


### Why is printf so important in C programming.

* printf is an important function in C programming because it allows you to display output on the screen in a human-readable format. This is important because programs often need to communicate with users or other programs, and displaying output on the screen is a common way to do this.

* In addition to displaying simple text, printf can also be used to format output in various ways, such as displaying numbers, strings, or other data types in a specific format. This can be very useful when working with data that needs to be displayed in a certain way, such as financial data or scientific data.

* Another reason why printf is so important is that it is a standard function that is included in the C library. This means that it is available on any system that supports the C programming language, and programmers can rely on it being available and functioning consistently across different platforms and environments.

> Overall, printf is a very powerful and versatile function that is essential for many programming tasks in C.

### How to use printf'

* There are a few things to keep in mind while using printf,

1. Use format specifiers: printf uses format specifiers to format the output. These specifiers start with a % sign, followed by a letter or symbol that tells printf how to format the data that follows. For example, %d is a format specifier for integers and %f is a format specifier for floating-point numbers.

2. Format the output: Use format specifiers to format the output in a way that is easy to read and understand. For example, you can use the width and precision specifiers to control how many digits are displayed, or you can use flags to add padding or alignment to the output.

3. Use escape sequences: printf also supports escape sequences, which are special character sequences that have a specific meaning. For example, \n is an escape sequence that represents a newline character, and \t represents a tab character.

4. Use variables: Use variables to pass data to printf that you want to display. This makes your code more flexible and easier to read, as you can store data in variables and then pass them to printf using the appropriate format specifier.

> Here's an example of how to use printf to display a formatted message with variables:

```
 **code**
int apples = 5;
printf("I have %d apples\n", apples);
```
* *In this example, the %d format specifier is used to display the value of the apples variable, and the \n escape sequence is used to add a newline character after the output. This results in the message `I have 5 apples` being displayed on the screen.*

* By following these tips, you can use printf to its best ways to create clear, readable, and well-formatted output that communicates your program's results effectively.

> Compiled by
>
>> Festo and Viester.
