import { sqaure, cube} from "./mathmodule.js";

const numbers = [2,4,6,8];

const student = {
    name: "Banuprasad",
    age: 21,
    course: "AIDS"
};

console.log("sqaure of numbers:");
for (const num of numbers) {
    console.log(`square of ${num}: ${sqaure(num)}`);
}

console.log("\n student details");
for (const key in student) {
    console.log(`${key}:${student[key]}`);
}

console.log("\n cubes of numbers");
numbers.forEach(num=>console.log(`Cube of ${num}:${cube(num)}`));
