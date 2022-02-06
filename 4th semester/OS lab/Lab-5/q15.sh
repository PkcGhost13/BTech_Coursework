echo "Enter the number : "
read number
num=$number
factorial=1

while [ $num -ge 1 ]
do
factorial=`expr $factorial \* $num`
num=`expr $num - 1`
done

echo "The factorial of $number is $factorial"



