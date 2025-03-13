// Import React and useState
import React, { useState } from "react";
import "./App.css"; // Import styles
// Component to display the count
const DisplayCount = ({ count }) => <h2>Current Count: {count}</h2>;
// Counter component
const Counter = () => {
 const [count, setCount] = useState(0); // State to store count
 return (
 <div className="counter">
 <DisplayCount count={count} /> {/* Show count */}
 <button onClick={() => setCount(count + 1)}>Increment</button> {/* Increase count */}
 <button onClick={() => setCount(0)}>Reset</button> {/* Reset count */}
 </div>
 );
};
// Main App component
const App = () => (
 <div className="App">
 <h1>Counter App</h1> {/* App title */}
 <Counter /> {/* Show counter */}
 </div>
);
export default App;