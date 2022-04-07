echo "Enter the value of n :"
read n

firstTerm=`expr $n + 1`
secondTerm=`expr $n \* 2 + 1`

#using the formulae for sum of square of natural numbers 
result=`expr $n \* $firstTerm \* $secondTerm / 6`

echo "Sum of squares from 1 to $n = $sum"
