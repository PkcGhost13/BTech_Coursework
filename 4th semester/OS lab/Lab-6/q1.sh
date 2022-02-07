#echo "Displaying 10 numbers using array : "
#arr=(1 2 3 4 5 6 7 8 9 10)
#echo ${arr[*]}

for((i=0;i<10;i++))
do
echo "Enter `expr $i + 1` Number"
read arr[$i]
done
echo "The entered array is :"
for((i=0;i<10;i++))
do
echo ${arr[$i]}
done