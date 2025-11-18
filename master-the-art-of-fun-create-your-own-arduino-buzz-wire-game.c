// Simulate buzz wire detection events and feedback pattern
#include <stdio.h> // Logs
#include <unistd.h> // Delay

int main(void) { // Entry
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
} // End main
