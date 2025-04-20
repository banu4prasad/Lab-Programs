## Getting Started

Install dependencies

### Backend dependencies
```bash
cd backend
npm install
```

### Frontend dependencies
```bash
npx-create-react-app@latest frontend
cd frontend
npm install web-vitals
```

### Files to Edit

You only need to modify the following files inside the `frontend/src` and `/backend` folder:

#### 1. `App.js`

Main App code.

#### 2. `server.js`

Server listening code.


### Running the Project

Start the servers in separate terminal windows:

#### Backend
```bash
cd backend
node server.js
```

#### Frontend
```bash
cd frontend
npm start
```

### Directory Structure

```text
project/
├── backend/
│   ├── server.js
│   └── package.json
└── frontend/
    ├── src/
    │   ├── App.js
    └── package.json
```
