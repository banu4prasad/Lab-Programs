const calculator = {
    add: (a,b) => a+b,
    subtact: (a,b) => a-b,
    multiply: (a,b) => a*b,
    divide: (a,b) => (b!==0?a/b:'Error division by zero')
};

function* calculatorGenerator(a,b) {
    yield `Addition: ${calculator.add(a,b)}`;
    yield `Subtraction: ${calculator.subtact(a,b)}`;
    yield `multiply: ${calculator.multiply(a,b)}`;
    yield `divide: ${calculator.divide(a,b)}`;
}

const num1 = 10, num2 = 5;
const calcGen = calculatorGenerator(num1, num2);

console.log(calcGen.next().value);
console.log(calcGen.next().value);
console.log(calcGen.next().value);
console.log(calcGen.next().value);

