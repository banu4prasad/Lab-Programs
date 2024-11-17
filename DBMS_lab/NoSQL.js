// MongoDB CRUD Operations
// ================================================

// 1. Setup
show dbs // shows all the databases present
use database_name // Creates and starts using the specified database

// ==================================================

// 2. Create
// i) Insert One Document
db.inventory.insertOne({
    item: "canvas",
    qty: 100,
    tags: ["cotton"],
    size: { h: 28, w: 35.5, uom: "cm" }
});

// ii) Insert Multiple Documents
db.inventory.insertMany([
    {
        item: "journal",
        qty: 25,
        tags: ["blank", "red"],
        size: { h: 14, w: 21, uom: "cm" }
    },
    {
        item: "mat",
        qty: 85,
        tags: ["gray"],
        size: { h: 27.9, w: 35.5, uom: "cm" }
    },
    {
        item: "mousepad",
        qty: 25,
        tags: ["gel", "blue"],
        size: { h: 19, w: 22.85, uom: "cm" }
    }
]);

// ==================================================

// 3. Read
// i) Find a document where the item is "canvas"
db.inventory.find({ item: "canvas" });

// ii) Find a document where qty is 90
db.inventory.find({ qty: 90 });

// iii) Find documents where tags include "red" or "D"
db.inventory.find({ tags: { $in: ["red", "D"] } });

// ==================================================

// 4. Update
// i) Update one document where the item is "paper"
db.inventory.updateOne(
    { item: "paper" },
    {
        $set: { "size.uom": "cm", status: "P" },
        $currentDate: { lastModified: true }
    }
);

// ii) Update multiple documents where qty is less than 50
db.inventory.updateMany(
    { qty: { $lt: 50 } },
    {
        $set: { "size.uom": "in", status: "P" },
        $currentDate: { lastModified: true }
    }
);

// ==================================================

// 5. Delete
// i) Delete one document (the first inserted query)
db.inventory.deleteOne();

// ii) Delete all documents
db.inventory.deleteMany();

// ==================================================
