echo "Enter the number of elements in the array :"
read n
echo "Enter the elements in the array :"
for ((i = 0; i < n; i++)) 
do
    read arr[i]
done
echo ${arr[*]}
max=${arr[0]}
min=${arr[0]}
for ((i = 0; i < n; i++)) 
do
    if [ ${arr[i]} -gt $max ] 
    then
        max=${arr[i]}
    fi
    if [ ${arr[i]} -lt $min ] 
    then
        min=${arr[i]}
    fi
done
echo "The largest element is : $max "
echo "The smallest element is : $min "
