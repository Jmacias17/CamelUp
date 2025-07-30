# 🐫 CamelUp

**CamelUp** is a digital recreation of the popular board game where players bet on camel races and influence the outcome with strategy and a bit of chaos. This version is a C++ implementation focused on replicating the game’s logic and structure for learning and experimentation.

---

## 📂 Project Overview

This project contains standalone C++ files that model the components of the CamelUp board game. It includes core classes for game actions, camels, tiles, messages, and more. These files are not final and are actively being refined for better modularity and game flow accuracy.

---

## 🚀 Features

- Camel movement and stacking logic  
- Action processing via `Action.h`  
- Tile placement mechanics with `Tile.h`  
- Messaging structure with `Message.h`  
- Central game loop in `main.cpp`  

---

## 🧩 Folder Structure

.
├── Action.h       → Player actions like rolling or betting  
├── Camel.h        → Camel class and movement logic  
├── Game           → Possibly a build artifact or subfolder  
├── Game.h         → Game state tracking and round logic  
├── Message.h      → In-game message handling  
├── Tile.h         → Desert tile placement and effects  
├── main.cpp       → Main driver for simulating the game  
└── ReadMe.md      → Project documentation  

---

## 🛠️ Getting Started

To compile and run the program locally:

```bash
g++ main.cpp -o camelup
./camelup
```

⚠️ Make sure all `.h` files are in the same directory as `main.cpp`. If you're using an IDE, you may need to configure your include paths accordingly.

---

## 📌 Notes

- This is a learning project, so the implementation may not match the full rules of the official Camel Up game.
- Logic and structure are prioritized over full gameplay fidelity at this stage.
- Areas for future improvement:
  - Full player interaction system
  - AI opponents
  - Turn and round tracking
  - Visual interface (GUI or web-based)
  - Multiplayer support

---

## 🤝 Contributing

Contributions are welcome! If you'd like to improve the game logic, refactor the code, or add new features, feel free to fork the repository and open a pull request.

---

## 📜 License

This project is licensed under the MIT License. You are free to use, modify, and distribute this software as long as the license terms are included with any distributions.
