echo "Enter the number of elements in the array 1 :"
read n1
echo "Enter the elements in the array :"
for ((i = 0; i < n1; i++)) 
do
    read arr1[i]
done
echo "Enter the number of elements in the array 2 :"
read n2
echo "Enter the elements in the array :"
for ((i = 0; i < n2; i++)) 
do
    read arr2[i]
done
k=0
for ((i = 0; i < n1; i++)) 
do
    arr[k]=${arr1[i]}
    k=`expr $k + 1`
done
for ((i = 0; i < n2; i++)) 
do
    arr[k]=${arr2[i]}
    k=`expr $k + 1`
done
echo "The merged array is : "
echo ${arr[*]}
