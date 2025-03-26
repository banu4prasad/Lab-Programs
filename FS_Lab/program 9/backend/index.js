const express = require("express"); // Import Express framework for building web server
const mongoose = require("mongoose"); // Import Mongoose to interact with MongoDB
const cors = require("cors"); // Import CORS to allow cross-origin requests

const app = express(); // Create an instance of Express application
const PORT = 5000; // Define the port number where the server will run

app.use(cors()); // Enable CORS to allow requests from different origins
app.use(express.json()); // Enable parsing of JSON data in request bodies

// MongoDB Connection Setup
// Copy the MongoDB URL from MongoDB Compass
const mongoDBUrl = "mongodb://localhost:27017";

// Function to connect to MongoDB
const connectDB = async () => {
 try {
 await mongoose.connect(mongoDBUrl, {
 useNewUrlParser: true, // Use new URL parser
 useUnifiedTopology: true, // Use modern server discovery and monitoring engine
 });
 console.log("MongoDB Connected"); // Log success message
 } catch (err) {
 console.error("MongoDB Connection Error:", err); // Log error if connection fails
 process.exit(1); // Exit the program in case of failure
 }
};

// Call the function to connect to MongoDB
connectDB();

// Define Product Schema using Mongoose
const ProductSchema = new mongoose.Schema({
 name: String, // Product name (String type)
 price: Number, // Product price (Number type)
 category: String, // Product category (String type)
});

// Create Product model from schema
const Product = mongoose.model("Product", ProductSchema);
// Route to insert a new product
app.post("/products", async (req, res) => {
 try {
 // Extract product details from request body
 const { name, price, category } = req.body;
 // Create a new Product object using the received data
 const newProduct = new Product({ name, price, category });
 await newProduct.save(); // Save the product in the database
 // Send a success response with the saved product details
 res.status(201).json({ message: "Product added", product: newProduct });
 } catch (err) {
 // If any error occurs, send an error response
 res.status(500).json({ error: err.message });
 }
});
// Route to get all products
app.get("/products", async (req, res) => {
 try {
 const products = await Product.find(); // Fetch all products from the database
 res.json(products); // Send the products as a JSON response
 } catch (err) {
 res.status(500).json({ error: err.message }); // Handle errors
 }
});

// Start the Express server and listen on the specified PORT
app.listen(PORT, () => console.log(`Server running on port ${PORT}`));