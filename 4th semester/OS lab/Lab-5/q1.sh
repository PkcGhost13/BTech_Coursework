echo "Write your first number : "
read n1
echo "Write your second number : "
read n2
echo "The numbers before swap are :"
echo "The value of first variable is : $n1"
echo "The value of second variable is : $n2"
temp=$n1
n1=$n2
n2=$temp
echo "The swapped numbers are :"
echo "The value of first variable is : $n1"
echo "The value of second variable is : $n2"