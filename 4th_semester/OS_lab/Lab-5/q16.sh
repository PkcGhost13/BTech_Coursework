echo "Enter the number of terms of fibonacci series to be printed :"
read n 
echo"The fibonacci series is as follows : "
nextTerm=1
term=0
echo "$term"
echo "$nextTerm"

while [ $n -gt 0 ]
do
sum=`expr $term + $nextTerm`
echo "$sum"
term=`expr $nextTerm`
nextTerm=`expr $sum`

n=`expr $n - 1`
done



