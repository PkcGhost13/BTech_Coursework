count=1;
echo "The numbers between 1 and 10 are :"
while [ $count -le 10 ]
do
echo "$count"
count=`expr $count + 1`
done 
