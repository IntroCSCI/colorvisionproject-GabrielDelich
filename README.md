# Palette Analyzer

# My program takes all the colors from the file and says how many in the file are unique colors. It then will determine based on what color blindness you are if they are compatable with your color blindness

## Developer

Gabriel Delich

## Example

To run the program, give the following commands:

```
example.css
```

Here is an example of the program running:

```
Please enter the file to be opened:
example.css

There are 904 unique colors in this file
Enter what type of Color Blindness you are:
(RG,BY,ALL)
RG
These colors are compatable with your file
```

## C++ Guide

### Variables and Data Types

We use a multiple array of variables and data types to achieve what the program does.
We use string to store inputs from the user, and to store data that was in a file
We use size_t to find the position of color in our file

### Console Input and Output

We prompt the user to enter in a file name which then opens up the file and counts all the data that has 'color' within the file

### Decisions

Using if statments in my code to find where in a file there is the word 'color' and then if there is printing out the word next to it.
I also use else to cover if the user doesnt inpout a valid file by saying 'Could not be opened'

### Iteration


What I originally set out to do was have a loop that went through the text file and stored all the data that was unique within that file.
Couldnt figure out how to do that.

### File Input and Output
We prompt the user to enter in a file name which then opens up the file and outputs all the data that has 'color' within the file
### Arrays/Vectors

I use the vector called [items] in my code to store all the colors that my program finds in a file. This vector is also used to see how many colors are within that file

### Functions
I use functions within my class to call upon code that has already been written. For example in my main.cpp to ask the user what type of Color Blindness they are I only use the code:
color.theBlindness();
This calls upon code that has already been written in another file

### Classes
I made a class called colors
This class has three functions:
1)It tells the user what file has been opened:
"The file *file* has been opened"
2)Prompts the user to enter what color blindness they are whether its red green, blue yellow, or all colors.
3) Then based on what they input the program will determine if the colors are compatable with there colorblindness

This class shows object oriented design as it allows for cleaner code in the main.cpp and gets me closer to the goal of this project by analyzing colors


