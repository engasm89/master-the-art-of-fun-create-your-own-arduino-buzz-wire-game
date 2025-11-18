/*
 * Course: Master The Art Of Fun Create Your Own Arduino Buzz Wire Game
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Master The Art Of Fun Create Your Own Arduino Buzz Wire Game" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/master-the-art-of-fun-create-your-own-arduino-buzz-wire-game/
 * Repository: https://github.com/engasm89/master-the-art-of-fun-create-your-own-arduino-buzz-wire-game
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Simulate buzz wire detection events and feedback pattern
#include <stdio.h> // Logs
#include <unistd.h> // Delay

int main(void) { // Program entry point
  printf("Master the Art of Fun: Create Your Own Arduino Buzz Wire Game\n"); // Title
  int contact[] = {0,0,1,0,1,1,0}; // Contact events
  for (int i = 0; i < 7; ++i) { // Iterate
    if (contact[i]) { // Contact
      printf("CONTACT: BUZZER=ON LED=FLASH\n"); // Feedback
    } else { // No contact
      printf("CLEAR: BUZZER=OFF LED=OFF\n"); // Idle
    } // End condition
    usleep(150000); // Delay
  } // End loop
  return 0; // Exit
} // End of main function
