echo "Enter a Number :"
read a
sum=0
num=$a
while [ $num -gt 0 ]
do
d=`expr $num % 10`
sum=`expr $sum \* 10 + $d`
num=`expr $num / 10`
done
if [ $sum -eq $a ]
then
echo "Palindrome Number"
else
echo "Not a Palindrome Number"
fi


