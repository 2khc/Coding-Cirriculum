# CodingCurriculum
A coding curriculum designed by Kelvin Chan, Farooq Dean, Fasbeer Eskander, Thomas Yenbamroong

###Notes for the markers
This page is temporary for you to see our completed content. We are aiming to publish online on another host if GitHub happens to not be sufficient for our purposes.
The decided mark distributions are:  

Kelvin 27  
Farooq 26  
Thomas 24  
Fasbeer 23  

The syllabus we have been so far can be found in `/All Lessons and Code/LessonSyllabus.pdf`. That is the plan we will be following for our lessons.
So far we have 2 fully completed lessons and source code written for 4 lessons.

Finally we plan to include some images to break-up the text flow, but what these will be are currently undecided at the moment. It will depend upon the format taken
when the final content is published.

##### Table of Contents
[Welcome to C-alculator](#welcome-to-c-alculator)  
[About us](#about-us)  
[Overview](#coding-curriculum--overview-of-design-specifications)  
[Lesson 1: Getting Started](#lesson-1-getting-started)  

<h1>Welcome to C-alculator</h1>

<h2>What is this all about?</h2>

<p>But first let’s start from the very start. What exactly is programming? Is it the act of scheduling a television or radio program? Well yeah it is but not in the context we’re using it. Programming in general would be to provide specific instructions to a computer to do a certain task. These instructions usually take the form of an algorithm, a procedure to solve a problem or to carry out a specific task, in one of the many programming languages which are designed to communicate instructions to a machine. These may include writing an algorithm to make a robot move around in a circle, just like telling a dog to roll over.
</p>

<p>
Now, why should we learn C programming? Firstly, C has been there for a long time! The first C programming language was written in the early 1970s by Dennis Ritchie. C is a very low level language which means the source code we have written in C is very close to machine code which is the language the CPU understands.  It is a compiled language which is faster than higher level language while learning. As its name suggests, compared to low level languages it is further from machine code and closer to English language. Furthermore, C programming language has been the basis for a lot of other higher level programming languages like Java, PHP, JavaScript, Python, C++, Objective C and a lot more. Learning the basics of C and its syntax will also help beginners learn other C based languages much more efficiently. 

Well enough of this boring introduction, let’s start learning and have some fun!
</p>

<h3>About Us</h3>

<h4>Kelvin Chan</h4>
<p>My name is Kelvin, I was born in London though my parents were from Hong Kong. I feel that we're in an age that places extreme importance on computers. No matter where you are, what you want to do for work,
who you are, a computer is going to come in at some point and be needed to proceed. If you love technology, and you want to create things to be used on such technology, learning to program would be your first step into truly embracing the world of technology!</p>

<h4>Fasbeer</h4>
I'm Fasbeer Eskander, A 1st year in computer science at UCL. I've always been interested in programming and all the wonders one can do with technology if he knows how it is programmed and how to program one himself. With a keen interest on it from a child, i decided to do my Bsc on computer science and learn the DNA of computer programs.

<h4>Thomas</h4>
I'm Thomas, a first year computer science student at UCL. I first got inspired by the movie called The Social Network which is about how Facebook got started. Since then Facebook has gone on and made a number of big impacts in many aspects of our lives. This has me want to do the same, with the skills I've been learning as a computer scientist, to make the world a better place.


<h4>Farooq</h4>
<p>I'm Farooq Dean and I'm a computer science student at UCL. I try to learn languages in my spare time and sometimes play basketball.</p>


<h2>Coding Curriculum – Overview of Design Specifications</h2>

Below are a number of factors considered in designing and implementing our project. Each factor has been justified appropriately.

1. **Age range** – we are targeting candidates sitting their GCSE examinations, such as yourselves, i.e. age range 14-16. This is because:
  * Your age range is more suited to our chosen programming language (C), which is a little more complex than some more beginner-friendly languages such as Python. 
  * Learning about Computer Science at this age may inspire you to take an A-Level in the subject, and possibly consider a degree or even a career in Computer Science.
2. **Language being taught** – we are teaching the C programming language. This is because:
  * C has a large number of practical applications and can be used as a springboard for you learners to make their own projects. Other languages e.g. HTML (which isn’t strictly a programming language),generally  need supports like CSS in order to work well. C is “standalone” in that sense.
  * C provides a nice introduction to procedural programming.
3. **STEM theme** – our chosen STEM theme is mathematics. We want to teach you how to program in a mathematics context; i.e. with an end goal of making an application that helps people with mathematics.
4. **Description of learning experience:**
  * We have made a number of different calculators that provide various functions. We want you to progress through the structured lessons and gain a solid grounding in C
  * This includes ideas like the various loops (while, if, for), variables, basic data structures, functions, libraries and so on.
  * As you progress through the lessons, you will eventually end up building a calculator just like the one provided by us, with the same functionality. This will test and consolidate what you have learnt. 

##Lesson 1: Getting started

This first lesson will make sure that both you and your computer are prepared correctly to handle all the programming tasks you'll be completing as you progress through this course!

Let's get started. You'll be needing a text editor. If you're looking for something with a nice and beautiful theme, we recommend [Sublime Text 3](https://www.sublimetext.com/3), if you want something
a little more plain you can simply go for [Notepad++](https://notepad-plus-plus.org/download/v6.8.8.html).

The next step is to install a C **compiler** onto your computer. "What is a compiler?", you ask... Well, as mentioned earlier, C is a low-level programming language meaning that the commands in C are closely related to the instructions that your **computer processing unit** would run. **HOWEVER**, this still means that the language is undirectly unreadable by the CPU, as such, you need to first compile your code
such that it is translated into a form that your CPU can run.

Download the compiler [here](http://www.mingw.org/), you can see the button for "Download Installer" at the top right corner of the page.

Open your note editor and create a new file, save it with the C file extension, for example: "lesson1.c". We've decided to adhere to traditions so your first program will be a "Hello, world!" program, first this first lesson, just type out everything we tell you to, as the ultimate aim of this section is to teach you how to compile and run your code.

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, world");
}
```

That's it! A fully working program, but how do we run it? We can't simply just double-click on the file and hope it would do something useful... In other worlds, we must first compile it.

1. First, open your command-line or terminal. To do this on Windows, press Windows + R, then type cmd into the box and hit 'OK'. Meet the command-line interface, this scary black window, you'll become good friends with it on your programming journeys.
  * Navigate to the directory on your computer in which you saved the file.
  * For example, if I am currently in "C:/users/Documents" and I want to go into "C:/users/Documents/code", I would type "cd code" to move into the "code" folder.
  * If you wish to move up a folder, on Windows you can type "cd..", on an Mac or Linux type "cd .." (make sure to include that space).
2. Next, we shall compile the code.
  * Type "gcc" followed by the name of your file, then followed by the name you wish the compiled code to be.
  * For example "gcc lesson1.c output".
  * The compile file is now called output, and to run it you can type "output" and see the results of your program.

If you found this all simple enough, the real programming begins next lesson, as well as an introduction to what everything means, that program we just wrote together will all make sense very soon!

###Extra Task
Now that you know how to compile your code, spend a few minutes exploring your computer through the command-line, move around! Pick a distant folder and try to move into it from where you currently are! Try opening other files through the command-line… next time you want to listen to a music file, navigate there by command-line!