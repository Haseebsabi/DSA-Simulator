# DSA-Simulator
DSA Simulator is a gamified learning platform that makes Data Structures and Algorithms easy and engaging. Each DSA concept is transformed into an interactive simulation, helping users visualize operations, understand logic, and learn by doing rather than memorizing theory. Built for students and beginners. It simplifies complex ideas via gameplay.
# 🎮 DSA Simulator

## 📌 Project Overview
**DSA Simulator** is a console-based C++ project designed to make **Data Structures and Algorithms (DSA)** easier, interactive, and fun to learn.  
The project focuses on **visualization, gamification, and hands-on interaction** to help students understand abstract DSA concepts through real-time execution and step-by-step outputs.

---

## ❓ Problem Statement
Data Structures and Algorithms are considered one of the most challenging subjects in Computer Science due to:
- Abstract concepts
- Lack of visualization
- Difficulty in understanding internal working of algorithms

Students often struggle with:
- Step-by-step element swapping in sorting algorithms  
- Understanding **LIFO** vs **FIFO**  
- Visualizing pointer movement in linked lists  

This project solves these problems by converting DSA concepts into **interactive simulations and games**.

---

## 🎯 Project Objectives
- **Gamification of Learning**  
  Turning DSA concepts into interactive games (e.g., Stack Escape Room)

- **Visualization**  
  Step-by-step console output showing how data moves internally

- **Hands-on Interaction**  
  Users can input their own data (Integers, Characters, Strings)

- **Algorithm Logic Reinforcement**  
  Users guess next steps in algorithms to test understanding

---

## 📚 System Scope

### 🔹 Data Structures
- Arrays
- Stack
- Linear Queue
- Circular Queue
- Singly Linked List
- Doubly Linked List

### 🔹 Algorithms
- Linear Search
- Binary Search
- Bubble Sort
- Selection Sort
- Insertion Sort

### 🔹 Advanced Concepts
- Recursion
- Dynamic Memory Allocation
- Pointer-based Node Connections

---

## 🕹️ Game Catalog
| Concept | Game Title |
|------|------------|
| Array Insertion | The Array Architect |
| Array Deletion | The Data Cleaner |
| Linear Search | The Hidden Number |
| Binary Search | The Mind Reader |
| Bubble Sort | The Battle Arena |
| Selection Sort | The Showdown |
| Insertion Sort | The Secret Code |
| Stack | The Dungeon Escape Room |
| Linear Queue | Fast-Food Frenzy |
| Circular Queue | Zombie Survival Checkpoint |
| Singly Linked List | The Score Tracker |
| Doubly Linked List | The Music Playlist |
| Recursion | The Maze |

---

## 📜 Main Menu
```cpp
void menu() {
    cout << "\n ----- Our Menu for Today -----";
    cout << "\n1) Insertion\n2) Deletion\n3) Linear Search\n4) Binary Search\n5) Bubble Sort\n6) Selection Sort\n7) Insertion Sort\n8) Recursion\n9) Stack\n10) Linear Queue\n11) Circular Queue\n12) Singly Linked List\n13) Doubly Linked List\n0) Exit";
}
