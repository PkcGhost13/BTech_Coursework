echo "Enter the value of n"
read n
a=0
b=1
count=2
echo "Fibonacci series:"
echo $a
while [ $count -le $n ]
do
	echo $b
	fib=`expr $a + $b`
	a=$b
	b=$fib
	count=`expr $count + 1`
done


