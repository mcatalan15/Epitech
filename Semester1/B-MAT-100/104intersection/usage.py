##
## EPITECH PROJECT, 2022
## usage
## File description:
## the output if it's given -h as a paramenter
##

def usage(argv):
    print ("USAGE",'\n','\t',"./104intersection opt xp yp zp xv yv zv p",'\n')
    print ("DESCRIPTION",'\n','\t',"opt",'\t','\t',"surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone",'\n',
            '\t',"(xp, yp, zp)",'\t',"coordinates of a point by which the light ray passes through",'\n',
            '\t',"(xv, yv, zv)",'\t',"coordinates of a vector parallel to the light ray",'\n',
            '\t',"p",'\t','\t',"parameter: radius of the sphere, radius of the cylinder, or angle formed by the cone and the Z-axis",'\n')