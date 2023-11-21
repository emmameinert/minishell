# minishell - a Unix project

Minishell is a self written shell, similar to bash with limited functions. 

It has a prompt, a history, can pipe and redirect. 
It covers some self coded builtins and can access the bash builtins as well.

Minishell is a group project from the 42 Curriculum in collaboration with Yoonseon Lee, Josefina Husso, Meri Eskelinen, Rosa Mäkinen and Vu Kieu Phong Vu.

## How to run the PinkShell

- git clone the github repository in a chosen directory
- cd minishell
- make
- ./minishell

- now you have a prompt and can use the minishell as normal

## The implementations

- it handles arguments with ', '', and $ as an expansion
  
- <  redirects input
  
- << Heredoc reads the input until a given delimiter
  
- " > " redirects output

- ">>" redirects output in append mode

- handles | pipes and some ctrl functionality like ctrl-C and ctrl-D
  
# The builtins (without options):
  
◦ echo

◦ cd

◦ pwd 

◦ export 

◦ unset 

◦ env 

◦ exit

