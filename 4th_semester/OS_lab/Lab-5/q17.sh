echo "Enter the number : "
read number

temp=$number
rev=0
sum=0

while [ $temp -gt 0 ]
do
lastDigit=`expr $temp % 10`
rev=`expr $rev \* 10 + $lastDigit`
sum=`expr $sum + $lastDigit`
temp=`expr $temp / 10`
done

echo "Reverse of the number is $rev  and Sum of the Digits is $sum"



