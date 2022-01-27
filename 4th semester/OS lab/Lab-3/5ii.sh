echo "Enter the two numbers to be swapped: "
read a 
read b
echo "Values of a = $a and b = $b (before swapping)"
a=`expr $a + $b`
b=`expr $a - $b`
a=`expr $a - $b`
echo "Values of a = $a and b = $b (after swapping)"
