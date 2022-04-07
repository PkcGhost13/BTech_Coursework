echo "Enter the number of elements in the array :"
read n
echo "Enter the elements in the array :"
for ((i = 0; i < n; i++)) 
do
    read arr[i]
done
echo "The entered array is : "
echo ${arr[*]}
for ((i = 0; i < n; i++)) 
do
    for ((j = i+1; j < n; j++)) 
    do
        if [ ${arr[i]} -eq ${arr[j]} ]
        then
            for((k=j;k<n;k++))
            do
                arr[k]=${arr[k+1]}
            done
            n=`expr $n - 1`
        fi
    done
done
echo "The altered array is : "
echo ${arr[*]}

