#include <ETH.h>

// Function to connect to Ethernet
// It will use the default pins defined in the board variant
void connect_ethernet() {
  ETH.begin();
}
