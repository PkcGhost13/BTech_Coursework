echo "Enter the number of elements in the array :"
read n
flag=0
echo "Enter the elements in the array :"
for ((i = 0; i < n; i++)) 
do
    read arr[i]
done
echo "Enter the element whose position is to be found"
read ele
for ((i=0; i<n; i++))
do
if [ ${arr[i]} -eq $ele ]
then
i=`expr $i + 1`
echo "Position of $ele in array is : $i"
flag=1
break
fi
done
if [ $flag -ne 1 ]
then
echo "Element not found !"
fi