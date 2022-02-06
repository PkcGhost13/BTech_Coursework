echo "Enter the range :"
read num1 num2
echo "The palindrome numbers in the given range are :"
for((i=num1;i<=num2;i++))
do

temp=$i
rev=0

while [ $temp -gt 0 ]
do
lastDigit=`expr $temp % 10`
rev=`expr $rev \* 10 + $lastDigit`
temp=`expr $temp / 10`
done

if [ $rev -eq $i ]
then
echo "$i"
fi

done


