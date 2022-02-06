echo "Enter the number :"
read num

count=0
temp=$num
sum=0

while [ $count -lt 3 ]
do
lastDigit=`expr $temp % 10`
sum=`expr $sum + $lastDigit \* $lastDigit`
temp=`expr $temp / 10`
count=`expr $count + 1`
done

echo "Sum of square of last 3 digits is : $sum"

