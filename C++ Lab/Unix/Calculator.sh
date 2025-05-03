echo -p "Enter first number: " num1
echo -p "Enter operator (+, -, *, /): " op
echo "Enter second number: " num2
result=$(echo "$num1 $op $num2" | bc -l)
echo "Result: $result"