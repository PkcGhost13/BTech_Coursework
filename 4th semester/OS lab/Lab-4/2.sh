echo "Enter the three digit number "
read n
s=0
while [ $n -gt 0 ]
do
m=`expr $n % 10`
s=`expr $s + $m`
n=`expr $n / 10`
done
echo "The sum of digits using while loop is : " $s

