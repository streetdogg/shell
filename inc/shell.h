/**
 * File:        shell.h
 * Description: implements the shell header
 **/

/**
 * Copyright 2017 Piyush Itankar
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 **/

#ifndef __H_SHELL__
#define __H_SHELL__

#ifdef DEBUG
    #define DBG(x)  printf(x);printf("\n")
 #else
    #define DBG(x)  //
#endif

 #define PROMPT                     "# "
 #define SHELL_BUFFER_SIZE          64
 #define SHELL_NUMBER_OF_ARGUMENTS  64
 #define TRUE                       (1==1)
 #define FALSE                      (1==0)

void shell();
void parse_line(char** argv, char *line, int argument_size);
void execute(char **argv);

 #endif 