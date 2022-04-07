echo "Enter the num :"
read num 
rem=`expr $num % 2`
if [ $rem -eq 0 ]
then 
echo "The entered number is even "
else
echo "The entered number is odd"
fi
