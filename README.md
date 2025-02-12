# JSON-Based Dynamic Box Spawner in Unreal Engine

## Overview
This project is a **First-Person Shooter (FPS) game** developed in **Unreal Engine (latest version)** using **C++**. It dynamically spawns interactive colored boxes based on data fetched from an **online JSON source**. Each box has unique properties such as **color, health, score, and transform (position, rotation, scale)**, making the spawning system fully data-driven.

## Features
✅ Fetches JSON data from an online API
✅ Parses JSON to extract box properties
✅ Dynamically spawns boxes in the world
✅ Changes box color based on JSON data
✅ Boxes have health and scoring attributes
✅ Player can shoot and destroy boxes to earn points

## JSON Structure
```json
{
    "types": [
        {
            "name": "RedBox",
            "color": [255, 0, 0],
            "health": 5,
            "score": 10
        },
        {
            "name": "BlueBox",
            "color": [0, 0, 255],
            "health": 3,
            "score": 20
        }
    ],
    "objects": [
        {
            "type": "RedBox",
            "transform": {
                "location": [100, 200, 300],
                "rotation": [0, 45, 90],
                "scale": [1, 1, 1]
            }
        }
    ]
}
```

## How It Works
1. **Fetch JSON**: The game makes an HTTP request to retrieve JSON data.
2. **Parse JSON**: The response is deserialized into structured data.
3. **Store Data**: Box types and objects are mapped for easy lookup.
4. **Spawn Boxes**: Boxes are instantiated dynamically using C++.
5. **Set Material**: A dynamic material updates each box's color based on JSON.
6. **Gameplay Interaction**: Player shoots and destroys boxes, updating score.

## Key C++ Classes
### **1. `AJsonSpawner` (Handles JSON Fetch & Box Spawning)**
- Fetches JSON data via HTTP
- Parses JSON and extracts box types and objects
- Spawns boxes dynamically with transform settings

### **2. `ASpawnableBox` (Box Class)**
- Holds attributes like color, health, and score
- Applies dynamic material to set color
- Handles damage and destruction logic

## Setting Up the Project

   ```
1. **Open Unreal Engine** and build the project.
2. **Ensure Material Setup**:
   - Create a material (`M_Box`) with a **Vector Parameter (`BaseColor`)**.
   - Assign this material to `ASpawnableBox`.
3. **Run the Game** and verify that colored boxes spawn dynamically!

## Debugging & Logs
Enable logging to debug issues:
```cpp
UE_LOG(LogTemp, Warning, TEXT("Applying Color: R=%f, G=%f, B=%f"), ColorValue.R, ColorValue.G, ColorValue.B);
```
Check **Output Log** to verify if colors and materials are applied correctly.



