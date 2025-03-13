// Import required modules
const express = require('express');
const cors = require('cors');
const app = express(); // Create an Express app
const PORT = 5000; // Define the port number
// Middleware to enable CORS (Allows requests from different origins)
app.use(cors());
// Define a route to send a JSON response
app.get('/api/message', (req, res) => {
 res.json({ message: "Hello, World!" }); // Send "Hello, World!" message as a JSON response
});
// Start the server and listen on PORT 5000
app.listen(PORT, () => {
 console.log(`Server is running on http://localhost:${PORT}`);
});