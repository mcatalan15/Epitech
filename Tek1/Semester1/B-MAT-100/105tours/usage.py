##
## EPITECH PROJECT, 2022
## usage
## File description:
## the output if it's given -h as a paramenter
##

def usage():
    print ("USAGE",'\n','\t',"./105torus opt a0 a1 a2 a3 a4 n",'\n')
    print ("DESCRIPTION",'\n','\t',"opt",'\t','\t',"method option:",'\n',
            '\t','\t','\t',"   1 for the bisection method",'\n',
            '\t','\t','\t',"   2 for Newton’s method",'\n',
            '\t','\t','\t',"   3 for the secant method",'\n',
            '\t',"a[0-4]",'\t',"coefficients of the equation",'\n',
            '\t',"n",'\t','\t',"precision (the application of the polynomial to the solution should",
            "be smaller than 10ˆ-n)")