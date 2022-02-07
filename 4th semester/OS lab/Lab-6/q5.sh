echo "Enter the elements in the array :"
for ((i = 0; i < 10; i++)); do
    read arr[i]
done
echo "The entered array is :"
echo ${arr[*]}
for ((i = 0; i < 10; i++)) 
do
    for ((j = 0; j < 10-i-1; j++)) 
    do
        k=`expr $j + 1`
        if [ ${arr[j]} -gt ${arr[k]} ]
        then
            temp=${arr[j]}
            arr[j]=${arr[k]}
            arr[k]=$temp
        fi
    done
done
echo "The sorted array is :"
echo ${arr[*]}
