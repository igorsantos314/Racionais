@echo off

gcc -c a4racionais.c
pause

gcc -c a4testrac.c
pause

gcc -o test.exe a4racionais.o a4testrac.o
pause

test.exe
pause