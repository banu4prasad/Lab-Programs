const express = require("express");
const mongoose = require("mongoose");
const cors = require("cors");

const app = express();
const PORT = 5000;

app.use(cors());
app.use(express.json());

// MongoDB Connection Setup | Copy the MongoDB URL from MongoDB Compass
const mongoDBUrl = "mongodb://localhost:27017";

// Function to connect to MongoDB
const connectDB = async () => {
 try {
 await mongoose.connect(mongoDBUrl, {
 useNewUrlParser: true, 
 useUnifiedTopology: true, 
 });
 console.log("MongoDB Connected"); 
 } catch (err) {
 console.error("MongoDB Connection Error:", err); 
 process.exit(1);
 }
};

connectDB();

// Define Product Schema using Mongoose
const ProductSchema = new mongoose.Schema({
 name: String, 
 price: Number, 
 category: String, 
});

// Create Product model from schema
const Product = mongoose.model("Product", ProductSchema);
app.post("/products", async (req, res) => {
 try {
 const { name, price, category } = req.body;
 const newProduct = new Product({ name, price, category });
 await newProduct.save(); 
 res.status(201).json({ message: "Product added", product: newProduct });
 } catch (err) {
 res.status(500).json({ error: err.message });
 }
});

app.get("/products", async (req, res) => {
 try {
 const products = await Product.find(); 
 res.json(products); 
 } catch (err) {
 res.status(500).json({ error: err.message }); 
 }
});
// Start the Express server and listen on the specified PORT
app.listen(PORT, () => console.log(`Server running on port ${PORT}`));
