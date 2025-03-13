import React, { useState, useEffect } from "react";
function App() {
 // State to store the fetched message
 const [message, setMessage] = useState("Loading...");
 // Fetch the message from the backend when the component is loaded
 useEffect(() => {
 fetch("http://localhost:5000/api/message") // API endpoint from backend
 .then(response => response.json()) // Convert response to JSON format
 .then(data => setMessage(data.message)) // Update the state with the message
 .catch(error => console.error("Error fetching message:", error)); // Handle errors
 }, []); // Empty dependency array ensures it runs only once when the component loads
 return (
 <div style={{ textAlign: "center", marginTop: "50px" }}>
 {/* Display the fetched message */}
 <h1>{message}</h1>
 </div>
 );
}
export default App;