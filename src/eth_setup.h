#include <ETH.h>

// Ethernet pins for WT32-ETH01
// These are common defaults for ESP32 boards with LAN8720A PHY
// As I was unable to find the specific pinout for the WT32-ETH01,
// these values are educated guesses.
#define ETH_PHY_TYPE    ETH_PHY_LAN8720
#define ETH_PHY_ADDR    1
#define ETH_PHY_POWER   12
#define ETH_PHY_MDC     23
#define ETH_PHY_MDIO    18
#define ETH_CLK_MODE    ETH_CLOCK_GPIO0_IN

// Function to connect to Ethernet
void connect_ethernet() {
  ETH.begin(ETH_PHY_ADDR, ETH_PHY_POWER, ETH_PHY_MDC, ETH_PHY_MDIO, ETH_PHY_TYPE, ETH_CLK_MODE);
}
