import React, { useState } from "react"; // Import React and useState hook
import "./LoginForm.css"; // Import CSS for styling
function LoginForm() {
 // State variables for storing username and password
 const [username, setUsername] = useState("");
 const [password, setPassword] = useState("");
 // Function to handle form submission
 const handleSubmit = (e) => {
 e.preventDefault(); // Prevents page reload
 alert(`Login successful for: ${username}`); // Displays an alert with username
 };
 return (
 <div className="login-container"> {/* Container for the form */}
 <h2>Login</h2>
 <form onSubmit={handleSubmit}>
 {/* Username input */}
 <label>Username:</label>
 <input type="text" value={username} onChange={(e) => setUsername(e.target.value)}
required />
 {/* Password input */}
 <label>Password:</label>
 <input type="password" value={password} onChange={(e) =>
setPassword(e.target.value)} required />
 {/* Submit button */}
 <button type="submit">Login</button>
 </form>
 </div>
 );
}
export default LoginForm; // Export component