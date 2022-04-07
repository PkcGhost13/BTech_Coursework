#wap in shelln script to find a triangle is a right angled triangle.(enter three sides of the triangle
echo "Enter all 3 sides of triangle : "
read a b c

d=`expr $a \* $a`
e=`expr $b \* $b`
f=`expr $c \* $c`

e1=`expr $d + $e`
e2=`expr $e + $f`
e3=`expr $f + $d`

if [ $e1 -eq $f -o $e2 -eq $d -o $e3 -eq $e ]
then 
    echo "The given triangle is a right angle triangle"
else
    echo "The given triangle is not a right angle triangle "
fi